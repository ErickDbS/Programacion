#include <iostream>

using namespace std;

int add(int x, int y)
{
		return x + y;
}

void printResult(int z)
{
		cout<<"La respuesta es: "<< z <<"\n";
}

int getUserInput()
{
		cout<<"Ingrese un numero: ";
		int x{};
		cin>> x;
		return --x;
}

int main()
{
		int x{ getUserInput() };
		int y{ getUserInput() };
		
		int z{add(x, y) };
		printResult(z);
		
		return 0;
}
