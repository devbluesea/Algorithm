#include <stdlib.h>
#include <stdio.h>

typedef struct	s_nm
{
	int n;
	int m;
}				t_nm;

void	arr_print(int *arr, t_nm nums)
{
	int i;

	for (i = 0 ; i < nums.m ; i++)
	{
		printf("%d", arr[i]);
		if (i < nums.m - 1)
			printf(" ");
	}
	printf("\n");
	return ;
}

void combination_rep(int depth, int next, int *arr, t_nm nums)
{
	int i;

	if (depth == nums.m)
	{
		arr_print(arr, nums);
		return ;
	}
	for (i = next ; i <= nums.n ; i++)
	{
		arr[depth] = i;
		combination_rep(depth + 1, i, arr, nums);
	}
}

int main(void)
{
	t_nm	nums;
	int		*arr;

	scanf("%d %d", &nums.n, &nums.m);
	arr = malloc(sizeof(int) * nums.n);
	combination_rep(0, 1, arr, nums);
	return (0);
}
