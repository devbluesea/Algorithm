#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct	s_mem
{
	int age;
	int sort;
	char name[101];
}				t_mem;

int	compare(const void *a, const void *b)
{
	t_mem *n = (t_mem *)a;
	t_mem *m = (t_mem *)b;

	if (n->age > m->age)
		return (1);
	else if (n->age == m->age && n->sort > m->sort)
		return (1);
	else
		return (-1);
}

int main(void)
{
	int n;
	int i;
	t_mem *mem;

	scanf ("%d", &n);
	mem = malloc(sizeof(t_mem) * n);
	for (i = 0 ; i < n ; i++)
	{
		scanf("%d %s", &mem[i].age, mem[i].name);
		mem[i].sort = i;
	}
	qsort(mem, n, sizeof(t_mem), compare);
	for (i = 0 ; i < n ; i++)
		printf("%d %s\n", mem[i].age, mem[i].name);
	return (0);
}
