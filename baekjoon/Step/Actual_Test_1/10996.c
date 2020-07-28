#include <stdio.h>

int main(void)
{
	int val;
	int i;
	int j;
	int index;
	int val_copy;

	scanf("%d", &val);
	i = val / 2;
	j = val % 2;
	val_copy = val;
	while(val_copy > 0)
	{
		for (index = 0 ; index < i ; index++)
			printf("* ");
		if (j == 1)
			printf("*");
		if (val != 1)
			printf("\n");
		for (index = 0 ; index < i ; index++)
			printf(" *");
		printf("\n");
		val_copy--;
	}
	return (0);
}
