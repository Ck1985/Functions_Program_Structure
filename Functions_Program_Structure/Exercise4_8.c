#include <stdio.h>

static char buffer4_8 = 0;

static int getch4_8() {
	if (buffer4_8 != 0) {
		return buffer4_8;
	}
	else {
		return getchar();
	}
	buffer4_8 = 0;
}

static void ungetch4_8(int c) {
	if (buffer4_8 != 0) {
		printf("Too many charracter");
	}
	else {
		buffer4_8 = c;
	}
}
