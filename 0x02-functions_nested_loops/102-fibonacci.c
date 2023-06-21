#include"main.h"
/**
 * main - prints the first 50 Fibonacci numbers
 * starting with 1 and 2, followed by a new line
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int cnt;
	unsigned long fib1 = 0, fib2 = 1, S;

	for (cnt = 0; cnt < 50; cnt++)
	{
	S = fib1 + fib2;
	printf("%lu", S);
	fib1 = fib2;
	fib2 = S;
	if (cnt == 49)
		printf("\n");
	else
		printf(", ");
	}
	return (0);
}
