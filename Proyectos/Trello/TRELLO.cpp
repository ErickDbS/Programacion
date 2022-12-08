#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

string tablero[2];
string proposito[2];
string listasTablero1[2];
string listasTablero2[2];
string listasTablero3[2];
string tarea1[4];
string tarea2[4];
string tarea3[4];
int codigoTarea1[4];
int codigoTarea2[4];
int codigoTarea3[4];
int tableros;
int i=0,j=0,p,k,c,ciclo2,ciclo4,t=0,h=0,n=0,b=0,cicloLista2,cicloLista3,moverTarea2,moverTarea3,cicloTarea2,cicloTarea3;
int opc,resp,ciclo3,auxTablero1,auxTablero2,auxTablero3,auxTareas,listasTab,ciclo5,ciclo,opc3,opc2;
int auxLista,numLista,cicloLista,cicloTablero,cicloLista1,opcTarea,moverTarea,cicloTarea1,opcTarea3,opcTarea2;
int auxCodigoTarea1,auxCodigoTarea2,auxTareas2,auxTareas3,auxLista2,auxLista3,auxCodigoTarea3;
string auxTarea1,auxTarea2,auxTarea3; 


void tablero1();

void tablero3();
void lista1();
void lista2();
void lista3();
void lista4();
void lista5();
void lista6();
void lista7();
void lista8();
void lista9();
void menu();
void crearTablero();
void verTablero();
void ingresarTablero();

int main(){
	
	int opc;
	ciclo==1;
	
	do{
	
		cout<<"[1] Crear tablero"<<endl;
		cout<<"[2] Ver tableros"<<endl;
		cout<<"[3] Ingresar a un tablero"<<endl;
		cout<<"[4] Salir"<<endl;
		cin>>opc;
		
		switch(opc){
			
			case 1: crearTablero();
					system("cls"); break;
			
			case 2: verTablero(); 
					system("cls"); break;
			
			case 3: ingresarTablero(); 
					system("cls"); break;
			
			case 4:  ciclo=2;
					system("cls"); break;
			
			default: cout<<"Esa opcion no existe"<<endl; ciclo=1; break;
		}
	}while(ciclo==1);
		

	return 0;
}



void crearTablero(){
	system("cls");
	int ciclo2;
	
	ciclo2==1;
	do{
		if(tableros<3){
		
			cout<<"Ingrese el nombre del tablero"<<endl;
			getline(cin,tablero[i]);
			getline(cin,tablero[i]);
			cout<<"A que va estar enfocado su tablero?"<<endl;
			getline(cin,proposito[j]);
			cout<<"Tablero creado correctamente"<<endl;
			
			tableros=tableros+1;
			i=i+1;
			j=j+1;
		}
		else{
			cout<<"Ya no puede crear mas tableros"<<endl;
		}
			
			ciclo2=2;
			ciclo4=1;
	}while(ciclo2==1);
	ciclo=1;
	getch();
	
}

void verTablero(){
	
	
	for(int i=0; i<tableros; i++){
		cout<<"Tablero "<<i<<" "<<tablero[i]<<" "<<"Proposito"<<" "<<proposito[i]<<endl;
	}
	ciclo=1;
	getch();
}

void ingresarTablero(){
	system("cls");
	if(tableros >= 1){
		do{
			
			cout<<"Eliga el tablero a ingresar"<<endl;
			verTablero();
			cout<<"[3] Salir"<<endl;
			cin>>resp;
			
			switch(resp){
				
				case 0:
						if(auxTablero1 == 0){
							tablero1();
						}
						else{
							cout<<"opcion incorrecta"<<endl;
							ciclo3=1;
						}
						break;
						
				case 1:
						if(auxTablero2 == 1){
							
						}
						else{
							cout<<"opcion incorrecta"<<endl;
							ciclo3=1;
						}
						break;
						
				case 2:
						if(auxTablero3 == 2){
							tablero1();
						}
						else{
							cout<<"opcion incorrecta"<<endl;
							ciclo3=1;
						}
						break;
						
				case 3:
						ciclo3=2; break;
			}
		}while(ciclo3==1);
	}
	else{
		cout<<"Primero cree un tablero"<<endl;
	}
	ciclo=1;
	getch();
}

