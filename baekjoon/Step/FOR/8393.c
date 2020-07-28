#include <stdio.h>

int main(void)
{
	int n;
	int i;
	int sum;

	sum = 0;
	scanf("%d", &n);
	if (n >= 1 && n <= 10000)
	{
		for (i = 1; i <= n; i++)
		{
			sum += i;
		}
		printf("%d\n",sum);
		return (0);
	}
	else
		return (0);
}
