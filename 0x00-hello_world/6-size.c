/*
 * Prints size of various types on the computer it is compiled and run on.
 *
 */
#include <stdio.h>
int main(void)
{
	printf("Size of a char :%ld bytes\n", sizeof(char));
	printf("Size of a char :%ld bytes\n", sizeof(int));
	printf("Size of a char :%ld bytes\n", sizeof(long int));
	printf("Size of a char :%ld bytes\n", sizeof(long long int));
	printf("Size of a char :%ld bytes\n", sizeof(float));

	return (0);
}
