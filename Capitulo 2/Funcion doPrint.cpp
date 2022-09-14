#include <iostream>

using namespace std;



	//Definicion de la funcion definida por el usuario doPrint
	void doPrint () //doPrint () es la funcion llamada en este ejemplo
{
	
	cout<<"En doPrint () "<<endl;
	
}
int main()
{
	cout<<"Iniciando main () "<<endl;
	doPrint(); //Interumpe main y llama a la funcion doPrint (). main () es la persona que llama.
	cout<<"Finalizando main () "<<endl; //Esta sentencia se ejecuta despues de finalizar doPrint ().
	
	return 0;
}
