/* This is stackHF.c" file */

#include <stdio.h>
#include "calcHF.h"

#define MAXVALHF 100

static double valHF[MAXVALHF];
static int spHF = 0;

void pushHF(double value) {
	if (spHF < MAXVALHF) {
		valHF[spHF++] = value;
	}
	else {
		printf("Error! Stack full");
	}
}

double popHF(void) {
	if (spHF > 0) {
		return valHF[--spHF];
	}
	else {
		printf("Error Stack empty");
	}
}