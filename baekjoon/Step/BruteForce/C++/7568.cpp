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

		int getWeight() {return(this->weight);}
		int getHeight() {return(this->height);}

		void getVar()
		{
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
	std::vector<human>::iterator iter2;

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

	int tmp_rank = 1;

	for (iter = ap.begin() ; iter != ap.end() ; iter++)
	{
		iter->rank = 1;
		for (iter2 = ap.begin() + 1 ; iter2 != ap.end() ; iter2++)
		{
			if (iter->getWeight() < iter2->getWeight() && iter->getHeight() < iter2->getHeight())
				iter->rank += 1;
		}
		std::cout << iter->rank;
		if (iter != ap.end() - 1)
			std::cout << " ";
	}
	return 0;
}
