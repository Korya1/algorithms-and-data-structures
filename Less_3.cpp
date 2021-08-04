#include <iostream>


int main()
{
	int num;
	bool check = true;

	std::cout << "Enter your number: " << "\n";
	std::cin >> num;

	if (num > 2 && num % 2 == 0)
	{
		check = false;
	}
	else
	{
		for (size_t i = 2; i < num; i++)
		{
			if ((num % i) == 0)
			{
				check = false;
				break;
			}			
		}

	}

	if (check)
	{
		std::cout << "Your number is prime\n";
	}
	else
	{
		std::cout << "Your number isn`t prime\n";
	}

	return 0;
}