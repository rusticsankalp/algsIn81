//https://open.kattis.com/problems/flagquiz

#include <utility>
#include <vector>
#include <string>

//https://open.kattis.com/problems/2048

namespace cp
{
	namespace kattis
	{
		using namespace std; 
		class KattisFlagquiz
		{
			vector<vector<string>>  computeFlag(vector<vector<string>> flags)
			{
				vector<vector<string>> result{};
				vector<int> distance(flags[0].size(), 0);

				for (int i = 0; i < flags.size(); i++)
				{
					auto candidate = flags[i];
					distance[i] = 0;
					for (int j = 0; j < flags.size(); j++)
					{

						auto comparison = flags[j];
						for (int k = 0; k < candidate.size(); j++)
						{
							if (comparison[k] != candidate[k])
							{
								distance[i]++;
							}
						}
					}
				}

				auto minIndex = 0;
				for (int i = 1; i < flags.size(); i++)
				{
					if (distance[i] < distance[minIndex])
					{
						minIndex = i;
					}
				}

				for (int i = 0; i < flags.size(); i++)
				{
					if (minIndex == distance[i])
					{
						result.push_back(flags[i]);
					}
				}

				return result; 

			}
		};
	}
}