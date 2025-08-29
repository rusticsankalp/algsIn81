//https://open.kattis.com/problems/sidewayssorting

#include <utility>
#include <vector>
#include <string>
#include <algorithm>

namespace cp
{
	namespace kattis
	{

		using namespace std;
		class KattisSidewaysSorting
		{

			bool less(vector<string>& matrix, int a, int b)
			{
				for (int i = 0; i < matrix.size(); i++)
				{
					//:Bug a,b are second subscript
					auto la = tolower(matrix[i][a]);
					auto lb = tolower(matrix[i][b]);

					if (la == lb) continue;
					else if (la < lb) return true;
					else return false;
				}
			}

			void swap(vector<string>& matrix, int a, int b)
			{
				for (int i = 0; i < matrix.size(); i++)
				{
					std::swap(matrix[i][a], matrix[i][b]);
				}

			}
		public:
			vector<string> SidewaySort(vector<string> &matrix)
			{
				int N = matrix[0].size();
				for (int i = 0; i < N; i++)
				{
					auto minIndex = i;
					for (int j = i + 1; j < N; j++)
					{

						//:Bug swap was switched
						if (less(matrix, j, minIndex))
							minIndex = j;
					}

					swap(matrix, i, minIndex);
				}

				return matrix;
			}
		};
	}
}