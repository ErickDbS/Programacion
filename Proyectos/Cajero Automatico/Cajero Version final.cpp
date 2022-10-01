#include <iostream>
#include <string.h>
#include <conio.h>
#include <string>

using namespace std;

//Variables goblase utilizadas
int nip = 1234,nip2,aux,aux2;
int nipC2 = 6789;
double dinero,dinero2;
int long transferencia1 = {1};
int long transferencia2 = {2};

//Aqui se almacenan los nips de las cuenta previamente declaradas
void cuentas()
{
	int N=1,nip4;
		while(N<=1){
		cout<<"ingrese su nip"<<endl;
		cin>>nip4;
		
		switch(nip4){
			case 1234:
				cout<<"nip correcto"<<endl;
				N=2;
				cout<<endl;
				break;
			case 6789:
				cout<<"nip correcto"<<endl;
				N=2;
				cout<<endl;
				break;
				
			default: cout<<"nip incorrecto"<<endl;  
			break;
				
			}
		}
}

//Mas variables globales para las funciones de ver saldo y retirar saldo
double saldo = 10000,rSaldo,result = 10000,result2 = 20000;
double saldoC2 = 20000;

//Aqui se almacena el saldo disponoble de la cuenta 1
void saldoCuenta1()
{

	cout<<"Usted tiene "<<saldo - dinero  <<" disponible"<<endl<<endl;
	system("pause");
	system("cls");
	
	
}
	
//Funcion en la que se almacena el saldo de la cuenta 2
void saldoCuenta2()
{
	
	
	cout<<"Usted tiene "<<saldoC2 - dinero2<<" disponible"<<endl<<endl;
	system("pause");
	system("cls");
	
	
}	

//Funcion para retirar saldo de la cuenta 1
void retirarSaldo1()
{
	int s=1;
			cout<<"Su saldo es de: "<<saldo<<endl;
			while(s<=1)
			{
				cout<<"Ingrese la cantidad a retirar"<<endl;
				cin>>rSaldo;
				if(rSaldo>10000){
					cout<<"Saldo insuficiente"<<endl;
				}
				else{
				saldo = (result - rSaldo);
				cout<<"Transaccion exitosa"<<endl;
				cout<<endl;
				s=2;
				system("pause");
				system("cls");
				}	
			}
			
			
}

//Funcion para retirar saldo de la cuenta 2
void retirarSaldo2()
{		
	int s=1;
			cout<<"Su saldo es de: "<<saldoC2<<endl;
			while(s<=1){
				cout<<"Ingrese la cantidad a retirar"<<endl;
				cin>>rSaldo;
				if(rSaldo > 20000){
					cout<<"Saldo insuficiente"<<endl;
				}
				else{
				saldoC2 = (result2 - rSaldo);
				cout<<"Transaccion exitosa"<<endl;
				cout<<endl;
				s=2;
				system("pause");
				system("cls");
				}
			}
}

//Funcion de la trasferencia de dinero de la cuenta 1
void trasferencia()
{
	int s,c;
	int transferencia,trans;
	s=1;
	c=1;
	while(s<=1){
	
	
		cout<<"Ingrese el numero de la cuenta que va a depositar"<<endl;
		cin>>trans;
		s=2;
		
		while(c<=1){
		if(trans = 1){
			cout<<"Ingrese la cantidad a transferir"<<endl;
			cin>>dinero;
			saldoC2 + dinero;
			saldo - dinero;
			cout<<"Transferencia exitosa"<<endl;
			c=2;
			system("pause");
			system("cls");
			cout<<endl;
		}
		else{
			cout<<"La cuenta no existe"<<endl;
			
			}
		}
	
	}
}

