#include <stdio.h>
#include <stdlib.h>

int check_number(int i);

int main(void)
{
	int number;
	int i;
	int flag;
	int count;

	i = 100;
	count = 0;
	scanf("%d", &number);
	if (number < 100)
		printf("%d\n", number);
	else
	{
		while (i <= number)
		{
			flag = check_number(i);
			if (flag == 1)
				count++;
			i++;
		}
		count = count + 99;
		printf("%d\n",count);
	}
	return (0);
}

int check_number(int number)
{
	int arr[3];
	int brr[2];
	int j;
	int num;

	num = number;
	j = 0;
	while (j < 3)
	{
		arr[2 - j] = num % 10;
		num = num / 10;
		j++;
	}
	j = 0;
	while (j < 2)
	{
		brr[j] = arr[j + 1] - arr[j];
		j++;
	}
	if ((number != 1000) && brr[0] == brr[1])
		return (1);
	else
		return (0);
}
