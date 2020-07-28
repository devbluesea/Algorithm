#include <stdio.h>

int main(void)
{
	int hour;
	int min;

	scanf("%d %d", &hour, &min);
	if (hour < 0 && hour > 23)
		return (0);
	if (min < 0 && min > 59)
		return (0);
	
	if (min < 45)
	{
		if (hour == 0)
			hour = 23;
		else
			hour = hour - 1;
		min = min + 15;
		printf("%d %d", hour, min);
		return (0);
	}
	else
	{
		min = min - 45;
		printf("%d %d", hour, min);
		return (0);
	}
	return (0);
}
