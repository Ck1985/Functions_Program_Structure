// Using function getline instead of getchar to read an entire input string

#include <stdio.h>
#include <ctype.h>

#define MAXOP4_10 100
#define NUMBER4_10 '0'
#define MAXVAL4_10 100
#define MAXLEN 100

static char arrayValue4_10[MAXOP4_10];
double stackValue4_10[MAXVAL4_10];
static int stackPos4_10 = 0;

static int in = 0;
static char input[MAXLEN];

static int getop4_10(char arrayValue4_10[MAXOP4_10], char input[MAXLEN]) {
	int ia = 0;
	while (input[in] == ' ' || input[in] == '\t') {
		++in;
	}
	if (!isdigit(input[in]) && (input[in] != '.') && input[in] != '\0') {
		return input[in++];
	}
	while (isdigit(input[in])) {
		arrayValue4_10[ia] = input[in];
		++ia;
		++in;
	}
	if (input[in] == '.') {
		while (isdigit(input[++in])) {
			arrayValue4_10[ia] = input[in];
			++ia;
		}
	}
	arrayValue4_10[ia] = '\0';
	if (input[in] == '\0') {
		return EOF;
	}
	return NUMBER4_10;
}

static double pop4_10(void) {
	if (stackPos4_10 > 0) {
		return stackValue4_10[--stackPos4_10];
	}
	else {
		printf("Stack is Empty");
	}
}

static void push4_10(double value) {
	if (stackPos4_10 < MAXVAL4_10) {
		stackValue4_10[stackPos4_10++] = value;
	}
	else {
		printf("Error! Stack is full");
	}
	return 0;
}

static int getline4_10(char s[], int lim) {
	int i, c;

	i = 0;
	while (--lim > 0 && (c = getchar()) != EOF && c != '\n') {
		s[i++] = c;
	}
	if (c == '\n') {
		s[i++] = c;
	}
	s[i] = '\0';
	return i;
}

