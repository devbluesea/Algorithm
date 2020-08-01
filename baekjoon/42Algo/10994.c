#include <stdio.h>

int main(void)
{
	int input;
	int i;
	int j;
	int cmax;

	scanf("%d", &input);
	cmax = 4 * (input - 1) + 1;
	for (i = 1 ; i <= cmax ; i++)
	{
		//printf ("%d :", i);
		if ((i % 2 != 0) && (i < (cmax + 1) / 2))
		{
			for (j = 0 ; j < cmax ; j++)
			{
				if ((j < i - 1 || j > cmax - i) && (j % 2 != 0))
					printf(" ");
				else
					printf("*");
			}
		}
		else if (i == (cmax + 1) / 2)
		{
			for (j = 0 ; j < cmax ; j++)
			{
				if (j % 2 != 0)
					printf(" ");
				else
					printf("*");
			}
		}
		//짝수 줄 1~절반까지 출력
		else if ((i % 2 == 0) && (i < (cmax + 1) / 2))
		{
			for (j = 0 ; j < cmax ; j++)
			{
				if (j % 2 != 0)
					printf(" ");
				else if (j > (2 * (i / 2) - 1) && j < (cmax - i))
					printf(" ");
				else
					printf("*");
			}
		}
		// 짝수 줄 절반 이후 출력
		else if ((i % 2 == 0) && (i > (cmax + 1) / 2))
		{
			for (j = 0 ; j < cmax ; j++)
			{
				if (j % 2 != 0)
					printf(" ");
				else if (j > cmax - i && j < i)
					printf(" ");
				else
					printf("*");
			}
		}
		else
		{
			for (j = 0 ; j < cmax ; j++)
				if ((j > i - 1 || j < cmax - i) && (j % 2 != 0))
					printf(" ");
				else
					printf("*");
		}
		printf("\n");
	}
	return (0);
}
