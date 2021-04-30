#include <iostream>
#include <vector>
#include <string>

std::vector<int> input_arr(int n)
{
	int i = 0;
	int temp;

	std::vector<int> arr;

	for (i = 0 ; i < n ; i++)
	{
		std::cin >> temp;
		arr.push_back(temp);
		std::cin.clear();
	}
	return (arr);
}

int main(void)
{
	int temp;
	int n;
	int i,j,k;


	int ref;
	int min_val;
	std::vector<int> arr;

	std::cin >> n;
	std::cin.clear();

	std::cin >> ref;
	std::cin.clear();

	arr = input_arr(n);

	j = 2;
	k = 3;
	min_val = 0;
	for (i = 0 ; i < j ; i++)
	{
		for(j = i + 1 ; j < k - 1 ; j++)
		{
			for(k = j + 1 ; k < arr.size(); k++)
			{
				if ( arr[i] + arr[j] + arr[k] > min_val
				&& arr[i] + arr[j] + arr[k] <= ref)
				{
					min_val = arr[i] + arr[j] + arr[k];
				}
			}
		}
	}

	std::cout << min_val;
	return (0);
}
