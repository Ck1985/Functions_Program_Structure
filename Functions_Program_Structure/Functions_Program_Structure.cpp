// Functions_Program_Structure.cpp : Defines the entry point for the console application.

#include <stdio.h>
#include <ctype.h>
#include <float.h>
#include <stdlib.h>         /* for atof() */
#include <math.h>
#include "Exercise4_1.c"
#include "Exercise4_2.c"
#include "Exercise4_3.c"
#include "Exercise4_4.c"
#include "Exercise4_5.c"
#include "Exercise4_8.c"
#include "Exercise4_9.c"
#include "Exercise4_10.c"

#define MAXLINE 1000		// Maximum input line length
#define MAXVAL 100			// max depth of val stack	

int getline(char s[], int lim);
int strIndex(char source[], char searchfor[]);
int getline4_1(char s[], int limit);
int strrindex(char s[], char p[]);
double myAtof(char s[]);
double atof_2(char s[]);
void push4_3(double value);
double pop4_3(void);
int getop4_3(char s[MAXVAL4_3]);
int getch4_3(void);
void ungetch4_3(int c);
void clear();
int getch4_8();
void ungetch4_8(int c);
int getch4_9(void);
void ungetch4_9(int c);
int getop4_10(char s[MAXOP4_10], char input[MAXLEN]);
double pop4_10(void);
void push4_10(double value);
int getline4_10(char s[], int lim);

char pattern[] = "ould";
char pattern4_1[] = "caoxuanquy"; /* Pattern to search for */

#define MAXOP 100			// max size of operand and operator
#define NUMBER '0'			// signal of number was found

