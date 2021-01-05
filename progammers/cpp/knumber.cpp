// K 번째 수

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int	process_vec(vector<int> array, vector<int> temp)
{
	int i;
	int n;
	vector<int> store;

	i = 0;
	n = temp[0];
	while (i <= (temp[1] - temp[0]))
	{
		store.insert(store.begin() + i, array[n - 1]);
		n++;
		i++;
	}
	sort(store.begin(), store.end());
	return (store[temp[2] - 1]);
}

vector<int> solution(vector<int> array, vector<vector<int> > commands)
{
	int n;
	int i;
	int res;
	vector<int> answer;
	vector<int> temp;

	i = 0;
	n = commands.size();
	while (i < n)
	{
		answer.insert(answer.begin() + i, process_vec(array, commands[i]));
		i++;
	}
	return answer;
}

int main(void)
{
	vector<int> array = { 1, 5, 2, 6, 3, 7, 4};
	vector<vector<int> > commands = {{2, 5, 3}, {4, 4, 1}, {1, 7, 3}};
	vector<int> res;
	int i;

	res = solution(array, commands);
	for (i = 0 ; i < res.size() ; i++)
		cout << res[i] << " ";
	cout << endl;
}