void tablero1(){
	do{
	
		system("cls");
		
		cout<<"Tablero"<<" "<<tablero[0]<<endl;
		cout<<"Categoria/Proposito"<<" "<<proposito[0]<<endl;
		
		cout<<"MENU"<<endl;
		cout<<"-----------------------------"<<endl;
		cout<<"[1] Crear nueva lista"<<endl;
		cout<<"[2] Ver listas"<<endl;
		cout<<"[3] Ingresar a una lista"<<endl;
		cout<<"[4] Salir"<<endl;
		cin>>opc;
		
		switch(opc){
			
			case 1:
					if(auxLista <3){
					
						do{
						
							cout<<"Ingrese el nombre de la lista"<<endl;
							getline(cin,listasTablero1[p]);
							getline(cin,listasTablero1[p]);
							cout<<"Lista creada correctamente"<<endl;
							auxLista=auxLista+1;
							p++;
							ciclo5=2;
						}while(ciclo5==1);
					}
					else{
						cout<<"Ya no puede crear mas listas"<<endl;
						
					} 
					cicloTablero=1; getch(); break;
			
			case 2:
					for(int i=0; i<auxLista; i++){
						cout<<listasTablero1[i]<<endl;
					}
					cicloTablero=1;
					getch(); break;
					
			case 3:	do{
						cout<<"Ingrese el numero de la lista a ingresar"<<endl;
						for(int i=0; i<auxLista; i++){
							cout<<"Lista "<<i<<" "<<listasTablero1[i]<<endl;
						}	
						cout<<endl;			
						cin>>numLista;
					
					
						switch(numLista){
							case 0:
									cout<<"Ingresando a la lista 0"<<endl;
									lista1();
									cicloLista=2;
									cicloTablero=2;
									break;
							
							case 1:
									cout<<"Ingresando a la lista 1"<<endl;
									lista2();
									cicloLista=2;
									cicloTablero=2;
									break;
									
							case 2:
									cout<<"Ingresando a la lista 2"<<endl;
									lista3();
									cicloLista=2;
									cicloTablero=2;
									break;
									
							default:
									cout<<"Esta lista no existe"<<endl;
									cicloLista=1;
									cicloTablero=2;
									break;
						}
					}while(cicloLista==1);
			
			case 4:
					ciclo3=2;
					ciclo=1;
					cicloTablero=2;
					break;
		
			default:
					cout<<"Esta opcion no existe"<<endl;
					cicloTablero=1;
					break;
		
		
		}
	}while(cicloTablero==1);
		ciclo=1;
	getch();
}

void tablero2(){
	do{
	
		system("cls");
		
		cout<<"Tablero"<<" "<<tablero[1]<<endl;
		cout<<"Categoria/Proposito"<<" "<<proposito[1]<<endl;
		
		cout<<"MENU"<<endl;
		cout<<"-----------------------------"<<endl;
		cout<<"[1] Crear nueva lista"<<endl;
		cout<<"[2] Ver listas"<<endl;
		cout<<"[3] Ingresar a una lista"<<endl;
		cout<<"[4] Salir"<<endl;
		cin>>opc;
		
		switch(opc){
			
			case 1:
					if(auxLista <3){
					
						do{
						
							cout<<"Ingrese el nombre de la lista"<<endl;
							getline(cin,listasTablero2[p]);
							getline(cin,listasTablero2[p]);
							cout<<"Lista creada correctamente"<<endl;
							auxLista=auxLista+1;
							p++;
							ciclo5=2;
						}while(ciclo5==1);
					}
					else{
						cout<<"Ya no puede crear mas listas"<<endl;
						
					} 
					cicloTablero=1; getch(); break;
			
			case 2:
					for(int i=0; i<auxLista; i++){
						cout<<listasTablero2[i]<<endl;
					}
					cicloTablero=1;
					getch(); break;
					
			case 3:	do{
						cout<<"Ingrese el numero de la lista a ingresar"<<endl;
						for(int i=0; i<auxLista; i++){
							cout<<"Lista "<<i<<" "<<listasTablero2[i]<<endl;
						}	
						cout<<endl;			
						cin>>numLista;
					
					
						switch(numLista){
							case 0:
									cout<<"Ingresando a la lista 0"<<endl;
									
									cicloLista=2;
									cicloTablero=2;
									break;
							
							case 1:
									cout<<"Ingresando a la lista 1"<<endl;
									
									cicloLista=2;
									cicloTablero=2;
									break;
									
							case 2:
									cout<<"Ingresando a la lista 2"<<endl;
									
									cicloLista=2;
									cicloTablero=2;
									break;
									
							default:
									cout<<"Esta lista no existe"<<endl;
									cicloLista=1;
									cicloTablero=2;
									break;
						}
					}while(cicloLista==1);
			
			case 4:
					ciclo3=2;
					ciclo=1;
					cicloTablero=2;
					break;
		
			default:
					cout<<"Esta opcion no existe"<<endl;
					cicloTablero=1;
					break;
		
		
		}
	}while(cicloTablero==1);
		ciclo=1;
	getch();
}

















































































































































