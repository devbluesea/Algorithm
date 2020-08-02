#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>

int find_few(int *str)
{
	return((str[0] < str[1]) ? ((str[0] < str[2]) ? str[0] : str[2]) : ((str[1] < str[2]) ? str[1] : str[2]));
}

void set_vol(int *str, int *ptr, int ratio)
{
	while (*str)
	{
		*str -= *ptr * ratio;
		str++;
		ptr++;
	}
	return ;
}

int main(void)
{
	int vol[4];
	int ratio[4];
	float newvol[4];
	int few;
	float few_ratio;
	int i;
	int n;

	i = 0;
	while (i < 3)
		scanf ("%d", &vol[i]);
	while (i < 3)
		scanf ("%d", &ratio[i]);
	few = find_few(vol);
	if (few == vol[0])
	{
		few_ratio = vol[0] / ratio[0];
		set_vol(vol, ratio, few_ratio);
		newvol[1] = vol[1] - ((vol[0] * ratio[1]) * few_ratio);
		newvol[2] = vol[2] - ((vol[0] * ratio[2]) * few_ratio);
		newvol[0] = 0;
	}
	else if(few == vol[1])
	{
		few_ratio = vol[1] / ratio[1];
		set_vol(vol, ratio, few_ratio);
		vol[0] = vol[0] - ((vol[1] * ratio[0]) * few_ratio);
		vol[2] = vol[2] - ((vol[1] * ratio[2]) * few_ratio);
		vol[1] = 0;
	}
	else
	{
		few_ratio = vol[2] / ratio[2];
		set_vol(vol, ratio, few_ratio);
		vol[0] = vol[0] - ((vol[2] * ratio[0]) * few_ratio);
		vol[1] = vol[1] - ((vol[2] * ratio[1]) * few_ratio);
		vol[2] = 0;
	}
	for (i = 0 ; i < 3 ; i++)
		printf("%.6f", vol[i]);
	return (0);
}
