#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char **str;
	int tcase;
	int *ttr;
	int i;
	int j;
	int k;

	scanf("%d", &tcase);
	ttr = (int *)malloc(sizeof(int) * (tcase + 1));
	str = (char **)malloc(sizeof(char *) * (tcase + 1));
	i = 0;
	while (i < tcase)
	{
		scanf("%d", &ttr[i]);
		str[i] = (char *)malloc(sizeof(char) * (ttr[i] + 1));
		scanf("%s", str[i]);
		i++;
	}
	i = 0;
	while (i < tcase)
	{
		j = 0;
		while (j < ttr[i])
		{
			k = 0;
			while (k < ttr[i])
			{
				printf("%c", str[i][j]);
				k++;
			}
			j++;
		}
		printf("\n");
		i++;
	}
	while (i < tcase)
	{
		free(str[i]);
		i++;
	}
	free (ttr);
	free (str);
	return (0);
}
