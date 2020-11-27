#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct	s_character
{
	int len;
	char str[51];
}				t_character;

int compare(const void *a, const void *b)
{
	t_character *n = (t_character *)a;
	t_character *m = (t_character *)b;
	int i;

	if (n->len > m->len)
		return (1);
	else if (n->len == m->len)
	{
		for (i = 0 ; i < n->len ; i++)
		{
			if (n->str[i] > m->str[i])
				return (1);
			else if(n->str[i] == m->str[i])
				continue;
			else
				return (-1);
		}
		return (-1);
	}
	else
		return (-1);
}

int main(void)
{
	int n;
	int i;
	char temp[51];
	t_character *clst;

	scanf("%d", &n);
	clst = malloc(sizeof(t_character) * n);
	for (i = 0 ; i < n ; i++)
	{
		scanf("%s", temp);
		clst[i].len = strlen(temp);
		strcpy(clst[i].str, temp);
	}
	qsort (clst, n, sizeof(t_character), compare);
	for (i = 0 ; i < n ; i++)
	{
		if (i > 0 && strcmp(clst[i - 1].str, clst[i].str) == 0)
			continue;
		printf("%s\n", clst[i].str);
	}
	return (0);
}
