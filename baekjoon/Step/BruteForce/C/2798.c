#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int	Nval;
	int	Mval;
	int	*arr;
	int	i;
	int	j;
	int	k;
	int	sum_res;
	int	closer;

	scanf("%d %d",&Nval, &Mval);
	arr = malloc(sizeof(int) * Nval);
	sum_res = 0;
	closer = 0;
	for (i = 0 ; i < Nval ; i++)
		scanf("%d", &arr[i]);
	for (i = 0 ; i < Nval - 2 ; i++)
	{
		for (j = i + 1 ; j < Nval - 1 ; j++)
		{
			for (k = j + 1 ; k < Nval ; k ++)
			{
				sum_res = arr[i] + arr[j] + arr[k];
				if (sum_res == Mval)
				{
					closer = sum_res;
					break;
				}
				if (sum_res > closer && sum_res < Mval)
					closer = sum_res;
			}
		}
	}
	printf ("%d\n", closer);
	free (arr);
}
