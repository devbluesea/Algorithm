#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct	s_nm
{
	int n;
	int m;
}				t_nm;

void	arr_print(int *arr, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", arr[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}

void	permutation_rep(int depth, int *arr, t_nm num)
{
	int i;

	if (depth == num.m)
	{
		arr_print(arr, num.m);
		return;
	}
	for (i = 0 ; i < num.n ; i++)
	{
		arr[depth] = i + 1;
		permutation_rep(depth + 1, arr, num);
	}
}

int		main(void)
{
	t_nm	nums;
	int		*arr;
	int		*brr;
	int		i;

	scanf("%d %d", &nums.n, &nums.m);
	arr = malloc(sizeof(int) * nums.n);
	brr = malloc(sizeof(int) * nums.n);
	for(i = 0 ; i < nums.n ; i++)
		brr[i] = 0;
	permutation_rep(0, arr, nums);
	return (0);
}
