//#pragma once

#ifndef _RATIONAL_H_
#define _RATIONAL_H_


#include <stdio.h>
#include <stdbool.h>

typedef struct {
	int numerator;
	unsigned int denominator; 
} Rational;

extern int inputRat(Rational* x);
extern void outputRat(Rational x);
extern Rational addRat(Rational x, Rational y);
extern Rational multRat(Rational x, Rational y);
extern bool cmpRat(Rational x, Rational y);
extern void reduceRat(Rational* x);


#endif 