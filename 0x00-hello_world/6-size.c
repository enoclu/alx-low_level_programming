#include <stdio.h>
/**
 * main - Size is not grandeur, and territory does not make a nation
 * return: 0
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of char: %lu byte(S)\n", (unsigned long)sizeof(a));
	printf("Size of int: %lu byte(S)\n", (unsigned long)sizeof(b));
	printf("Size of long int: %lu byte(S)\n", (unsigned long)sizeof(c));
	printf("Size of long long int: %lu byte(S)\n", (unsigned long)sizeof(d));
	printf("Size of float: %lu byte(S)\n", (unsigned long)sizeof(f));
	return (0);
}
