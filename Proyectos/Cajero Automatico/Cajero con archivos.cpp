#include <iostream>
#include <string.h>
#include <conio.h>
#include <string>
#include <fstream>

using namespace std;

//Variables goblase utilizadas
int nip = 1234,nip2,nip4,aux,aux2;
int nipC2 = 6789;
string usuarios[10][1];
string usuario,nip0;
bool band=true;
int i,j,cicloInicio,users,pass,cicloUsers,opc,cicloNip;
double dinero,dinero2;
int long transferencia1 = {1};
int long transferencia2 = {2};
ofstream archivo;


void usuarioss(){
	
	
	archivo.open("Usuarios.txt",ios::app);
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo"<<endl;
		exit(1);
	}
	
	cout<<"Ingrese su nombre"<<endl;
	getline(cin,usuarios[i][0]);
	getline(cin,usuarios[i][0]);
	archivo<<"Usuarios";
	archivo<<endl;
	archivo<<usuarios[i][0];
	archivo<<" ";
	cout<<"Cree su clave"<<endl;
	getline(cin,usuarios[i][1]);
	archivo<<usuarios[i][1]<<endl;
	i++;
	users++;
	cout<<"Registro exitoso"<<endl;
	archivo.close();
}
//Aqui se almacenan los nips de las cuenta previamente declaradas
void cuentas()
{
	

	do{
	
		cout<<"Iniciar sesion"<<endl;
		cout<<"Registrarse"<<endl;
		cin>>opc;
		
		switch(opc){
			
			case 1:
					do{
					
						cout<<"Ingrese su usuario"<<endl;
						cin>>usuario;
						cout<<"Ingrese su nip"<<endl;
						cin>>nip0;
						
						for(int i=0; i<users; i++){
								if(usuario == usuarios[i][0] && nip0 == usuarios[i][1]){
									cout<<"Sesion iniciada correctamente"<<endl;
									i=users;
									cicloUsers=2;
									cicloInicio=2;
									band=true;
								}
								else{
									band=false;
								}
						}
						
						
						if(band == false){
							cout<<"Usuario o nip incorrectos"<<endl;
							cicloUsers=1;
						}
					}while(cicloUsers == 1);
					getch();
					break;
					
			case 2:
					usuarioss();
					cicloInicio=1;
					break;
					
		}
	}while(cicloInicio==1);
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
	system("pause");
	system("cls");
	archivo<<saldo;
	archivo.close();
	
	
}
	
//Funcion en la que se almacena el saldo de la cuenta 2
void saldoCuenta2()
{
	
	
	cout<<"Usted tiene "<<saldoC2<<" disponible"<<endl<<endl;
	system("pause");
	system("cls");
	
	
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
				if(rSaldo>10000){
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
	int s=1;
			cout<<"Su saldo es de: "<<saldoC2<<endl;
			while(s<=1){
				cout<<"Ingrese la cantidad a retirar"<<endl;
				cin>>rSaldo;
				if(rSaldo > 20000){
					cout<<"Saldo insuficiente"<<endl;
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
}

//Funcion de la trasferencia de dinero de la cuenta 1
void trasferencia()
{
	int s,c;
	int transferencia,trans;
	s=1;
	c=1;
	archivo.open("Transferencia.txt",ios::out);
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
		if(trans = 1){
			cout<<"Ingrese la cantidad a transferir"<<endl;
			cin>>dinero;
			saldoC2 + dinero;
			saldo=saldo - dinero;
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
						do{
						
							cout<<"Ingrese su usuario"<<endl;
							cin>>usuario;
							cout<<"Ingrese su nip"<<endl;
							cin>>nip0;
							
							for(int i=0; i<users; i++){
									if(usuario == usuarios[i][0] && nip0 == usuarios[i][1]){
										cout<<"Ingrese su nuevo nip"<<endl;
										getline(cin,usuarios[i][1]);
										getline(cin,usuarios[i][1]);
										cout<<"Nip cambiado correctamente"<<endl;
										i=users;
										cicloNip=2;
										C=1;
									}
									else{
										band=false;
									}
							}
							
							if(band == false){
								cout<<"Usuario o nip incorrectos"<<endl;
								cicloNip=1;
							}
						}while(cicloNip==1);
						break;
				case 2://Se llama a la funcion de consultar saldo dependiendo el nip
						saldoCuenta1();
						C=1;
						break;
						
				case 3: //Se llama a las funciones de retirar saldo segun el nip ingresado
						retirarSaldo1();
						C=1;
						break;
				
				case 4: //Se llama a las funciones de trasnferencia segun el nip ingresado
					trasferencia();
					C=1;
					break;
				case 5: //Se finaliza el programa
						C=2; break;
				}
			}while(C==1);
	return 0;
}





