#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char **arr;
	char buff[80];
	int len;
	int n;
	int i;
	int j;
	int score;
	int count;
	int *scr;

	scanf("%d", &n);
	arr = (char **)malloc(sizeof(char *) * (n + 1));
	scr = (int *) malloc(sizeof(int) * (n + 1));
	i = 0;
	while (i < n)
	{
		len = 0;
		scanf("%s", buff);
		j = 0;
		while (!(buff[j] == '\0'))
		{
			len++;
			j++;
		}
		arr[i] = (char *)malloc(sizeof(char) * (len + 1));
		j = 0;
		while (j < len)
		{
			arr[i][j] = buff[j];
			j++;
		}
		i++;
	}
	score = 0;
	count = 0;
	j = 0;
	i = 0;
	while (i < n)
	{
		count = 0;
		score = 0;
		j = 0;
		while (!(arr[i][j] == '\0'))
		{
			if (arr[i][j] == 'O')
			{
				score = score + count + 1;
				count++;
			}
			if (arr[i][j] == 'X')
				count = 0;
			j++;
		}
		scr[i] = score;
		i++;
	}
	i = 0;
	while (i < n)
	{
		printf("%d\n", scr[i]);
		i++;
	}
	i = 0;
	while (i <= n)
	{
		free (arr[i]);
		i++;
	}
	free (arr);
}
