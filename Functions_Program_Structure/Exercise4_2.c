/* Extend atof function to handle notation E: 123.45e-6 */

#include <ctype.h>

static double atof_2(char s[]) {
	int i, sign, esign, exp;
	double val, power;
	int pow(int base, int exp);

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
		power = 10.0 * power;
	}
	if (s[i] == 'e' || s[i] == 'E') {
		i++;
	}
	if (s[i] == '+' || s[i] == '-') {
		esign = s[i];
		i++;
	}
	for (exp = 0; isdigit(s[i]); i++) {
		exp = 10.0 * exp + (s[i] - '0');
	}
	if (esign == '-') {
		return sign * (val / power) / pow(10, exp);
	}
	else {
		return sign * (val / power) * pow(10, exp);
	}
	return -1;
}

static int pow(int base, int exp) {
	int power = 1;
	while (exp-- > 0) {
		power *= base;
	}
	return power;
}