#include <stdio.h>

int main(void)
{
	int ptr[9];
	int i;
	int max;
	int index;

	i = 0;
	max = 0;
	while (i < 9)
	{
		scanf("%d", &ptr[i]);
		if (max < ptr[i])
		{
			max = ptr[i];
			index = i + 1;
		}
		i++;
	}
	printf("%d\n", max);
	printf("%d", index);
	return (0);
}
