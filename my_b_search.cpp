#include <iostream>
#include <vector>

using namespace std;

int b_search(vector <int> set, int value)
{
	int size = set.size();// size of vector set
	int first = 0;// first element of vector set
	int len = size - 1;// lenght of vector set

	while (first <= len)
	{
		int mid = (first + len) / 2;// middle of vector set

		if (value == set[mid])// if value is mid of set
		{
			std::cout << "Value:" << " " << value << " " << "is located at index of:" << " " << mid << endl;
			return 0;
		}
		else if (value > mid)// value greater than the mid
		{
			first = mid + 1;
		}
		else // value lower than the mid
		{
			len = mid - 1;
		}
		return 1;
	}
}

int main()
{
	vector <int> nubers = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	b_search(nubers, 5);
	system("PAUSE");
	return 0;
}