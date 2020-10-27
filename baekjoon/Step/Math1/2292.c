#include <stdio.h>

int main(void)
{
	int i;
	int num;
	int input;
	int num_min;
	int num_max;

	scanf("%d", &input);
	num = 1;
	i = 1;
	if (input == 1)
	{
		printf("1");
		return (0);
	}
	while (1)
	{
		num_min = num + 1;
		num_max = num + (6 * i);
		num = num_max;
		if (input >= num_min && input <= num_max)
			break;
		i++;
	}
	printf("%d", i + 1);
	return (0);
}
