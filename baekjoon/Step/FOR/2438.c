#include <stdio.h>

int main(void)
{
	int n;
	int i;
	int j;

	i = 0;
	scanf("%d", &n);
	for (i = 1 ; i <= n ; i++)
	{
		for (j = 1 ; j <= n - i ; j++)
		{
			printf(" ");
		}
		for (j = 1 ; j <= i ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return (0);
}
