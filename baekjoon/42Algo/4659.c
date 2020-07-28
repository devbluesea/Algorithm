#include <stdio.h>

int end_detection(char *ptr, int length)
{
	int i;

	if (length != 3)
		return (0);
	while (ptr[i] != '\0')
	{
		if (ptr[0] != 'e')
			return (0);
		if (ptr[1] != 'n')
			return (0);
		if (ptr[2] != 'd')
			return (0);
		i++;
	}
	return (1);
}

int continuous_check(char *ptr)
{
	char mo_str[6] = "aioue";
	char ja_str[22] = "bcdfghjklmnpqrstvwxyz";
	int mo_flag;
	int ja_flag;
	int i;
	int j;

	mo_flag = 0;
	ja_flag = 0;
	i = 0;
	while (ptr[i] != '\0')
	{
		j = 0;
		while (j < 5)
		{
			if (ptr[i] == mo_str[j])
			{
				mo_flag++;
				ja_flag = 0;
			}
			if (mo_flag == 3)
				return (1);
			j++;
		}
		j = 0;
		while (j < 21)
		{
			if (ptr[i] == ja_str[j])
			{
				ja_flag++;
				mo_flag = 0;
			}
			if (ja_flag == 3)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int ft_strlen(char *ptr)
{
	int i;

	i = 0;
	while (ptr[i] != '\0')
		i++;
	return (i);
}

int main(void)
{
    char pwd[21];
    int aioue_flag;
    int three_flag;
    int two_exp_flag;
    int len;
    int i;
    int j;

    while(1)
    {
        scanf("%s", pwd);
		len = ft_strlen(pwd);
        if (end_detection(pwd, len) == 1)
            return (0);
        aioue_flag = 0;
        two_exp_flag = 0;
		i = 0;
		three_flag = continuous_check(pwd);
        while (i < len)
        {
            if (pwd[i] == 'a' || pwd[i] == 'i' || pwd[i] == 'o'
                || pwd[i] == 'u' || pwd[i] == 'e')
                aioue_flag++;
            if (pwd[i] == pwd[i + 1] && pwd[i] != 'e' && pwd[i] != 'o')
                two_exp_flag++;
            i++;
        }
        if (aioue_flag != 0 && two_exp_flag == 0 && three_flag == 0)
            printf("<%s> is acceptable.\n", pwd);
		else
			printf("<%s> is not acceptable.\n", pwd);
    }
    return (0);
}
