#include <stdio.h>

#define MAX 100

int buffer4_9[MAX];
static int bufPos = 0;

static int getch4_9() {
	if (bufPos > 0) {
		return buffer4_9[--bufPos];
	}
	else {
		return getchar();
	}
}

static void ungetch4_9(int c) {
	if (bufPos >= MAX) {
		printf("Too many character");
	}
	else {
		buffer4_9[bufPos++] = c;
	}
	return 0;
}