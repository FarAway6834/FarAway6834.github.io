#pragma once
#ifndef _PCDF_H
# define _PCDF_H

#include <pthread.h>
#include <immintrin.h> // AVX2 intrinsics
#include <omp.h>
#include <sys/mman.h> // For JIT memory allocation
#include <stdint.h>
#include <string.h>

#define REG
#define LIKELY(x) x
#define FORSE_ __attribute__((always_inline))
#define RST
#define OPTB

typedef void *autolike;
typedef void (*proceedings)(autolike);
typedef proceedings pcd;
typedef pcd *proceed_ptr;
typedef proceed_ptr pcdx;

typedef struct {
    pcdx workflow;
    pcdx ends;
} __scadule__;

typedef struct {
    __scadule__ list;
    autolike argument;
} scadule;

typedef scadule scad;


#define DEFINE_RUNC(hex, openmp, pthread, avx2, vector) \
FORSE_ inline void _runc_##hex(autolike target) { \
    REG scad *A = (scad *)target; \
    REG autolike argv = A->argument; \
    REG __scadule__ *RST B = &A->list; \
    OPTB \
    REG pcdx iter = B->workflow; \
    REG pcdx *ends = &B->ends; \
    if (openmp) { \
        #pragma omp parallel for \
        for (int i = 0; iter + i <= *ends; i++) { \
            (*(iter + i))(argv); \
        } \
    } else if (pthread) { \
        pthread_t threads[16]; \
        int i = 0; \
        while (iter <= *ends) { \
            pthread_create(&threads[i], NULL, (void *(*)(void *))(*iter), argv); \
            iter++; \
            i++; \
        } \
        for (int j = 0; j < i; j++) { \
            pthread_join(threads[j], NULL); \
        } \
    } else if (avx2) { \
        __m256i vec_arg = _mm256_set1_epi64x((long long)argv); \
        while (iter <= *ends) { \
            (*iter)((autolike)_mm256_extract_epi64(vec_arg, 0)); \
            iter++; \
        } \
    } else if (vector) { \
        #pragma GCC ivdep \
        for (; LIKELY(iter <= *ends); iter++) { \
            (*iter)(argv); \
        } \
    } else { \
        for (; LIKELY(iter <= *ends); iter++) { \
            (*iter)(argv); \
        } \
    } \
}

DEFINE_RUNC(0, 0, 0, 0, 0)
DEFINE_RUNC(1, 0, 0, 0, 1)
DEFINE_RUNC(2, 0, 0, 1, 0)
DEFINE_RUNC(3, 0, 0, 1, 1)
DEFINE_RUNC(4, 0, 1, 0, 0)
DEFINE_RUNC(5, 0, 1, 0, 1)
DEFINE_RUNC(6, 0, 1, 1, 0)
DEFINE_RUNC(7, 0, 1, 1, 1)
DEFINE_RUNC(8, 1, 0, 0, 0)
DEFINE_RUNC(9, 1, 0, 0, 1)
DEFINE_RUNC(A, 1, 0, 1, 0)
DEFINE_RUNC(B, 1, 0, 1, 1)
DEFINE_RUNC(C, 1, 1, 0, 0)
DEFINE_RUNC(D, 1, 1, 0, 1)
DEFINE_RUNC(E, 1, 1, 1, 0)
DEFINE_RUNC(F, 1, 1, 1, 1)

// Function to generate JIT compiled function for direct function calls
static void (*generate_jit_function(pcd target_func))(autolike) {
    uint8_t *code = mmap(NULL, 64, PROT_READ | PROT_WRITE | PROT_EXEC, MAP_ANONYMOUS | MAP_PRIVATE, -1, 0);
    if (code == MAP_FAILED) return NULL;

    // x86-64 assembly to call function directly
    uint8_t assembly[] = {
        0x48, 0x89, 0xF7,       // mov rdi, rsi (move argument to correct register)
        0x48, 0xB8,             // movabs rax, <target_func>
        0, 0, 0, 0, 0, 0, 0, 0, // (address placeholder)
        0xFF, 0xE0              // jmp rax (jump to function)
    };
    memcpy(&assembly[5], &target_func, sizeof(target_func));
    memcpy(code, assembly, sizeof(assembly));
    return (void (*)(autolike))code;
}

