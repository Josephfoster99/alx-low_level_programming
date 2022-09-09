#include <stdio.h>

/**
 * main - Printing 
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long li;
	float f;

	printf("size of a char: %id bytes(s)\n", sizeof(c));
	printf("size of an int: %id bytes(s)\n", sizeof(i));
	printf("size of a long int: %id bytes(s)\n", sizeof(li));
	printf("size of a long long int: %id bytes(s)\n", sizeof(lli));
	printf("size of a float: %id bytes(s)\n", sizeof(f));
	return (0);
}

