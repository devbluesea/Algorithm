#include <stdio.h>

int main(void)
{
	int	testcase;
	int	height;
	int	width;
	int	number;
	int	i;
	int	res;
	int	hundred;

	scanf("%d", &testcase);
	while (i < testcase)
	{
		scanf ("%d %d %d", &height, &width, &number);
		if (number % height == 0)
		{
			hundred = height * 100;
			res = number / height;
		}
		else
		{
			hundred = (number % height) * 100;
			res = (number / height) + 1;
		}
		res = res + hundred;
		printf("%d\n", res);
		i++;
	}
	return (0);
}
