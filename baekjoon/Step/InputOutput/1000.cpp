#include <iostream>

int main()
{
	int i;
	int a[2];
	int result;

	for (i = 0 ; i < 2 ; i++)
	{
		std::cin >> a[i];
		std::cin.clear();
	}

	result = a[1] + a[0];
	std::cout << result << std::endl;
}
