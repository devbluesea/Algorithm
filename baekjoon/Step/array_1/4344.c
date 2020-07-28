#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	int *farr;
	int **sarr;
	int i;
	int j;
	int count;
	float *average;

	scanf("%d", &n);
	farr = (int *)malloc(sizeof(int) * (n + 1));
	sarr = (int **)malloc(sizeof(int *) * (n + 1));
	average = (float *)malloc(sizeof(float) * (n + 1));
	i = 0;
	while (i < n)
	{
		scanf("%d", &farr[i]);
		sarr[i] = (int *)malloc(sizeof(int) * (farr[i] + 1));
		j = 0;
		while (j < farr[i])
		{
			scanf("%d", &sarr[i][j]);
			j++;
		}
		i++;
	}
	i = 0;
	while (i < n)
	{
		j = 0;
		average[i] = 0;
		while (j < farr[i])
		{
			average[i] = (float)sarr[i][j] + average[i];
			j++;
		}
		average[i] = average[i] / (float)farr[i];
		i++;
	}
	i = 0;
	while (i < n)
	{	
		j = 0;
		count = 0;
		while (j < farr[i])
		{
			if (average[i] < sarr[i][j])
				count++;
			j++;
		}
		average[i] = (float)count / (float)farr[i] * 100;
		average[i] = average[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		printf("%.3f%%\n", average[i]);
		i++;
	}
	i = 0;
	while (i <= n)
	{
		free (sarr[i]);
		i++;
	}
	free (sarr);
	free (farr);
}
