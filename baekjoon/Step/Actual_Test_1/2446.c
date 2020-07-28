#include <stdio.h>

int main(void)
{
	int val;
	int i;
	int j;

	scanf("%d", &val);
	for (i = 0 ; i < 2 * val - 1 ; i++)
	{
		if (i < val)
		{
			for (j = 0 ; j < 2 * val - 1 - i ; j++)
			{
				if (j < i)
					printf(" ");
				else
					printf("*");
			}
			printf("\n");
		}
		else
		{
			for (j = 0 ; j <= i  ; j++)
			{
				if (j < val - 2 - (i - val))
					printf(" ");
				else
					printf("*");
			}
			printf("\n");
		}
	}
}
