#include <stdio.h>

int main(void)
{
	size_t str[10];
	int i;
	int j;
	int count;

	count = 0;
	i = 0;
	while (i < 10)
	{
		scanf("%zd", &str[i]);
		i++;
	}
	i = 0;
	while (i < 10)
	{
		str[i] = str[i] % 42;
		i++;
	}
	i = 0;
	j = 0;
	while (i < 10)
	{
		j = i + 1;
		while (j < 10)
		{
			if (str[i] == str[j])
				break;
			if (j == 9)
				count++;
			j++;
		}
		i++;
	}
	count = count + 1;
	printf("%d\n", count);
	return (0);
}
