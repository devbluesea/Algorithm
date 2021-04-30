#include <iostream>
#include <vector>
#include <string>

long long sum(std::vector<int> &a)
{
	int i;
	long long ans = 0;

	for (i = 0 ; i < a.size() ; i++)
		ans += a[i];
	return (ans);
}

int main(void)
{
	std::vector<int> v(9, 10);
	long long result;

	result = sum(v);
	std::cout << result << std::endl;
	for (int i ; i < 10 ; i++)
		std::cout << v[i] << " ";

	return (0);
}
