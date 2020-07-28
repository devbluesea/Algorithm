#include <stdio.h>
#include <string.h>

int main(void)
{
	char num1[100005];
	char num2[100005];
	char res[100005];
	int buff;
	int len1;
	int len2;
	int len_res;
	int longnum;
	int ten_flag;
	int i;

	scanf("%s %s", num1, num2);
	len1 = strlen(num1);
	len2 = strlen(num2);
	longnum = len1 > len2 ? len1 : len2;
	ten_flag = 0;
	for (i = 0 ; i < longnum ; i++)
	{
		if (len1 - 1 - i < 0)
			buff = (num2[len2 - 1 - i] - '0') + ten_flag;
		else if (len2 - 1 - i < 0)
			buff = (num1[len1 - 1 - i] - '0') + ten_flag;
		else
			buff = (num1[len1 - 1 - i] - '0') + (num2[len2 - 1 - i] - '0') + ten_flag;
		ten_flag = 0;
		if (buff >= 10)
		{
			buff = buff - 10;
			ten_flag = 1;
		}
		res[i] = buff + '0';
		if (len1 - 1 - i <= 0 && len2 - 1 - i <= 0 && ten_flag == 1)
		{
			res[i + 1] = 1 + '0';
			res[i + 2] = '\0';
		}
	}
	len_res = strlen(res);
	i = len_res - 1;
	while (i >= 0)
	{
		printf("%c", res[i]);
		i--;
	}
	return (0);
}
