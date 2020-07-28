#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	unsigned int	n;
	unsigned int	x;
	int i;
	int	*s;

	i = 0;
	scanf("%d %d", &n, &x);
	s = (int *)malloc(sizeof(int) * n);
	while (i < n)
	{
		scanf("%d", &s[i]);
		i++;
	}
	i = 0;
	while (i < n)
	{
		if (s[i] < x)
			printf("%d ", s[i]);
		i++;
	}
	free(s);
	return (0);
}