int getop(char s[]);
void push(double f);
double pop(void);

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

	/* --------------- External Variables ---------------------- */
	// Reverse Polish calculator
	/*int type;
	double op2;
	char s[MAXOP];

	while ((type = getop(s)) != EOF) {
		switch (type) {
		case NUMBER:
			push(atof(s));
			break;
		case '+':
			push(pop() + pop());
			break;
		case '*':
			push(pop() * pop());
			break;
		case '-':
			op2 = pop();
			push(pop() - op2);
			break;
		case '/':
			op2 = pop();
			if (op2 != 0.0) {
				push(pop() / op2);
			}
			else {
				printf("Error: Division zero !");
			}
			break;
		case '\n':
			printf("\t%.8g\n", pop());
			break;
		default:
			printf("Error: Unknown command %s\n", s);
			break;
		}
	}*/

	// Exercise4_3
	/*int type;
	double op2;
	char s[MAXOP4_3];
	while ((type = getop4_3(s)) != EOF) {
		switch (type) {
		case NUMBER4_3:
			push4_3(atof(s));
			break;
		case '+':
			push4_3(pop4_3() + pop4_3());
			break;
		case '-':
			op2 = pop4_3();
			push4_3(pop4_3() - op2);
			break;
		case '*':
			push4_3(pop4_3() * pop4_3());
			break;
		case '/':
			op2 = pop4_3();
			if (op2 == 0.0) {
				printf("Error ! Division zero ");
			}
			else {
				push4_3(pop4_3() / op2);
			}
			break;
		case '%':
			op2 = pop4_3();
			if (op2 == 0.0) {
				printf("Error! Division Zero");
			}
			else {
				push4_3(fmod(pop4_3(), op2));
			}
			break;
		case '\n':
			printf("Result of Reverse Polish notation is: %g\n", pop4_3());
			break;
		default:
			printf("Error: Commnad unknow !!!");
		}
	}*/

	//Exercise4_4
	/*int type;
	double op1, op2;
	char s[MAXOP4_3];

	while ((type = getop4_3(s)) != EOF) {
		switch (type) {
		case NUMBER4_3:
			push4_3(atof(s));
			break;
		case '+':
			push4_3(pop4_3() + pop4_3());
			break;
		case '-':
			op2 = pop4_3();
			push4_3(pop4_3() - op2);
			break;
		case '*':
			push4_3(pop4_3() * pop4_3());
			break;
		case '/':
			op2 = pop4_3();
			if (op2 != 0.0) {
				push4_3(pop4_3() / op2);
			}
			else {
				printf("Error! Division zero");
			}
			break;
		case '%':
			op2 = pop4_3();
			if (op2 != 0.0) {
				push4_3(fmod(pop4_3(), op2));
			}
			else {
				printf("Error ! Division zero");
			}
			break;
		case 't':
			op2 = pop4_3();
			printf("The top element stack is: %t.8g\n", op2);
			push4_3(op2);
			break;
		case 'd':
			op2 = pop4_3();
			push4_3(op2);
			push4_3(op2);
			break;
		case 's':
			op1 = pop4_3();
			op2 = pop4_3();
			push4_3(op1);
			push4_3(op2);
			break;
		case 'c':
			clear();
			break;
		case '\n':
			printf("Result of reverse Polish notation is: %\t.8g\n", pop4_3());
			break;
		default:
			printf("Unknow Commnad !!!");
			break;
		}
	}*/
	
	//Exercise4_5
	/*int type, c;
	double op1, op2;
	double finalResult = 0.0;
	char s[MAXOP4_5];
	char nameFuncSin[] = "msin";
	char nameFuncExp[] = "mexp";
	char nameFuncPow[] = "mpow";

	while ((type = getop4_5(s)) != EOF) {
		switch (type) {
		case NUMBER4_5:									// When getop return NUMBER pushing value to Stack
			push4_5(atof(s));
			break;
		case NAMEMATHFUNCTION:							// When getop return NAMEMATH pushing result of any function mathematic into stack
			if (strcmp(s, nameFuncSin) == 0) {
				push4_5(sin(pop4_5()));
			}
			else if (strcmp(s, nameFuncExp) == 0) {
				push4_5(exp(pop4_5()));
			}
			else if (strcmp(s, nameFuncPow) == 0) {
				op1 = pop4_5();
				op2 = pop4_5();
				push4_5(pow(op2, op1));
			}
			else {
				printf("Error! function %s is not supported\n");
			}
			break;
		case '+':										// When getop return character '+' pushing addition of two values in stack after that pushing result back into stack
			push4_5(pop4_5() + pop4_5());
			break;
		case '-':										// When getop return character '-' pushing sub of two values in stack after that pushing result back into stack
			op1 = pop4_5();
			push4_5(pop4_5() - op1);
			break;
		case '*':										// When getop return character '*' pushing sub of two values in stack after that pushing result back into stack
			push4_5(pop4_5() * pop4_5());
			break;
		case '/':										// When getop return character ' /' pushing sub of two values in stack after that pushing result back into stack
			op1 = pop4_5();
			if (op1 != 0.0) {
				push4_5(pop4_5() / op1);
				break;
			}
			else {
				printf("Error ! Division zero");
			}
			break;
		case '%':										// When getop return character '%' pushing sub of two values in stack after that pushing result back into stack
			op1 = pop4_5();
			if (op1 != 0.0) {
				push4_5(fmod(pop4_5(), op1));
			}
			else {
				printf("Error ! Division zero");
			}
			break;
		case '?':										// get the top element in Stack
			op1 = pop4_5();
			printf("The top element of Stack is %\t.8g\n", op1);
			push4_5(op1);
			break;
		case 's':										// Swap two values in Stack
			op1 = pop4_5();
			op2 = pop4_5();
			push4_5(op1);
			push4_5(op2);
			break;
		case 'd':										// Pushing two values duplicate in Stack
			op1 = pop4_5();
			push4_5(op1);
			push4_5(op1);
			break;
		case 'c':										// Clearing Stack
			clear4_5();
			break;
		case '\n':										// Printing the final result in Stack
			finalResult = pop4_5();
			printf("Result of Operator reverse Polish notation: %.8g\n", finalResult);
			break;
		default:
			printf("Error ! Unknow Commnad");			// Anoying Error Command Unknow 
			break;
		}
	}*/

	// Exercise4_6: 
	// See 4_5

	// Exercise4_7
	// See 4_5

	// Exercise4_8
	/*int c;
	c = '*';
	ungetch4_8(c);
	while ((c = getch4_8()) != EOF) {
		putchar(c);
	}*/
	
	// Exercise4_9
	/*int c;
	c = -1;

	ungetch4_9(c);
	while ((c = getch4_9()) != EOF) {
		putchar(c);
	}*/

	// Exercise4_10 ...........
	int type;
	double op2;
	getline4_10(input, MAXLEN);
	while ((type = getop4_10(arrayValue4_10, input)) != EOF) {
		switch (type) {
		case NUMBER4_10:
			push4_10(atof(arrayValue4_10));
			break;
		case '+':
			push4_10(pop4_10() + pop4_10());
			break;
		case '-':
			op2 = pop4_10();
			push4_10(pop4_10() - op2);
			break;
		case '*':
			push4_10(pop4_10() * pop4_10());
			break;
		case '/':
			op2 = pop4_10();
			if (op2 != 0.0) {
				push4_10(pop4_10() / op2);
			}
			else {
				printf("Error division zero");
			}
			break;
		case '\n':
			printf("Result of reverse Poland notation: %.8g\n", pop4_10());
			break;
		default:
			printf("Error! Unknown commnad\n");
			break;
		}
	}

	/* --------------------------------------------------------- */

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
double myAtof(char s[]) {
	int i, sign;
	double val, power;
	for (i = 0; isspace(s[i]); i++)
		;
	sign = (s[i] == '-') ? -1 : 1;
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

int sp = 0;					// next free stack position
double val[MAXVAL];			// value stack

/* function push: push f onto value stack */
void push(double f) {
	if (sp < MAXVAL) {
		val[sp++] = f;
	}
	else {
		printf("Error: Stack full! Can not push %g\n", f);
	}
}

/* function pop: pop and return top value of stack */
double pop(void) {
	if (sp > 0) {
		return val[--sp];
	}
	else {
		printf("Error: Empty Stack !");
		return 0.0;
	}
}

int getch(void);
void ungetch(int c);

/* function getop: get next operator or numeric operand */
int getop(char s[]) {
	int i, c;

	while ((s[0] = c = getch()) == ' ' || c == '\t')
		;
	s[1] = '\0';
	if (!isdigit(c) && c != '.') {
		return c;
	}
	i = 0;
	if (isdigit(c)) {
		while (isdigit(s[++i] = c = getch()))
			;
	}
	if (c == '.') {
		while (isdigit(s[++i] = c = getch()))
			;
	}
	s[i] = '\0';
	if (c != EOF) {
		ungetch(c);
	}
	return NUMBER;
}

#define BUFFSIZE 100

char buff[BUFFSIZE];		// buffer for ungetch
int bufp = 0;				// next free position on buf

int getch(void) {
	return (bufp > 0) ? buff[--bufp] : getchar();
}

void ungetch(int c) {
	if (bufp >= BUFFSIZE) {
		printf("ungetch: Too many character ");
	}
	else {
		buff[bufp++] = c;
	}
	return 0;
}



