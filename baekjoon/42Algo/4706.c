#include <stdio.h>
#include <math.h>

int main(void)
{
	float a;
	float b;
	float vel;

	while (1)
	{
		scanf("%f %f", &a, &b);
		if (a == 0 && b == 0)
			break;
		vel = sqrt((1 - pow((b / a), 2)));
		printf("%.3f\n", vel);
	}
	return (0);
}
