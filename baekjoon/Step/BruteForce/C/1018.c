#include <stdio.h>

int	check_board(int y, int x, char chess[][50])
{
	int i;
	int j;
	int fix_w;
	int fix_b;

	fix_w = 0;
	fix_b = 0;
	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			if (i % 2 == 0)
			{
				if (j % 2 == 0 && chess[y + i][x + j] != 'W')
					fix_w++;
				if (j % 2 == 0 && chess[y + i][x + j] != 'B')
					fix_b++;
				if (j % 2 == 1 && chess[y + i][x + j] == 'W')
					fix_w++;
				if (j % 2 == 1 && chess[y + i][x + j] == 'B')
					fix_b++;
			}
			if (i % 2 == 1)
			{
				if (j % 2 == 0 && chess[y + i][x + j] == 'W')
					fix_w++;
				if (j % 2 == 0 && chess[y + i][x + j] == 'B')
					fix_b++;
				if (j % 2 == 1 && chess[y + i][x + j] != 'W')
					fix_w++;
				if (j % 2 == 1 && chess[y + i][x + j] != 'B')
					fix_b++;
			}
			j++;
		}
		i++;
	}
	return (fix_b < fix_w ? fix_b : fix_w);
}

int main(void)
{
	int i;
	int j;
	int width;
	int height;
	int y_count;
	int x_count;
	int fix;
	int fix_min;
	char chess[50][50];

	i = 0;
	scanf("%d %d", &height, &width);
	for(i = 0 ; i < height ; i++)
		scanf("%s", chess[i]);
	*chess[i] = '\0';
	i = 0;
	fix_min = 64;
	y_count = height - 8;
	while (y_count >= 0)
	{
		j = 0;
		x_count = width - 8;
		while (x_count >= 0)
		{
			fix = check_board(i, j, chess);
			if (fix < fix_min)
				fix_min = fix;
			j++;
			x_count--;
		}
		i++;
		y_count--;
	}
	printf("%d\n", fix_min);
	return (0);
}
