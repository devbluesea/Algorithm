#include <stdio.h>

int main(void)
{
	int str[5];
	int index;
	int min_ham;
	int min_ve;

	index = 0;
	min_ham = 2000;
	min_ve = 2000;
	while (index < 5)
	{
		scanf("%d", &str[index]);
		if (index < 3 && str[index] < min_ham)
			min_ham = str[index];
		if (index >= 3 && str[index] < min_ve)
			min_ve = str[index];
		index++;
	}
	printf("%d\n", min_ham + min_ve - 50);
	return (0);
}
