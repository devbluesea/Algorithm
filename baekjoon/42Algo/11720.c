#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int input;
	int res;
	char* num;
	int i;

	scanf("%d", &input);
	printf("input : %d\n",input);
	num = (char *)malloc(sizeof(char) * input);
	i = 0;
	while(i < input)
	{
		scanf("%c",&num[i]);
		i++;
	}

	i = 0;
	while (i < input)
	{
		printf("%c",num[i]);
		i++;
	}
	free(num);
	return (0);
}
