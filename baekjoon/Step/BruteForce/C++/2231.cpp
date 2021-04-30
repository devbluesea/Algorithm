#include <iostream>

int makeANS(int input, int origin)
{
	int ans = input;

	while (input % 10 != '\0')
	{
		ans = ans + (input % 10);
		input = input / 10;
	}
	if (ans == origin)
		return (1);
	else
		return (0);
}

int main(void)
{
	int n;
	int i;
	int dec;

	std::cin >> n;
	std::cin.clear();

	for (i = 1 ; i < n ; i++)
	{
		dec = makeANS(i, n);
		if (dec)
		{
			std::cout << i;
			return (0);
		}
	}

	std::cout << 0 ;
	return (0);
}
