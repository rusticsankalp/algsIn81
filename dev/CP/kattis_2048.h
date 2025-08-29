//https://open.kattis.com/problems/sidewayssorting

#include <utility>
#include <vector>

namespace cp
{
	namespace kattis
	{

		using namespace std;
		class Kattis2048
		{
		public: 
			void run2048(int matrix[4][4], int direction)
			{
				if (direction != 0)
				{
					rotate(matrix, 0 ,1);
				}
				compact(matrix);

				if (direction != 0)
				{
					rotate(matrix, 0, 0);
				}
				//rotate back(matrix)

				
			}
			
		private:

			void rotate(int matrix[4][4], int x, int y)
			{

				vector < vector<int> > temp(5, vector<int>(5, 0));

				if (y == 1 && x == 0)
				{
					for (int i = 0; i < 4; i++)
					{
						for (int j = 0; j < 4; j++)
						{
							temp[3-j][3-i] = matrix[i][j];
						}
					}
				}

				for (int i = 0; i < 4; i++)
				{
					for (int j = 0; j < 4; j++)
					{
						matrix[i][j] = temp[i][j];
						cout << matrix[i][j] << " ";
					}
					cout << "\n";
				}



			}
			void compact(int matrix[4][4])
			{
				for (int i = 0; i < 4; i++)
				{
					//flatten all zeroes
					vector<int> temp(5, 0);
					
					for (int j=0,k = 0;j < 4; j++)
					{
						if (matrix[i][j] != 0)
							temp[k++] = matrix[i][j];

					}

					auto y = 0;

					for (int j = 1; j < 4; j++)
					{
						if (temp[j] == temp[y])
						{
							temp[j] += temp[j];

							
							for (int k = y; k < 4 && j <5; k++)
							{
								temp[k] = temp[j++];
							}

							y = y + 1;
							j = y; // j will be increementd in the loop



							//for (int k = j + 1; k < 3; k++)
							//{
							//	temp[++y] = temp[k];
							//}
							//temp[3] = 0;

							//y = y + 1;
							//j = y + 1;
						}
					}

					for (int j = 0; j < 4; j++)
					{
						matrix[i][j] = temp[j];
					}
				}
			}



		};
	}
}