#define DEFINE_EXPERIMENTIAL_RUNC(hex, openmp, pthread, avx2, vector) \
FORSE_ inline void _experiemtial_runc_##hex(autolike target) { \
    REG scad *A = (scad *)target; \
    REG autolike argv = A->argument; \
    REG __scadule__ *RST B = &A->list; \
    OPTB \
    REG pcdx iter = B->workflow; \
    REG pcdx *ends = &B->ends; \
    \
    register autolike fixed_argv asm("rdi") = argv; /* Fix argv in rdi register */ \
    \
    if (openmp) { \
        #pragma omp parallel for \
        for (int i = 0; iter + i <= *ends; i++) { \
            pcd func = iter[i]; \
            __asm__ volatile("" ::: "rdi"); /* Tell compiler not to touch rdi */ \
            func(fixed_argv); \
        } \
    } else if (pthread) { \
        pthread_t threads[16]; \
        int i = 0; \
        while (iter <= *ends) { \
            pcd func = generate_jit_function(*iter); /* Use JIT compiled function */ \
            __asm__ volatile("" ::: "rdi"); \
            pthread_create(&threads[i], NULL, (void *(*)(void *))func, fixed_argv); \
            iter++; \
            i++; \
        } \
        for (int j = 0; j < i; j++) { \
            pthread_join(threads[j], NULL); \
        } \
    } else if (avx2) { \
        __m256i vec_arg = _mm256_set1_epi64x((long long)fixed_argv); \
        while (iter <= *ends) { \
            pcd func = generate_jit_function(*iter); /* Use JIT compiled function */ \
            __asm__ volatile("" ::: "rdi"); \
            func((autolike)_mm256_extract_epi64(vec_arg, 0)); \
            iter++; \
        } \
    } else if (vector) { \
        #pragma GCC ivdep \
        for (; LIKELY(iter <= *ends); iter++) { \
            __builtin_prefetch(iter + 4, 0, 1); /* Prefetch function pointer */ \
            pcd func = generate_jit_function(*iter); /* Use JIT compiled function */ \
            __asm__ volatile("" ::: "rdi"); \
            func(fixed_argv); \
        } \
    } else { \
        for (; LIKELY(iter <= *ends); iter++) { \
            __builtin_prefetch(iter + 4, 0, 1); /* Prefetch function pointer */ \
            pcd func = generate_jit_function(*iter); /* Use JIT compiled function */ \
            __asm__ volatile("" ::: "rdi"); \
            func(fixed_argv); \
        } \
    } \
}

DEFINE_EXPERIMENTIAL_RUNC(0, 0, 0, 0, 0)
DEFINE_EXPERIMENTIAL_RUNC(1, 0, 0, 0, 1)
DEFINE_EXPERIMENTIAL_RUNC(2, 0, 0, 1, 0)
DEFINE_EXPERIMENTIAL_RUNC(3, 0, 0, 1, 1)
DEFINE_EXPERIMENTIAL_RUNC(4, 0, 1, 0, 0)
DEFINE_EXPERIMENTIAL_RUNC(5, 0, 1, 0, 1)
DEFINE_EXPERIMENTIAL_RUNC(6, 0, 1, 1, 0)
DEFINE_EXPERIMENTIAL_RUNC(7, 0, 1, 1, 1)
DEFINE_EXPERIMENTIAL_RUNC(8, 1, 0, 0, 0)
DEFINE_EXPERIMENTIAL_RUNC(9, 1, 0, 0, 1)
DEFINE_EXPERIMENTIAL_RUNC(A, 1, 0, 1, 0)
DEFINE_EXPERIMENTIAL_RUNC(B, 1, 0, 1, 1)
DEFINE_EXPERIMENTIAL_RUNC(C, 1, 1, 0, 0)
DEFINE_EXPERIMENTIAL_RUNC(D, 1, 1, 0, 1)
DEFINE_EXPERIMENTIAL_RUNC(E, 1, 1, 1, 0)
DEFINE_EXPERIMENTIAL_RUNC(F, 1, 1, 1, 1)

// Scheduler structure for function execution
struct {
    pcd run;
} scaduler = {
    .run = pcdef(target) {_runc_0(target)}
};

#endif
