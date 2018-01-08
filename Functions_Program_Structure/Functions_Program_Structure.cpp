// Functions_Program_Structure.cpp : Defines the entry point for the console application.

#include <stdio.h>
#define MAXLINE 1000		//Maximum input line length

int getline(char s[], int lim);
int strIndex(char source[], char searchfor[]);

char pattern[] = "ould";		/* Pattern to search for */

int main() {
	/* --------- find all lines matching pattern ---------------- */
	/*char line[MAXLINE];
	int found = 0;

	while (getline(line, MAXLINE) > 0) {
		if (strIndex(line, pattern) >= 0) {
			printf("%s\n", line);
			found++;
		}
	}*/
	/* ---------------------------------------------------------- */
	// return found;

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

