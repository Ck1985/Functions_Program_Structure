#include <stdio.h>

extern int spSR2;
extern double valSR2[];

int popSR2(void) {
	spSR2 = 10;
}

void pushSR2(double value) {
	spSR2 = 12;
}