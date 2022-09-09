#include <stdio.h>

/**
 * main - Printing
 *
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;
	printf("size of a char: %id bytes(s)\n", sizeof(c));
	printf("size of int: %id bytes(s)\n", sizeof(f));
	printf("size of long int: %id bytes(s)\n", sizeof(li));
	printf("size of long long int: %id bytes(s)\n", sizeof(lli));
	printf("size of a float: %id bytes(s)\n", sizeof(f));
	return (0);
}

