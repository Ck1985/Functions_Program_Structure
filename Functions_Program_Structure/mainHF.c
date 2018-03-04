/* This if mainHF.c file ////////*/

#include <stdio.h>
#include <stdlib.h>
#include "calcHF.h"

#define MAXOPHF 100

int main() {
	int type;
	double op2;
	char s[MAXOPHF];

	while ((type = getopHF(s)) != EOF) {
		switch (type) {
		case NUMBERHF:
			pushHF(atof(s));
			break;
		case '+':
			pushHF(popHF() + popHF());
			break;
		case '/':
			op2 = popHF();
			if (op2 == 0.0) {
				printf("Error! Division zero");
			}
			else {
				pushHF(popHF() / op2);
			}
			break;
		case '*':
			pushHF(popHF() * popHF());
			break;
		case '-':
			op2 = popHF();
			pushHF(popHF() - op2);
			break;
		case '\n':
			printf("Final result is: %.8g\n", popHF());
			break;
		default:
			printf("Error: unknow command");
			break;
		}
	}

	return 0;
}