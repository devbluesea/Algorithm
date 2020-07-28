#include <stdio.h>

int main(void)
{
	int  *str;
	int i;

	i = 0;
	while (i < 5)
	{
		scanf("%d", &str[i]);
		if (str[i] < 40)
			str[i] = 40;
		i++;
	}
	printf("%d\n", (str[0] + str[1] + str[2] + str[3] + str[4]) / 5 );
	return (0);
}
