#include <stdio.h>

int main(void)
{
	int const_cost;
	int variable_cost;
	int price;
	int result;

	scanf("%d %d %d", &const_cost, &variable_cost, &price);
	result = (const_cost / (price - variable_cost)) + 1;
	if (variable_cost >= price)
		printf("-1\n");
	else
		printf("%d", result);
	return (0);
}
