// https://open.kattis.com/problems/height
#include<vector>
#include<algorithm>
#include<utility>

namespace cp
{
	namespace kattis
	{
		using namespace std;
		class Kattis_height
		{
		public:
			int OrderByHeight(vector<int> array)
			{
				int result = 0;
				int n = array.size();

				for (int i = 1; i < n; i++)
				{
					for (int j = i; j > 0 && array[j] < array[j-1]; j--)
					{
						std::swap(array[j], array[j - 1]);
						result++;
					}

				}

				return result;
			}
		};
	}
}