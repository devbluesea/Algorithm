#include <iostream>

int main()
{
	int var[2];
	int i;

	for (i = 0 ; i < 2 ; i++)
	{
		std::cin >> var[i];
		std::cin.clear();
	}

	std::cout << var[0] - var[1];
}
