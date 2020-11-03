//nezapolnennyi kvadrat
#include <iostream>

int main()
{
	for (int y = 0; y < 10; y++)
	{
		for (int x = 0; x < 10; x++)
		{
			if ((x == 0) || (x == 9) || (y == 0) || (y == 9))
			{
				std::cout << "#";
			}
			else std::cout << " ";
		}
		std::cout << std::endl;
	}

}

//zapolnennyi kvadrat
#include <iostream>

int main()
{
	for (int y = 0; y < 10; y++)
	{
		for (int x = 0; x < 10; x++)
		{
			std::cout << "#";
		}
		std::cout << std::endl;
	}
}

//treugolnic1
#include <iostream>

int main()
{
	for (int x = 0; x < 10; x++)
	{
		for (int y = 0; y < 10; y++)
		{
			if (y > 9 - x) std::cout << "#";
			else std::cout << "";

		}
		std::cout << std::endl;
	}
}

//treugolnic2
#include <iostream>

int main()
{
	for (int x = 0; x < 10; x++)
	{
		for (int y = 0; y < 10; y++)
		{
			if (y < 9 - x) std::cout << "#";
			else std::cout << " ";

		}
		std::cout << std::endl;
	}
}