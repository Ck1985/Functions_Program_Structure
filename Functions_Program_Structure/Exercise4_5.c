/* This program add any function math in math library math.h */

#include <stdio.h>
#include <ctype.h>

#define MAXVAL4_5 100
#define MAXOP4_5 100
#define NUMBER4_5 '0'
#define NAMEMATHFUNCTION 'm'
#define BUFFERSIZE4_5 100

double stackValue4_5[MAXVAL4_5];
static int stackPosition = 0;

char buffer4_5[BUFFERSIZE4_5];
static int bufferPosition = 0;

int getop4_5(char s[MAXOP4_5]);
double pop4_5(void);
void push4_5(double value);
int getch4_5(void);
void ungetch4_5(int c);
void clear4_5();

static int getop4_5(char s[MAXOP4_5]) {
	int i, c;
	
	for (i = 0; (s[0] = c = getch4_5()) == ' ' || c == '\t'; i++)
		;
	s[1] = '\0';
	if (!isdigit(c) && c != '.' && c != '-' && c != 'm') {
		return c;
	}
	i = 0;
	if (c == 'm') {
		while (islower(s[++i] = c = getch4_5()))
			;
		s[i] = '\0';
		return NAMEMATHFUNCTION;
	}
	if (isdigit(c)) {
		while (isdigit(s[++i] = c = getch4_5()))
			;
	}
	if (c == '.') {
		while (isdigit(s[++i] = c = getch4_5()))
			;
	}
	if (c == '-') {
		if (!isdigit(s[++i] = c = getch4_5())) {
			return '-';
		}
		else {
			while (isdigit(s[++i] = c = getch4_5()))
				;
			if (c == '.') {
				while (isdigit(s[++i] = c = getch4_5()))
					;
			}
		}
	}
	s[i] = '\0';
	if (c != EOF) {
		ungetch4_5(c);
	}
	return NUMBER4_5;
}

static double pop4_5(void) {
	if (stackPosition > 0) {
		return stackValue4_5[--stackPosition];
	}
	else {
		printf("Error ! stack is empty");
	}
}

static void push4_5(double value) {
	if (stackPosition < MAXVAL4_5) {
		stackValue4_5[stackPosition++] = value;
	}
	else {
		printf("Error ! stack is full");
	}
}

static int getch4_5(void) {
	return (bufferPosition > 0) ? buffer4_5[--bufferPosition] : getchar();
}

static void ungetch4_5(int c) {
	if (bufferPosition >= BUFFERSIZE4_5) {
		printf("Too many characters");
	}
	else {
		buffer4_5[bufferPosition++] = c;
	}
	return 0;
}

static void clear4_5() {
	stackPosition = 0;
	return 0;
}

static void ungets(char s[]) {
	int i;
	i = strlen(s);

	while (i > 0) {
		ungetch4_5(s[--i]);
	}
	return 0;
}