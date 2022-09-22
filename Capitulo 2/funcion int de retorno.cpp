#include <iostream>

using namespace std;

int getValueFromUser() // esta funcion ahora devuelve un valor entero
{
	cout<<"ingrese un entero:";
	int input{};
	cin>>input;
	
	return input; //devuelve el valor
}

int main()
{
	int x{getValueFromUser()}; //primera llamada a la funcion
	int y{getValueFromUser()}; //segunda llamada a la funcion
	
	cout<<x<<" + "<<y<<" = "<<x+y<<endl;
	
	return 0;
}
