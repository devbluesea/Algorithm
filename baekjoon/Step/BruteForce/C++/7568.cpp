#include <iostream>
#include <vector>
#include <algorithm>

class human {
	private:
		int weight;
		int height;

	public:
		int rank;
		human(int w, int h)
		{
			this->weight = w;
			this->height = h;
		}
		~human(){}

		void getVar() {
			std::cout << this->weight << ", ";
			std::cout << this->height << std::endl;
		}
};

int main(void)
{
	int i;
	int n;
	int tmp_w;
	int tmp_h;
	std::vector<human> ap;
	std::vector<human>::iterator iter;

	std::cin >> n;
	std::cin.clear();

	for (i = 0 ; i < n ; i++)
	{
		std::cin >> tmp_w;
		std::cin.clear();
		std::cin >> tmp_h;
		std::cin.clear();

		ap.push_back(human(tmp_w, tmp_h));
	}

	for (iter = ap.begin() ; iter != ap.end() ; iter++)
	{
		std::cout <<
	}
}
