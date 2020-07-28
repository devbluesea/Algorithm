#include <stdio.h>

int main(void)
{
	int alpha[26];
	int count[26];
	char str[101];
	int i;
	int j;

	i = 0;
	while (i < 27)
	{
		count[i] = -1;
		i++;
	}
	count[i] = '\0';
	scanf("%s", str);
	i = 0;
	j = 'a';
	while (i < 26)
	{
		alpha[i] = j + i;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (j < 26)
		{
			if (str[i] == alpha[j])
			{
				if (count[j] == -1)
				{
					count[j] = i;
					break;
				}
				else
					break;
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (i < 26)
	{
		printf("%d ",count[i]);
		i++;
	}
	return (0);
}
