#include <iostream>

#define ENABLE_DEBUG //comenta para desabilitar la deputacion
int getUserInput()
{
#ifdef ENABLE_DEBUG 
	std::cerr << "llamada a getUserInput () \n";
#endif
	std::cout <<"ingrese un número: ";
	int x{};
	std::cin >> x;
	return x;
}

int main()
{
#ifdef ENABLE_DEBUG
	std::cerr << "llamada a getUserInput () \n";
#endif
	int x{getUserInput()};
	std::cout << "Tu ingresaste: " << x;
	
	return 0;
}