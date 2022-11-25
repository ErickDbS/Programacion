#include <iostream>

int main()
{
	int x { 5 };
	int y { 5 };
	
	std::cout << x << ' ' << y;
	std::cout << ++x << ' ' << --y;
	std::cout << x << ' ' << y;
	std::cout << x++ << ' ' << y--;
	std::cout << x << ' ' << y;
	return 0;
}