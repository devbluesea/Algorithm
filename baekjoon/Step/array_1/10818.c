#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int val;
	int *ptr;
	int	i;
	int max;
	int min;

	scanf("%d", &val);
	if (!(ptr = (int *)malloc(sizeof(int) * val)))
		return (0);
	i = 0;
	while (i < val)
	{
		scanf("%d", &ptr[i]);
		i++;
	}
	max = ptr[0];
	min = ptr[0];
	i = 1;
	while (i < val)
	{
		if (max < ptr[i])
			max = ptr[i];
		if (min > ptr[i])
			min = ptr[i];
		i++;
	}
	printf("%d %d", min, max);
	free(ptr);
	return (0);
}
