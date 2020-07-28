#include <stdio.h>

long long sum(int *a, int n);

int main(void)
{
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	long long a;

	a = sum(arr, 10);
	printf("%lld",a);
}

long long sum(int *a, int n)
{
	long long sum;
	int i;

	i = 0;
	sum = 0;
	while (i < n)
	{
		sum = sum + a[i];
		i++;
	}
	return (sum);
}
