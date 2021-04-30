#include <stdio.h>

int main(void)
{
	int	input;
	int	sum_N;
	int	nmg;
	int	i;
	int	cpy_i;

	scanf("%d", &input);
	for (i = 1 ; i < input ; i++)
	{
		sum_N = i;
		cpy_i = i;
		while (cpy_i > 0)
		{
			nmg = cpy_i % 10;
			sum_N = sum_N + nmg;
			cpy_i = cpy_i / 10;
		}
		if (sum_N == input)
			break;
	}
	if (i == input)
		i = 0;
	printf("%d\n", i);
}
