#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	num_n;
	int	num_m;
	int	count;
	int	i;
	int	j;
	char	**chess;

	scanf("%d %d", &num_n, &num_m);
	chess = malloc(sizeof(char) * num_n);
	for (i = 0 ; i < num_n ; i++)
	{
		chess[i] = malloc(sizeof(char) * num_m);
		scanf("%s", chess[i]);
	}
	for (i = 0 ; i < num_n ; i++)
	{
		printf("%s", chess[i]);
		printf("\n");
	}
	return (0);
}
