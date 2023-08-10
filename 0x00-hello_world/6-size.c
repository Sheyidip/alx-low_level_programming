#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return 0 (success)
 */
int main(void)
{
	char g;
	int r;
	long int t;
	long long int h;
	float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(g));
printf("size of an int: %lu byte (s)\n", (unsigned long)sizeof(r));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(t));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(h));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
