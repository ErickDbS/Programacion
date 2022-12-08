#include <iostream>
#include <string.h>
#include <conio.h>
#include <string>
#include <fstream>

using namespace std;

//Variables goblase utilizadas
int nip4,aux,aux2;
int nipC2 = 6789;
string usuarios[10][1];
string usuario;
bool band=true;
int i,j,ciclo10,users,pass,cicloUsers,opc,cicloNip,nuevoNip1,nuevoNip2,ciclo11;
double dinero,dinero2;
int long transferencia1 = {1};
int long transferencia2 = {2};
ofstream archivo;
int bandera=0;


string usuario1="erick",usuario2="jose";
	int nip1=1234,nip2=4321,nip0;
	string usuarioV;
//Aqui se almacenan los nips de las cuenta previamente declaradas
void cuentas()
{	
	do{

	
		cout<<"Iniciar sesion"<<endl;
		cout<<endl;
					
			cout<<"Ingrese su usuario"<<endl;
			cin>>usuarioV;
			cout<<"Ingrese su nip"<<endl;
			cin>>nip0;
			
			if(usuarioV == usuario1 && nip0 == nip1){
			cout<<"Bienvenido "<<usuario;
			bandera=1;
			ciclo10=2;
			}
			else if(usuarioV == usuario2 && nip0 == nip2){
				cout<<"Bienvenido "<<usuario2;
				bandera=2;	
				ciclo10=2;
			}
			else{
				cout<<"Usuario o nip incorrectos"<<endl;
				ciclo10=1;
			}
		}while(ciclo10==1);
}

//Mas variables globales para las funciones de ver saldo y retirar saldo
double saldo = 10000,result = 10000,result2 = 20000;
double saldoC2 = 20000;
int	rSaldo;

//Aqui se almacena el saldo disponoble de la cuenta 1
void saldoCuenta1()
{
	
	archivo.open("Saldos.txt",ios::out);
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo"<<endl;
		exit(1);
	}
	archivo<<"Saldos de la cuenta"<<endl;
	cout<<"Usted tiene "<<saldo<<" disponible"<<endl<<endl;
	archivo<<"Usted tiene "<<saldo<<" disponible"<<endl<<endl;
	system("pause");
	system("cls");
	archivo.close();
	
	
}
	
//Funcion en la que se almacena el saldo de la cuenta 2
void saldoCuenta2()
{
	archivo.open("Saldo de la cuenta 2.txt",ios::out);
	archivo<<"Saldo de la cuenta 2"<<endl;
	
	cout<<"Usted tiene "<<saldoC2<<" disponible"<<endl<<endl;
	archivo<<"Usted tiene "<<saldoC2<<" disponible"<<endl<<endl;
	system("pause");
	system("cls");
	archivo.close();
	
}	

//Funcion para retirar saldo de la cuenta 1
void retirarSaldo1()
{
	archivo.open("Retirar Saldo.txt",ios::out);
	if(archivo.fail()){
		cout<<"Error al habrir el archivo"<<endl;
		exit(1);
	}
	
	archivo<<"Retiros de la cuenta"<<endl;
	int s=1;
			cout<<"Su saldo es de: "<<saldo<<endl;
			while(s<=1)
			{	
				cout<<"Ingrese la cantidad a retirar"<<endl;
				cin>>rSaldo;
				if(rSaldo>saldo){
					cout<<"Saldo insuficiente"<<endl;
				}
				else if(rSaldo<=0){
					cout<<"Cantidad invalida"<<endl;
				}
				else{
				saldo = saldo - rSaldo;
				cout<<"Transaccion exitosa"<<endl;
				cout<<endl;
				s=2;
				system("pause");
				system("cls");
				}	
			}
			
			archivo<<rSaldo<<endl;
			archivo.close();
			
			
}

//Funcion para retirar saldo de la cuenta 2
void retirarSaldo2()
{		
	archivo.open("Retiros Saldo Cuenta 2.txt",ios::out);
	archivo<<"Retiros de saldo de la cuenta 2"<<endl;
	int s=1;
			cout<<"Su saldo es de: "<<saldoC2<<endl;
			while(s<=1){
				cout<<"Ingrese la cantidad a retirar"<<endl;
				cin>>rSaldo;
				archivo<<rSaldo;
				if(rSaldo > saldoC2){
					cout<<"Saldo insuficiente"<<endl;
				}
				else if(rSaldo <= 0){
					cout<<"Cantidad Invalida"<<endl;
				}
				else{
				saldoC2 = saldoC2 - rSaldo;
				cout<<"Transaccion exitosa"<<endl;
				cout<<endl;
				s=2;
				system("pause");
				system("cls");
				}
			}
			archivo.close();
}

