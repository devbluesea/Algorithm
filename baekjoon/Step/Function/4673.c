#include <stdio.h>
#include <stdlib.h>

static int		make_dn(int num);
int		check_num(int number);

int main(void)
{
	int number;
	int flag;

	number = 1;
	while (number <= 10000)
	{
		flag = check_num(number);
		if (flag == 1)
			printf("%d\n", number);
		number++;
	}
	return (0);
}

static int		make_dn(int number)
{
    int temp;
	static int res;

	res = number;
    temp = number;
    while (temp != 0)
    {
        res = res + temp % 10;
        temp = temp / 10;
    }
    return (res);
}

int		check_num(int number)
{
	int a;
	int num;

	a = 0;
	while (a < number)
	{
		num = make_dn(a);
		if (num == number)
			return (0);
		a++;
	}
	return (1);
}
