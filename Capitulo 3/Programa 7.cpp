#include <iostream>

int getUserInput()
{
	std::cerr << "llamada a getuserinput() \n";
	std::cout << "Ingrese un número: ";
	int x{};
	std::cin >> x;
	return x;
}

int main()
{
	
	std::cerr << "llamada a main()\n";
	int x{	getUserInput() };
	std::cout << "Usted ingresó: " << x;
	
	return 0;
}
