#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	size_t n;
	float *str;
	float average;
	size_t i;
	size_t max;

	scanf("%zd", &n);
	str = (float *)malloc(sizeof(float) * n);
	i = 0;
	max = 0;
	while (i < n)
	{
		scanf("%.5f", &str[i]);
		if (max < str[i])
			max = str[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		str[i] = (str[i] / max) * 100;
		i++;
	}
	i = 0;
	average = 0;
	while (i < n)
	{
		average = average + str[i];
		i++;
	}
	average = average / n;
	printf("%.5f", average);
	free(str);
	return (0);
}
