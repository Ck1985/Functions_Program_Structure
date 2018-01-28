/* This is File: getopHF.c */

#include <stdio.h>
#include <ctype.h>
#include "calcHF.h"

int getopHF(char s[]) {
	int i, c;
	static int tempChar = 0;

	if (tempChar == 0) {
		c = getchHF();
	}
	else {
		c = tempChar;
		tempChar = 0;
	}

	while ((s[0] = c) == ' ' || c == '\t') {
		c = getchHF();
	}
	s[1] = '\0';
	if (!isdigit(c) && c != '.') {
		return c;
	}
	i = 0;
	if (isdigit(c)) {
		while (isdigit(s[++i] = c = getchHF()))
			;
	}
	if (c == '.') {
		while (isdigit(s[++i] = c = getchHF()))
			;
	}
	s[i] = '\0';
	if (c != EOF) {
		tempChar = c;
	}

	return NUMBERHF;
}