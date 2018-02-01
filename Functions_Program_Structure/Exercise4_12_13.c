/* function itoaRecur: convert integer n into string a using recursive */

#include <stdio.h>
#include <string.h>

static void itoaRec(int n, char arr[]) {
	static int i = 0, sign = 0;
	void reverse(char arr[]);

	if ((sign = n) < 0) {
		n = -n;
	}
	arr[i++] = n % 10 + '0';
	n = n / 10;
	if (n > 0) {		
		itoaRec(n, arr);
	}
	if (sign < 0) {
		arr[i++] = '-';
	}
	arr[i] = '\0';
	return 0;
}

static void reverse(char arr[]) {
	/*int i, j, temp;

	for (i = 0, j = strlen(arr) - 1; i < j; i++, j--) {
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}*/

	// Using recursive:
	static int i = 0, j = 0;
	if (j != 0) {
		j = strlen(arr) - 1;
	}
	int temp;

	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
	i++;
	j--;

	if (i < j) {
		reverse(arr);
	}

	return 0;
}

static void showResult(int n, char arr[]) {
	itoaRec(n, arr);
	reverse(arr);

	printf("Result string: %s\n", arr);
}