void lista1(){
	
	do{
	
		cout<<"[1] crear nueva tarea"<<endl;
		cout<<"[2] Ver tareas"<<endl;
		cout<<"[3] Mover Tareas"<<endl;
		cout<<"[4] Salir"<<endl;
		cin>>opc;
		
		switch(opc){
			
			case 1:
					if(auxTareas <5){
					
						cout<<"Ingrese el nombre de la tarea"<<endl;
						getline(cin,tarea1[k]);
						getline(cin,tarea1[k]);
						cout<<"Ingrese el codigo de la tarea"<<endl;
						cin>>codigoTarea1[c];
						k++;
						c++;
						auxTareas++;
						cicloLista1=1;
					}
					else{
						cout<<"Ya no puedes crear mas tareas"<<endl;
						cicloLista1=1;
					}
					getch(); break;
					
			case 2:
					for(int i=0; i<auxTareas; i++){
						cout<<codigoTarea1[i]<<" "<<tarea1[i]<<endl;
					}
					cicloLista1=1;
					getch(); break;
					
			case 3:
					do
					{
					
						cout<<"Seleccione la tarea que desea mover"<<endl;
						for(int i=0; i<auxTareas; i++){
							cout<<codigoTarea1[i]<<" "<<tarea1[i]<<endl;
						}
						cin>>opcTarea;
						for(int i=0; i<auxTareas; i++){
							if(opcTarea == codigoTarea1[i]){
								cout<<"Seleccione una lista para mover la tarea"<<endl;
									for(int i=0; i<auxLista; i++){
									cout<<i<<" "<<listasTablero1[i]<<endl;
								}
							}
						}
							cin>>moverTarea;
							
							switch(moverTarea){
								
								case 0:
										cout<<"No se puede mover a esta lista"<<endl;
										cicloTarea1=2;
										cicloLista1==1;
										break;
										
								case 1: 
										cout<<"Tarea movida a la lista 1"<<endl;
										auxCodigoTarea1 = codigoTarea1[opcTarea];
										auxTarea1 = tarea1[opcTarea];
										tarea2[opcTarea] = auxTarea1;
										codigoTarea2[opcTarea] = auxCodigoTarea1;
										cicloTarea1=2;
										cicloLista1==1;
										break;
										
								case 2:
										cout<<"Tarea movida a la lista 2"<<endl;
										auxCodigoTarea1 = codigoTarea1[i];
										auxTarea1 = tarea1[i];
										tarea3[i] = auxTarea1;
										codigoTarea3[i] = auxCodigoTarea1;
										cicloTarea1=2;
										cicloLista1==1;
										break;
										
								default:
										cout<<"Accion invalida"<<endl;
										cicloLista1=1;
										break;
							}
						
					}while(cicloTarea1 == 1);
			
			case 4:
					cicloLista1=2;
					cicloTablero==1;		
					break;
		}
	}while(cicloLista1==1);
}

