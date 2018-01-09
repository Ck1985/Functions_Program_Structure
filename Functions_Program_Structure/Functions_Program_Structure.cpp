// Functions_Program_Structure.cpp : Defines the entry point for the console application.

#include <stdio.h>
#include <ctype.h>
#include <float.h>
#include "Exercise4_1.c"

#define MAXLINE 1000		//Maximum input line length

int getline(char s[], int lim);
int strIndex(char source[], char searchfor[]);
int getline4_1(char s[], int limit);
int strrindex(char s[], char p[]);
double atof(char s[]);

char pattern[] = "ould";
char pattern4_1[] = "caoxuanquy"; /* Pattern to search for */

int main() {
	/* --------- find all lines matching pattern ---------------- */
	/*char line[MAXLINE];
	int found = 0;

	while (getline(line, MAXLINE) > 0) {
		if (strIndex(line, pattern) >= 0) {
			printf("%s\n", line);
			found++;
		}
	}
	
	return found; */

	/*char s[MAXLINE];
	int index;
	while (getline4_1(s, MAXLINE) > 0) {
		if ((index = strrindex(s, pattern4_1)) >= 0) {
			printf("String matches: %s\n", s);
			printf("Index matches right most: %d", index);
			return index;
		}
		return -1;
	}*/
	/* ---------------------------------------------------------- */

	/* ----------- Functions return non-integer ----------------- */
	/*char numDouble[] = "56.793";
	double result = atof(numDouble);
	printf("%f\n", result);*/

	/*double sum = 0, atof(char s[]);
	char line[MAXLINE];
	int getline(char s[], int max);

	while (getline(line, MAXLINE) > 0) {
		printf("\t%g\n", sum = sum + atof(line));
	}
	return 0;*/
	/* ---------------------------------------------------------- */

	return 0;
}

/* ---------- get lines into s and return length ---------------- */
int getline(char s[], int lim) {
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

/* ----------- return index of t in s, -1 if none ---------------- */
int strIndex(char s[], char t[]) {
	int i, j, k;

	for (i = 0; i < strlen(s); i++) {
		for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
			;
		if (t[k] == '\0' && k > 0) {
			return i;
		}
	}
	return -1;
}

/* atof: Convert string s to double */
double atof(char s[]) {
	int i, sign;
	double val, power;
	for (i = 0; isspace(s[i]); i++)
		;
	sign = ((s[i] == '-') ? -1 : 1);
	if (s[i] == '+' || s[i] == '-') {
		i++;
	}
	for (val = 0.0; isdigit(s[i]); i++) {
		val = 10.0 * val + (s[i] - '0');
	}
	if (s[i] == '.') {
		i++;
	}
	for (power = 1.0; isdigit(s[i]); i++) {
		val = 10.0 * val + (s[i] - '0');
		power *= 10.0;
	}
	return sign * (val / power);
}

