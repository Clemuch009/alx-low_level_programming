 /*
  * file5
  * author
  *
  */

#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);


/**
 * _sqrt_recursion -returns the natural
 *  square root of a number
 *  @root:sqare root
 *  @num: The number to find the square root of
 *
 *  Return:nature of square root
 */
int _sqrt_recursion(int n)
{

	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}


/**
 * @n: The number to return the square root of
 *
 * Return: nature of square root
 */
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
