/* Function strrindex: find string matches pattern that right most of source */

#include <stdio.h>
#include <string.h>

#define MAXLINE 1000

int getline4_1(char s[], int limit);
int strrindex(char s[], char p[]);

static int getline4_1(char s[], int limit) {
	int i = 0, count = 0, c;

	while (count < limit - 1 && (c = getchar()) != EOF && c != '\n') {
		s[i++] = c;
		count++;
	}

	if (c = '\n') {
		s[i++] = c;
	}

	s[i] = '\0';

	return i;
}

static int strrindex(char s[], char p[]) {
	int i, j, k, rm = 0;

	for (i = 0; i < strlen(s); i++) {
		for (j = i, k = 0; s[j] == p[k] && s[j] != '\0'; j++, k++)
			;
		if (k > 0 && p[k] == '\0') {
			rm = i;
		}
	}

	if (rm != 0) {
		return rm;
	}
	else {
		return -1;
	}
}