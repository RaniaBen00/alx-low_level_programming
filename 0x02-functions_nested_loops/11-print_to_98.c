#include"main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * followed by a new line
 * @n: print from this number
 */
void print_to_98(int n)
{
int cnt;
if (n > 98)
for (cnt = n; cnt > 98; cnt++)
	printf("%d, ", cnt);
else
for (cnt = n; cnt < 98; cnt++)
	printf("%d, ", cnt);
printf("98\n");
}