void lista2(){
	cout<<"Esta es la lista 1"<<endl;
		do{
	
		cout<<"[1] crear nueva tarea"<<endl;
		cout<<"[2] Ver tareas"<<endl;
		cout<<"[3] Mover Tareas"<<endl;
		cout<<"[4] Salir"<<endl;
		cin>>opc2;
		
		switch(opc2){
			
			case 1:
					if(auxTareas2 <5){
					
						cout<<"Ingrese el nombre de la tarea"<<endl;
						getline(cin,tarea2[t]);
						getline(cin,tarea2[t]);
						cout<<"Ingrese el codigo de la tarea"<<endl;
						cin>>codigoTarea2[b];
						t++;
						b++;
						auxTareas2++;
						cicloLista2=1;
					}
					else{
						cout<<"Ya no puedes crear mas tareas"<<endl;
						cicloLista2=1;
					}
					getch(); break;
					
			case 2:
					for(int i=0; i<auxTareas2; i++){
						cout<<codigoTarea2[i]<<" "<<tarea2[i]<<endl;
					}
					cicloLista2=1;
					getch(); break;
					
			case 3:
					do{
					
						cout<<"Seleccione la tarea que desea mover"<<endl;
						for(int i=0; i<auxTareas2; i++){
							cout<<codigoTarea2[i]<<" "<<tarea2[i]<<endl;
						}
						cin>>opcTarea2;
						for(int i=0; i<auxTareas2; i++){
						
							if(opcTarea2 == codigoTarea2[i]){
								cout<<"Seleccione una lista para mover la tarea"<<endl;
									for(int i=0; i<auxLista2; i++){
									cout<<i<<" "<<listasTablero2[i]<<endl;
								}
							}
						}
							cin>>moverTarea2;
							
							switch(moverTarea2){
								
								case 0:
										
										cout<<"Tarea movida a la lista 0"<<endl;
										auxCodigoTarea2 = codigoTarea2[opcTarea2];
										auxTarea2 = tarea2[opcTarea2];
										tarea1[opcTarea2] = auxTarea2;
										codigoTarea1[opcTarea2] = auxCodigoTarea2;
										cicloTarea2=2;
										cicloLista2==1;
										break;
										
								case 1: 
										cout<<"No se puede mover a esta lista"<<endl;
										cicloTarea2=2;
										cicloLista2==1;
										break;
										
								case 2:
										cout<<"Tarea movida a la lista 2"<<endl;
										auxCodigoTarea2 = codigoTarea2[opcTarea2];
										auxTarea2 = tarea2[opcTarea2];
										tarea3[opcTarea2] = auxTarea2;
										codigoTarea3[opcTarea2] = auxCodigoTarea2;
										cicloTarea2=2;
										cicloLista2==1;
										break;
										
								default:
										cout<<"Accion invalida"<<endl;
										cicloLista2=1;
										break;
							}
					}while(cicloTarea2 == 1);
			
			case 4:
					cicloLista2=2;
					cicloTablero==1;		
					break;
		}
	}while(cicloLista2==1);
}

void lista3(){
	cout<<"Esta es la lista 2"<<endl;
	
		do{
	
		cout<<"[1] crear nueva tarea"<<endl;
		cout<<"[2] Ver tareas"<<endl;
		cout<<"[3] Mover Tareas"<<endl;
		cout<<"[4] Salir"<<endl;
		cin>>opc3;
		
		switch(opc3){
			
			case 1:
					if(auxTareas3 <5){
					
						cout<<"Ingrese el nombre de la tarea"<<endl;
						getline(cin,tarea3[h]);
						getline(cin,tarea3[h]);
						cout<<"Ingrese el codigo de la tarea"<<endl;
						cin>>codigoTarea3[n];
						h++;
						n++;
						auxTareas3++;
						cicloLista3=1;
					}
					else{
						cout<<"Ya no puedes crear mas tareas"<<endl;
						cicloLista3=1;
					}
					getch(); break;
					
			case 2:
					for(int i=0; i<auxTareas3; i++){
						cout<<codigoTarea3[i]<<" "<<tarea3[i]<<endl;
					}
					cicloLista3=1;
					getch(); break;
					
			case 3:
					do{
					
						cout<<"Seleccione la tarea que desea mover"<<endl;
						for(int i=0; i<auxTareas3; i++){
							cout<<codigoTarea3[i]<<" "<<tarea3[i]<<endl;
						}
						cin>>opcTarea3;
						for(int i=0; i<auxTareas3; i++){
						
							if(opcTarea3 == codigoTarea3[i]){
								cout<<"Seleccione una lista para mover la tarea"<<endl;
									for(int i=0; i<auxLista3; i++){
									cout<<i<<" "<<listasTablero3[i]<<endl;
								}
							}
						}
							cin>>moverTarea3;
							
							switch(moverTarea3){
								
								case 0:
										
										cout<<"Tarea movida a la lista 0"<<endl;
										auxCodigoTarea3 = codigoTarea3[opcTarea3];
										auxTarea3 = tarea3[opcTarea3];
										tarea1[opcTarea3] = auxTarea3;
										codigoTarea1[opcTarea3] = auxCodigoTarea3;
										cicloTarea3=2;
										cicloLista3==1;
										break;
										
								case 1: 
										cout<<"Tarea movida a la lista 2"<<endl;
										auxCodigoTarea3 = codigoTarea3[opcTarea3];
										auxTarea3 = tarea3[opcTarea2];
										tarea2[opcTarea3] = auxTarea3;
										codigoTarea2[opcTarea3] = auxCodigoTarea3;
										cicloTarea3=2;
										cicloLista3==1;
										break;
										
								case 2:
										cout<<"No se puede mover a esta lista"<<endl;
										cicloTarea3=2;
										cicloLista3==1;
										break;
										
								default:
										cout<<"Accion invalida"<<endl;
										cicloLista3=1;
										break;
							}
					}while(cicloTarea3 == 1);
			
			case 4:
					cicloLista3=2;
					cicloTablero==1;		
					break;
		}
	}while(cicloLista3==1);
	
}