////Funcion de la trasferencia de dinero de la cuenta 2
void trasferencia2()
{
	int s,c;
	int transferencia,trans;
	s=1;
	c=1;
	while(s<=1){
	
	
		cout<<"Ingrese el numero de la cuenta que va a depositar"<<endl;
		cin>>trans;
		s=2;
		
		while(c<=1){
		if(trans = 2){
			cout<<"Ingrese la cantidad a transferir"<<endl;
			cin>>dinero2;
			saldo + dinero2;
			saldoC2 - dinero2;
			
			cout<<"Transferencia exitosa"<<endl;
			c=2;
			system("pause");
			system("cls");
			cout<<endl;
		}
		else{
			cout<<"La cuenta no existe"<<endl;
		}
			}	
		}	
	
}

//Codigo main (Principal)
int main()
{
	//Declaracion de variables del main
	int N=1,nip4,C=1;
	
	//Se cicla toda la funcion main para poder ingresar con diferentes cuentas
	while(C<=1)
	{
		//Bienvenida
		cout<<"Bienvenido"<<endl;
		cuentas();
		system("cls");
		
		//Menu del cajero
		int opcion,nip3,n;
		int ciclo,d,a,b;
		int opc;
		cout<<"------------------------------------------"<<endl;
		cout<<"                                         |"<<endl;
		cout<<"Que podemos hacer hoy por ti?            |"<<endl;
		cout<<"Cambiar nip                          [1] |"<<endl;
		cout<<"Consultar Saldo                      [2] |"<<endl;
		cout<<"Retirar dinero                       [3] |"<<endl;
		cout<<"Transferencia                        [4] |"<<endl;
		cout<<"Salir                                [5] |"<<endl;
		cout<<"------------------------------------------"<<endl;
		cin>>opc;
		system("cls");
		
			/*Switch para poder identificar a que opcion se esta haciendo 
			referencia y llamar a las funciones corresponcientes*/
			switch(opc){
				case 1: //Codigo para cambiar el nip
						cout<<"Para continuar debera ingresar su nip anterior"<<endl;
						cout<<endl;
						d=1;
						while(d<=1){
						cout<<"Ingrese su nip"<<endl;
						cin>>nip;
						
						if(nip == 1234 || nip == nip2){
							
								
								cout<<"Ingrese su nuevo nip"<<endl;
								cin>>nip2;
								cout<<"Nip cambiado con exito"<<endl;
								cout<<endl;
								d=2; 
								C=1;
								system("pause");
								system("cls");
								}
								else{
									cout<<"El nip es incorrecto"<<endl;
								}
							}
							break;
				case 2://Se llama a la funcion de consultar saldo dependiendo el nip
						n=1;
						while(n<=1){
							cout<<"ingrese su nip"<<endl;
							cin>>nip3;
							if(nip3 == nip || nip3 == nip2){
								saldoCuenta1();
								n=2;
								C=1;
								
								break;
							}
							else if(nip3 == nipC2){
								saldoCuenta2();
								n=2;
								C=1;
								break;
								system("cls");
							}
							else{
								cout<<"nip incorrecto"<<endl;
							}
						}
						break;
						
				case 3: //Se llama a las funciones de retirar saldo segun el nip ingresado
							a=1;
							while(a<=1){
						cout<<"Ingrese su nip"<<endl;
						cin>>nip4;
							if(nip4 == 1234){
										retirarSaldo1();
										a=2;
										C=1;
										system("cls");
							}
							else if(nip4 == 6789){
									retirarSaldo2();
									a=2;
									C=1;
									system("cls");
							}
							else{
								cout<<"nip incorrecto"<<endl;
							}
						}
						break;
				
				case 4: //Se llama a las funciones de trasnferencia segun el nip ingresado
						b=1;
						while(b<=1){
						cout<<"Ingrese su nip"<<endl;
						cin>>nip4;
						if(nip4 == 1234){
							trasferencia();
							b=2;
							C=1;
							system("cls");
							break;
						}
						else if(nip4 == 6789){
							trasferencia2();
							b=2;
							C=1;
							system("cls");
							break;
						}
						else{
							cout<<"El nip es incorrecto"<<endl;
							system("pause");
							system("cls");
							
						}
					} 
					break;
				case 5: //Se finaliza el programa
						C=2; break;
				}
			}
	return 0;
}





