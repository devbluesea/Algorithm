#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int N;
	int K;
	int i;
	int j;
	int flag;
	int *str;
	int *res;

	scanf("%d %d", &N, &K);
	str = malloc(sizeof(int) * (N + 1));
	res = malloc(sizeof(int) * (N + 1));
	for (i = 0 ; i < N ; i++)
		str[i] = i + 1;
	i = 0;
	while (i < N)
	{
		if (K * i <= N)
		{
			res[i] = K * i;
			str[(K * i) - 1] = -1;
		}
		else
		{

		}
		i++;
	}
	printf("<");
	printf(">");
	return (0);
}
