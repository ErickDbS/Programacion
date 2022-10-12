#include <iostream>

void a()
{
	std::cout << "b() called\n";
}

void b()
{
	std::cout << "b() called\n";
	a();
}

int main()
{
	a();
	b();
	
	return 0;
}