#include <stdio.h>

int main(void)
{
	unsigned int	loop_input;
	unsigned int	x_val;
	unsigned int	y_val;
	unsigned int	count;
	unsigned int	diff;
	unsigned int	key_digit;
	unsigned int	i;
	unsigned int	res;

	scanf ("%d", &loop_input);
	for (i = 0 ; i < loop_input ; i++)
	{
		count = 1;
		key_digit = 0;
		scanf("%d %d", &x_val, &y_val);
		diff = y_val - x_val;
		while (1)
		{
			key_digit = key_digit + (2 * count);
			if (diff <= key_digit)
				break;
			count++;
		}
		if (diff >= key_digit - count + 1)
			res = 2 * count;
		else
			res = (2 * count) - 1;
		printf ("%d\n", res);
	}
	return (0);
}
