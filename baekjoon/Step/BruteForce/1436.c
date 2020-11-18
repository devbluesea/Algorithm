#include <stdio.h>

void	itoa(int number, char *str)
{
	int num_copy;
	int len;

	num_copy = number;
	len = 0;
	while (num_copy > 0)
	{
		len++;
		num_copy = num_copy / 10;
	}
	str[len] = '\0';
	len--;
	num_copy = number;
	while (len >= 0)
	{
		str[len] = num_copy % 10 + '0';
		num_copy = num_copy / 10;
		len--;
	}
}

int main(void)
{
	int number;
	int count;
	int	i;
	char	str[50];

	number = 0;
	scanf("%d", &count);
	while (1)
	{
		itoa(number, str);
		i = 0;
		while (str[i])
		{
			if (str[i] == '6' && str[i + 1] == '6' && str[i + 2] == '6')
			{
				count--;
				break;
			}
			else
				i++;
		}
		if (count == 0)
		{
			printf("%d\n", number);
			return (0);
		}
		number++;
	}
	return (0);
}
