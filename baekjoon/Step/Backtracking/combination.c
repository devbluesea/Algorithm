#include <stdlib.h>
#include <stdio.h>

typedef struct	s_nm
{
	int n;
	int m;
}				t_nm;

void	arr_print(int *arr, int num)
{
	int i;

	for (i = 0 ; i < num ; i++)
	{
		printf("%d", arr[i]);
		if (i < num - 1)
			printf(" ");
	}
	printf("\n");
	return ;
}

void	combination(int depth, int next , int *arr, t_nm num)
{
	int i;

	if (depth == num.m)
	{
		arr_print(arr, num.m);
		return ;
	}
	for (i = next ; i < num.n ; i++)
	{
		arr[depth] = i;
		combination(depth + 1, i + 1, arr, num);
	}
}

int main(void)
{
	t_nm	nums;
	int		*arr;

	scanf("%d %d", &nums.n, &nums.m);
	arr = malloc(sizeof(int) * nums.n);
	combination(0, 1, arr, nums);
	return (0);
}
