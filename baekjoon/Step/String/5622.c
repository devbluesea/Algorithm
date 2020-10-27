#include <stdio.h>

int main(void)
{
	char input[16];
	int output[16];
	int i;
	int j;
	int flag;
	int count;
	int alpha;
	int result;

	i = 0;
	j = 0;
	scanf("%s", input);
	while (input[i])
	{
		count = 0;
		alpha = 'A';
		while (alpha < 'A' + 26)
		{
			flag = input[i] % alpha;
			if ((alpha == 'P' || alpha == 'W') && flag < 4)
			{
				output[j] = 2 + count;
				j++;
				break;
			}
			if ((alpha != 'P' || alpha != 'W') && flag < 3)
			{
				output[j] = 2 + count;
				j++;
				break;
			}
			count++;
			if (alpha == 'P' || alpha == 'W')
				alpha += 4;
			else
				alpha += 3;
		}
		i++;
	}
	output[j] = '\0';
	i = 0;
	result = 0;
	while (output[i] != '\0')
	{
		result = result + output[i] + 1;
		i++;
	}
	printf("%d", result);
	return (0);
}
