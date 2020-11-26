#include <stdio.h>
#include <stdlib.h>

void selection_sort(char *str)
{
	int i;
	int j;
	int temp;
	char val;
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	for (i = 0 ; i < len - 1 ; i++)
	{
		temp = i;
		for (j = i + 1 ; j < len ; j++)
		{
			if (str[temp] <= str[j])
				temp = j;
		}
		val = str[i];
		str[i] = str[temp];
		str[temp] = val;
	}
}

int main(void)
{
	char str[11];

	scanf("%s", str);
	selection_sort(str);
	printf ("%s",str);
	return (0);
}
