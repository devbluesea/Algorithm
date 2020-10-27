#include <stdio.h>
#include <stdlib.h>

typedef struct	weigth_height
{
	int	weight;
	int	height;
	int	rank;
}				person;


int	main(void)
{
	int	input;
	int	i;
	int	j;
	int	count;

	scanf("%d", &input);
	person *human = malloc(sizeof(person) * input);

	for(i = 0 ; i < input ; i++)
	{
		scanf("%d %d", &human[i].weight, &human[i].height);
	}
	i = 0;
	while (i < input)
	{
		j = 0;
		count = 1;
		while (j < input)
		{
			if (i == j)
				j++;
			if (human[i].weight < human[j].weight && human[i].height < human[j].height)
				count++;
			j++;
		}
		human[i].rank = count;
		i++;
	}
	for(i = 0 ; i < input ; i++)
	{
		printf("%d", human[i].rank);
		if (i < input - 1)
			printf(" ");
	}
	return (0);
}
