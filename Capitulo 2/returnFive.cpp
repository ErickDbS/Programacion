#include <iostream>

using namespace std;

//int es el tipo de retorno
//untipo de retorno int significa que devolvera un valor entero a la persona que lo llame
int returnFive()
{
	//la declaracion de retorno indica el valor especifico que devolvera
	return 5; //devuelve el valor especifico 5 a la persona que lo llama
}

int main()
{
	cout<< returnCinco()<<endl; //imprime 5
	cout<< returnCinco() + 2<<endl; //imprime 7
	returnFive(); //bien: se devuelve el valor 5, pero se ignora ya que main() no hace nada con el
	return 0;
}
