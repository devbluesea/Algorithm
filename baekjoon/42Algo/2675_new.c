#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Testcase{
	int len_loop;
	char str[21];
} tcase;


int main(void)
{
	int input;
	int len;
	int *buff;
	int i;
	int j;
	int k;
	tcase *p;

	scanf("%d", &input);
	p = malloc(sizeof(tcase) * input);
	for (i = 0 ; i < input ; i++)
		scanf("%d %s", &p[i].len_loop, p[i].str);
	for (i = 0 ; i < input ; i++)
	{
		len = strlen(p[i].str);
		for (j = 0 ; j < len ; j++)
		{
			for (k = 0 ; k < p[i].len_loop ; k++)
				printf("%c", p[i].str[j]);
		}
		printf("\n");
	}
	return (0);
}
