#include <stdio.h>

#define BUFFSIZEHF 100

static char buffHF[BUFFSIZEHF];
static int bufpHF = 0;

int getchHF(void) {
	if (bufpHF > 0) {
		return buffHF[--bufpHF];
	}
	else {
		printf("Error ! buffer empty");
	}
}

void ungetchHF(int c) {

}