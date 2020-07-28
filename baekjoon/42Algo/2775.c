#include <stdio.h>

int main(void)
{
	int tcase;
	int flo;
	int add;
	int i;
	int j;
	int home[15][15];

	scanf("%d", &tcase);
	i = 0;
	while (i < 15)
	{
		home[0][i] = i;
		home[i][1] = 1;
		i++;
	}
	i = 1;
	while (i < 15)
	{
		j = 2;
		while (j < 15)
		{
			home[i][j] = home[i - 1][j] + home[i][j - 1];
			j++;
		}
		i++;
	}
	i = 0;
	while (i < tcase)
	{
		scanf("%d %d", &flo, &add);
		printf("%d\n", home[flo][add]);
		i++;
	}
	return (0);
}
