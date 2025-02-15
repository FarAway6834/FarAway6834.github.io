#pragma once
#ifndef _PCDF_H
# define _PCDF_H
#define PROCEEDING(x) [](autolike x)
#define pcdef PROCEEDING
//#define REG register
#define REG
//#define LIKELY(x) __builtin_expect((x),1)
#define LIKELY(x) x
#define CACHE(x) __attribute__((aligned(x)))
#define CACHE64 CACHE(64)
#define LOCK1(x) static CACHE(x)
#define LOCK164 LOCK1(64)
#define LOAD(x) __builtin_prefetch(&x, 0, 3);
#define FORSE_ __attribute__((always_inline))
//#define RST restrict
#define RST
//#define OPTB B = __builtin_assume_aligned(B, 64);
#define OPTB

typedef void *autolike;
typedef void (*proceedings)(autolike);
typedef proceedings pcd;
typedef pcd *proceed_ptr;
typedef proceed_ptr pcdx;

typedef struct
{
	pcdx workflow;
	pcdx ends;
} __scadule__;

typedef struct
{
	__scadule__ list;
	autolike argument;
} scadule;

typedef scadule scad;

FORSE_ inline void _runc(autolike target) {
	REG scad *A = (scad *) target;
	REG autolike argv = A->argument;
	REG __scadule__ * RST B = &A->list;
	OPTB
	REG pcdx iter = B->workflow;
	REG pcdx *ends = &B->ends;
	
	for (; LIKELY(iter <= *ends); iter++)
	{
		(*iter)(argv); //how can fix to regset then junp?
	} //plz opt... as no fucking usless overhead... and super scala...
}

struct
{
	pcd run;
} scaduler = {
	.run = pcdef(target) {
};
#endif
