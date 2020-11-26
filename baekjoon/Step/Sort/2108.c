#include <stdio.h>
#include <limits.h>

int main(void)
{
	double average_temp;
	int average;
	int mode;
	int arr_max;
	int median;
	double median_double;
	int range;
	int n;
	int i, j;
	int count;
	int arr[500001];
	int modearr[8002];
	int input_max;
	int input_min;

	for (i = 0 ; i < 8002 ; i++)
		modearr[i] = 0;
	average_temp = 0;
	input_max = INT_MIN;
	input_min = INT_MAX;
	scanf("%d", &n);
	for (i = 0 ; i < n ; i++)
	{
		scanf("%d", &arr[i]);
		average_temp = average_temp + arr[i];
		modearr[arr[i] + 4000]++;
		if (arr[i] > input_max)
			input_max = arr[i];
		if (arr[i] < input_min)
			input_min = arr[i];
	}
//average
	average_temp = average_temp / n;
	if (average_temp >= 0)
		average = average_temp + 0.5;
	if (average_temp < 0)
		average = average_temp - 0.5;
//mode
	arr_max = INT_MIN;
	for (i = 0 ; i < 8001 ; i++)
	{
		if (modearr[i] > arr_max)
		{
			mode = i - 4000;
			arr_max = modearr[i];
		}
	}
	for (i = mode + 4000 + 1 ; i < 8001 ; i++)
	{
		if (modearr[i] == arr_max)
		{
			mode = i - 4000;
			break;
		}
	}
//median
	count = 0;
	if (n % 2 == 0)
	{
		for (i = 0 ; i < 8001 ; i++)
		{
			count = count + modearr[i];
			if (count >= (n / 2))
			{
				median_double = ((i - 4000) + (i + 1 - 4000)) / 2;
				if (median_double < 0)
					median = median_double - 0.5;
				if (median_double >= 0)
					median = median_double + 0.5;
				break;
			}
		}
	}
	if (n % 2 == 1)
	{
		for (i = 0 ; i < 8001 ; i++)
		{
			count = count + modearr[i];
			if (count >= (n / 2) + 0.5)
			{
				median = i - 4000;
				break;
			}
		}
	}
//range
	range = input_max - input_min;

	printf ("%d\n", average);
	printf ("%d\n", median);
	printf ("%d\n", mode);
	printf ("%d\n", range);
}
