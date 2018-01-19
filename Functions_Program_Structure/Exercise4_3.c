#include <stdio.h>
#include <ctype.h>

#define MAXVAL4_3 100
#define NUMBER4_3 '0'
#define BUFFERSIZE 100

int bufferPos;
char buffer[BUFFERSIZE];
int stackPos;
double stackVal[MAXVAL4_3];

void ungetch4_3(int c);
int getch4_3(void);
void push4_3(double value);
double pop4_3(void);
int getop4_3(char s[MAXVAL4_3]);

static void push4_3(double value) {
	if (stackPos > MAXVAL4_3) {
		printf("Error: Stack is full !");
	}
	else {
		stackVal[stackPos++] = value;
	}
	return 0;
}

static double pop4_3(void) {
	if (stackPos > 0) {
		return stackVal[--stackPos];
	}
	else {
		printf("Error: Stack is Empty !");
	}
	return 0;
}

static int getop4_3(char s[MAXVAL4_3]) {
	int i, c;

	for (i = 0; (s[0] = c = getch4_3()) == ' ' || c == '\t'; i++)
		;
	s[1] = '\0';
	if (!isdigit(c) && c != '.' && c!= '-') {
		return c;
	}
	i = 0;
	if (isdigit(c)) {
		while (isdigit(s[++i] = c = getch4_3()))
			;
	}
	if (c == '.') {
		while (isdigit(s[++i] = c = getch4_3()))
			;
	}
	if (c == '-') {
		if (!isdigit(s[++i] = c = getch4_3())) {
			return '-';
		}
		else {
			while (isdigit(s[++i] = c = getch4_3()))
				;
			if (c == '.') {
				while (isdigit(s[++i] = c = getch4_3()))
					;
			}
		}
	}
	s[i] = '\0';
	if (c != EOF) {
		ungetch4_3(c);
	}
	return NUMBER4_3;
}

static int getch4_3(void) {
	return (bufferPos > 0) ? buffer[--bufferPos] : getchar();
}

static void ungetch4_3(int c) {
	if (bufferPos >= BUFFERSIZE) {
		printf("Error: Too many character !!!");
	}
	else {
		buffer[bufferPos++] = c;
	}
	return 0;
}

static void clear() {
	int stackPos = 0;
	stackPos = 0;
	return 0;
}