//Funcion de la trasferencia de dinero de la cuenta 1
void trasferencia()
{
	int s,c;
	int transferencia,trans;
	s=1;
	c=1;
	archivo.open("Transferencia1.txt",ios::out);
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo"<<endl;
		exit(1);
	}
	
	archivo<<"Transferencias de la cuenta"<<endl;
	while(s<=1){
	
	
		cout<<"Ingrese el numero de la cuenta que va a depositar"<<endl;
		cin>>trans;
		s=2;
		
		while(c<=1){
		if(trans == 1){
			cout<<"Ingrese la cantidad a transferir"<<endl;
			cin>>dinero;
			if(dinero > saldo){
				cout<<"Fondos insuficientes"<<endl;
			}
			else if(dinero <=0){
				cout<<"Cantidad invalida"<<endl;
			}
			else{
			
			saldoC2=saldoC2 + dinero;
			saldo=saldo - dinero;
			cout<<"Transferencia exitosa"<<endl;
			c=2;
			system("pause");
			system("cls");
			cout<<endl;
			}
		}
		else{
			cout<<"La cuenta no existe"<<endl;
			
			}
		}
	
	}
	
	archivo<<dinero<<endl;
	archivo.close();
}

////Funcion de la trasferencia de dinero de la cuenta 2
void trasferencia2()
{
	int s,c;
	int transferencia,trans;
	s=1;
	c=1;
	while(s<=1){
	
		archivo.open("Transferencia2.txt",ios::out);
		archivo<<"Transferencias de la cuenta 2"<<endl;
		cout<<"Ingrese el numero de la cuenta que va a depositar"<<endl;
		cin>>trans;
		s=2;
		
		while(c<=1){
		if(trans == 2){
			cout<<"Ingrese la cantidad a transferir"<<endl;
			cin>>dinero2;
			if(dinero2 > saldoC2){
				cout<<"Fondos insuficientes"<<endl;
			}
			else if(dinero2 <=0){
				cout<<"Cantidad invalida"<<endl;
			}
			else{
			
			archivo<<dinero2;
			saldo =saldo + dinero2;
			saldoC2=saldoC2 - dinero2;
			
			cout<<"Transferencia exitosa"<<endl;
			c=2;
			system("pause");
			system("cls");
			cout<<endl;
			}
		}
		else{
			cout<<"La cuenta no existe"<<endl;
		}
			}	
		}	
	archivo.close();
}

//Codigo main (Principal)
int main()
{
	//Declaracion de variables del main
	int N=1,nip4,C=1;
	
		//Se cicla toda la funcion main para poder ingresar con diferentes cuentas
	do
	{
	
		
			//Bienvenida
			cout<<"Bienvenido"<<endl;
			cuentas();
			system("cls");
			
			
		do
		{	//Menu del cajero
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
							if(bandera == 1){
								cout<<"Ingrese su nuevo nip"<<endl;
								cin>>nuevoNip1;
								nip1=nuevoNip1;
								cout<<"Nip cambiado con exito"<<endl;
								C=1;
							}
							else if(bandera == 2){
								cout<<"Ingrese su nuevo nip"<<endl;
								cin>>nuevoNip2;
								nip2=nuevoNip2;
								cout<<"Nip cambiado con exito"<<endl;
								C=1;
							}	
							break;
					case 2://Se llama a la funcion de consultar saldo dependiendo el nip
							if(bandera==1){
								saldoCuenta1();
								C=1;
							}
							else if(bandera==2){
								saldoCuenta2();
								C=1;
							}
							break;
							
					case 3: //Se llama a las funciones de retirar saldo segun el nip ingresado
							if(bandera==1){
								retirarSaldo1();
								C=1;
							}
							else if(bandera==2){
								retirarSaldo2();
								C=1;
							}
							break;
					
					case 4: //Se llama a las funciones de trasnferencia segun el nip ingresado
							if(bandera==1){
								trasferencia();
								C=1;
							}
							else if(bandera==2){
								trasferencia2();
								C=1;
							}
						break;
					case 5: //Se finaliza el programa
							C=2; ciclo11=1; break;
					}
				}while(C==1);
		}while(ciclo11==1);
	return 0;
}





