#pragma once
#ifndef _PCDF_H
# define _PCDF_H
#define PROCEEDING(x) [](autolike x)
#define pcdef PROCEEDING
//#define REG register
#define REG

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

struct
{
	pcd run;
} scaduler = {
	.run = pcdef(target) {
		REG scad *A = (scad *) target;
		REG autolike argv = A->argument;
		REG __scadule__ *B = &A->list;
		REG pcdx iter = B->workflow;
		REG pcdx *ends = &B->ends;
		
		for (; iter <= *ends; iter++)
		{
			(*iter)(argv);
		}
	}
};
#endif