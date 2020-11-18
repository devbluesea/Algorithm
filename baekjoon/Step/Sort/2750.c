#include <stdio.h>
#include <limits.h>

void selection_sort(int *str)
{
	int i, j;
	int temp;
	int value;

	i = 0;
	while (str[i] != INT_MIN)
	{
		temp = i;
		j = i + 1;
		while (str[j] != INT_MIN)
		{
			if (str[temp] >= str[j])
				temp = j;
			j++;
		}
		value = str[i];
		str[i] = str[temp];
		str[temp] = value;
		i++;
	}
}

int main(void)
{
	int	n;
	int	i;
	int	str[1001];

	scanf("%d", &n);
	for (i = 0 ; i < n ; i++)
		scanf("%d", &str[i]);
	str[i] = INT_MIN;
	selection_sort(str);
	i = 0;
	while (str[i] != INT_MIN)
	{
		printf("%d\n", str[i]);
		i++;
	}
	return (0);
}
