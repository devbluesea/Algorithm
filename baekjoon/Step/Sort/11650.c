#include <stdio.h>
#include <stdlib.h>

typedef struct	s_xy
{
	int	x;
	int y;
}				t_xy;

int compare(const void *a, const void *b)
{
	t_xy *n = (t_xy *)a;
	t_xy *m = (t_xy *)b;

	if (n->x > m->x)
		return (1);
	else if (n->x == m->x && n->y > m->y)
		return (1);
	else
		return (-1);
}

int main(void)
{
	int n;
	int i;
	t_xy *coor;

	scanf("%d", &n);
	coor = malloc(sizeof(coor) * (n + 1));
	for (i  = 0 ; i < n ; i++)
		scanf("%d %d", &coor[i].x, &coor[i].y);
	qsort(coor, n, sizeof(coor), compare);
	for (i = 0 ; i < n ; i++)
		printf("%d %d\n", coor[i].x, coor[i].y);
	free(coor);
	return (0);
}
