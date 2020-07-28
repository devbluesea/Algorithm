#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct member{
	int		age;
	int		sort;
	char	name[101];
} mem;

/*
void swap(mem* s, int i, int j)
{
	mem temp;

	temp = s[i];
	s[i] = s[j];
	s[j] = temp;
}

void sort_age(mem* s, int count)
{
	int i;
	int j;

	for(i = 0 ; i < count ; i++)
	{
		for(j = 1 ; j < count - i ; j++)
		{
			if (s[j-1].age > s[j].age)
				swap(s, (j - 1), j);
			if (s[j-1].age == s[j].age && s[j-1].sort > s[j].sort)
				swap(s, (j - 1), j);
		}
	}
}
*/

int compare(const void *a, const void *b)
{
	mem *m = (mem *)a;
	mem *n = (mem *)b;
	if (m->age > n->age)
		return(1);
	else if (m->age == n->age && m->sort > n->sort)
		return (1);
	else
		return (-1);
}

int main(void)
{
	int input;
	int i;
	int j;
	mem *p;

	scanf("%d", &input);
	if (!(p = malloc(sizeof(mem) * (input + 1))))
		return (0);
	for(i = 0 ; i < input ; i++)
	{
		scanf("%d %s", &p[i].age, p[i].name);
 		p[i].sort = i;
	}
	qsort(p, input, sizeof(mem), compare);
	for(i = 0 ; i < input ; i++)
		printf("%d %s\n", p[i].age, p[i].name);
	free (p);
	return (0);
}
