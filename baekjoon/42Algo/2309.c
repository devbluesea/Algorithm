#include <stdio.h>
#include <stdlib.h>

void ft_print(int *ptr, int index, int jndex)
{
	int i;

	for (i = 0 ; i < 9 ; i ++)
	{
		if (i != index && i != jndex)
			printf("%d\n", ptr[i]);
	}
}

int compare(const void *a, const void *b)
{
	int num1 = *(int *)a;
	int num2 = *(int *)b;

	if (num1 > num2)
		return (1);
	if (num1 < num2)
		return (-1);
	return (0);
}

int main(void)
{
	int str[10];
	int i;
	int j;
	int sum;
	int res;

	sum = 0;
	for (i = 0 ; i < 9 ; i++)
	{
		scanf("%d", &str[i]);
		sum = sum + str[i];
	}
	qsort(str, 9, sizeof(int), compare);
	for (i = 0 ; i < 8 ; i++)
	{
		for (j = i + 1 ; j < 9 ; j++)
		{
			res = sum;
			res = res - str[i] - str[j];
			//printf("res = %d\nstr i = %d\nstr j = %d\ni = %d\nj = %d\n\n", res, str[i], str[j], i, j);
			if (res == 100)
			{
				ft_print(str, i, j);
				return (0);
			}
		}
	}
	return (0);
}
