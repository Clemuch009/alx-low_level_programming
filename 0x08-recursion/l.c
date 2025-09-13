#include <stdio.h>

int main(void)
{
	int a, b, sum;
	int c __attribute((unused)) = 10;

	a = 7;
	b = 9;
	c = 10;
	/*(void)c;*/

	sum = a + b;
	printf("%d", sum);
	return 0;
}
