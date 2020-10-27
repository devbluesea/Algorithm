#include <stdio.h>

int	sumleft(int num)
{
	int res;
	res = 0;
	while (num > 0)
	{
		res = res + num;
		num--;
	}
	return (res);
}

int	main(void)
{
	int	input;
	int	num_min;
	int	num_max;
	int	count;
	int	diff;
	int	sum_left;
	int	denomi;
	int	numora;

	scanf("%d", &input);
	num_min = 1;
	num_max = 1;
	count = 0;
	while (1)
	{
		if (input >= num_min && input <= num_max)
			break;
		count++;
		num_min = num_max + 1;
		num_max = num_min + count;
	}
	sum_left = sumleft(count);
	diff = input - sum_left;
	count++;
	if (count % 2 == 0)
	{
		numora = diff;
		denomi = count - (diff - 1);
	}
	else
	{
		numora = count - (diff - 1);
		denomi = diff;
	}
	printf("%d/%d", numora, denomi);
	return (0);
}
