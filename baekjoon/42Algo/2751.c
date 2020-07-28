#include <stdio.h>
#include <stdlib.h>

int compare(const void *first, const void *second)
{
	if (*(int*)first > *(int*)second)
		return (1);
	else if (*(int*)first < *(int*)second)
		return (-1);
	else
		return (0);
}

int main(void)
{
	int input;
	int *str;
	int i;

	scanf("%d", &input);
	str = (int *)malloc(sizeof(int) * (input + 1));
	for(i = 0 ; i < input ; i++)
		scanf("%d", &str[i]);
	qsort(str, input, sizeof(int), compare);
	for (i = 0 ; i < input ; i++)
		printf("%d\n", str[i]);
	return(0);
}
