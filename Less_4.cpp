#include <iostream>
#include <string>

//==========================
//           1
//==========================
void convertNum(int n, std::string& arr)
{
	if (n > 0)
	{
		if (n % 2 == 0)
		{
			arr += '0';
		}
		else
		{
			arr += '1';
		}
		convertNum(n / 2, arr);
	}
}
//==========================
//         
//==========================


//==========================
//           2.1
//==========================
int exponentiation(int a, int n)
{
	if (n > 0)
	{
		return a * exponentiation(a, n - 1);
	}
	else
	{
		return 1;
	}
}
//==========================
//         
//==========================


//==========================
//           2.2
//==========================
int exponentiation2(int a, int n)
{
	if (n > 0)
	{
		if (n % 2 == 0)
		{
			int b;
			b = exponentiation2(a, n / 2);
			return b * b;
		}
		else
		{
			return exponentiation2(a, n - 1) * a;
		}
	}
	else
	{
		return 1;
	}
}
//==========================
//         
//==========================


//==========================
//           3
//==========================
const int sizeX = 5;
const int sizeY = 5;
int board[sizeX][sizeY];

int routes(int x, int y)
{
	if(x == 0 && y == 0)
	{
		return 0;
	}

	if(x == 0 || y == 0)
	{
		return 1;
	}

	if(board[x][y] == 1)
	{
		return 0;
	}
	
	return routes(x , y - 1) + routes(x - 1, y);
	
}
//==========================
//         
//==========================


int main()
{
//========================== 1
	std::string arr;
	int num;

	std::cout << "Enter your number: \n";
	std::cin >> num;

	convertNum(num, arr);

	for (int i = arr.size(); i >= 0; i--)
	{
		std::cout << arr[i];
	}
//==========================


//========================== 2
	std::cout << "\n" << exponentiation(3, 3) << "\n";

	std::cout << exponentiation2(3, 3) << "\n";
//==========================


//========================== 3
	for (int i = 0; i < sizeY; ++i)
	{
		for (int j = 0; j < sizeX; j++)
		{
			int init = rand() % 13;
			if (init > 9)
			{
				init = 1;
			}
			else
			{
				init = 0;
			}	
			
			 board[i][j] = init;
		}
	}
	board[0][0] = 0;
	board[sizeX][sizeY] = 0;

	for (int y = 0; y < sizeY; ++y)
	{
		for (int x = 0; x < sizeX; ++x)
		{
			std::cout << "\t" << routes(x, y);
		}
		std::cout << "\n";
	}
//==========================

	return 0;
}