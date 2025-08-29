#include<iostream>
#include<vector>


using namespace std;
class SelectionSort
{
public:
	vector<int>& Sort(vector<int>& arr)
	{
		for (int i = 0; i < arr.size(); i++)
		{

			int minIndex = i;
			for (int j = i + 1; j < arr.size(); j++)
			{
				if (arr[j] < arr[i])
					minIndex = j;
			}

			swap(arr[i], arr[minIndex]);

		}

		return arr;
	}
};