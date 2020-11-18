#include <stdio.h>
#include <stdlib.h>

/*
void	qsort(int *arr, int left, int right)
{
	int	pivot;
	int	l;
	int	r;
	int temp;

	pivot = arr[(left + right) / 2];
	l = left;
	r = right;
	while (l <= r)
	{
		while (arr[l] < pivot)
			l++;
		while (arr[r] > pivot)
			r--;
		if (l <= r)
		{
			temp = arr[l];
			arr[l] = arr[r];
			arr[r] = temp;
			l++;
			r--;
		}
	}
	if (left < r)
		qsort (arr, left, r);
	if (l < right)
		qsort (arr, l, right);
}
*/

int	compare(const void *a, const void *b)
{
	int num1 = *(int *)a;
	int num2 = *(int *)b;

	if (num1 < num2)
		return -1;
	if (num1 > num2)
		return 1;
	return 0;
}

int main(void)
{
	int arr[1000001];
	int n;
	int i;

	scanf("%d", &n);
	for (i = 0 ; i < n ; i++)
		scanf("%d", &arr[i]);
	qsort(arr, n, sizeof(int), compare);
	for (i = 0 ; i < n ; i++)
		printf("%d\n", arr[i]);
	return (0);
}
