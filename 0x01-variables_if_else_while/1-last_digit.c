#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main - Entry point
 * Description: A program tha print the variable n a different value:
 * is greater than 5, is 0, is less than 6 and not 0
 *
 *Return: Everytime 0
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (l > 5)
		printf("last digit of %d is %d and is greater tha 5\n", n, l);
	if (l == 0)
		printf("last digit of %d is %d and is 0\n", n, l);
	if (l < 6 && l != 0)
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, l);
	return (0);
}
