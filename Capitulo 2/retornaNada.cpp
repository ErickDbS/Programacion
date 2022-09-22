#include <iostream>

using namespace std;

//void sifnifica que no devuelve un valor a la persona que llama
void retornoNada()
{
	cout<<"Hola"<<endl;
	//esta funcion no devuelve un valor por que no se necesita una declaracion de devolucion
}

int main()
{
	retunrNothing(); //bien: se llama a la funcion returnNothing (), no se devuelve ningun valor
	cout<<returnNothing(); //error: esta linea no se compilara. debera comentarlo para continuar
	retunr 0;
}
