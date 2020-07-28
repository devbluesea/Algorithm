#include <stdio.h>

int main(void)
{
	int i, j;
	int val;

	scanf("%d", &val);
	for (i = 1 ; i <= val ; i++)
	{
		for (j = 0 ; j < i ; j++)
			printf("*");
		printf("\n");
	}
	
	for (i = val - 1 ; i > 0 ; i--)
	{
		for (j = 0 ; j < i ; j++)
			printf("*");
		printf("\n");
	}
	return (0);
}
