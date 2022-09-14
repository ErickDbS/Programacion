#include <iostream>

using namespace std;


void doB()
{
	cout<<"En doB () "<<endl;
	
}

void doA()
{
	cout<<"Iniciando doA () "<<endl;
	doB();
	cout<<"Finalizando doA () "<<endl;
}

//Definicion de la funcion main
int  main()
{
	cout<<"Iniciando main () "<<endl;
	doA();
	cout<<"Finalizando main () "<<endl;
	
	return 0;
	
}
