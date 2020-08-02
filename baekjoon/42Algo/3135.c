#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int A;
	int B;
	int N;
	int i;
	int diff;
	int temp_diff;
	int temp_num;
	int count;
	int *str_n;

	count = 0;
	scanf("%d %d %d", &A, &B, &N);
	str_n = malloc(sizeof(int) * N);
	for (i = 0 ; i < N ; i++)
		scanf("%d", &str_n[i]);
	diff = A - B > 0 ? A - B : B - A;
	temp_diff = 1001;
	for (i = 0 ; i < N ; i++)
	{
		if (temp_diff > abs(str_n[i] - B))
		{
			temp_diff = abs(str_n[i] - B);
			temp_num = str_n[i];
		}
	}
	if (temp_diff < diff)
	{
		count = temp_diff + 1;
		printf("%d\n", count);
	}
	else
	{
		count = diff;
		printf("%d\n", count);
	}
	return (0);
}
