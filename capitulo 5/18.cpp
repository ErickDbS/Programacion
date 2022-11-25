#include <iostream>

int main()
{
	std::cout << "ingresa un numero: ";
	int value {};
	std::cin >> value;
	
	if (value > 10 && value < 20)
		std::cout<<"el valor esta entre 10 y 20\n";
	else
		std::cout<<"el valor no esta entre 10 y 20\n";
		
	return 0;
}