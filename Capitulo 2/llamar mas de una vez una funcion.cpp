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
	doPrint (); //llamando por primera vez
	doPrint (); //llamando por segunda vez
	cout<<"Finalizando main () "<<endl; //Esta sentencia se ejecuta despues de finalizar doPrint ().
	
	return 0;
}
