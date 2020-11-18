#include <stdio.h>

int main(void)
{
	int n;
	int arr[10002];
	int temp;
	int i, j;

	scanf("%d", &n);
	for (i = 0 ; i <= 10000 ; i++)
		arr[i] = 0;
	for (i = 0 ; i < n ; i++)
	{
		scanf("%d", &temp);
		arr[temp]++;
	}
	for (i = 1 ; i <= 10000 ; i++)
	{
		if (arr[i] > 0)
		{
			for (j = 0 ; j < arr[i] ; j++)
				printf("%d\n", i);
		}
	}
	return (0);
}
