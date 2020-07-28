#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	size_t a;
	size_t b;
	size_t c;
	size_t multiple;
	int *str;
	int index;
	int left;
	size_t mok;
	int itr[10] = {0,0,0,0,0,0,0,0,0,0};
	int i;
	int j;

	scanf("%zd %zd %zd", &a, &b, &c);
	multiple = a * b * c;
	mok = multiple;
	index = 0;
	while (1)
	{
		mok = mok / 10;
		index++;
		if (mok == 0)
			break;
	}
	str = (int *)malloc(sizeof(int) * index);
	i = 0;
	left = multiple;
	while (i < index)
	{
		str[i] = left % 10;
		left = left / 10;
		i++;
	}
	i = 0;
	while (i < index)
	{
		j = 0;
		while (j < 10)
		{
			if (str[i] == j)
			{
				itr[j]++;
				break;
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (i < 10)
	{
		printf("%d\n", itr[i]);
		i++;
	}
	free(str);
	return (0);
}
