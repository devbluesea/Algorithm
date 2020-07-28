#include <stdio.h>

int main(void)
{
	int str[3];
	int i;
	int j;
	int temp;

	i = 0;
	scanf("%d %d %d", &str[0], &str[1], &str[2]);
	while (i < 2)
	{
		j = 1;
		while (j < 3)
		{
			if (str[i] < str[j])
			{
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
			j++;
		}
		i++;
	}
	printf("%d\n",str[1]);
	return (0);
}
