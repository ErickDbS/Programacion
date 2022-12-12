#include <iostream>
#include <conio.h>
#include <string>
#include <windows.h>

using namespace std;

string tablero[1];
string proposito[1];
string listasTablero1[2];
string listasTablero2[2];
string listasTablero3[2];
string tarea1[10];
string tarea2[10];
string tarea3[10];
int codigoTarea1[10];
int codigoTarea2[10];
int codigoTarea3[10];
int tableros;
int i=0,j=0,p,k,c,ciclo2,ciclo4,t=0,h=0,n=0,b=0,cicloLista2,cicloLista3,cicloTarea2,cicloTarea3;
int opc,resp,ciclo3,auxTablero1,auxTablero2,auxTablero3,auxTareas,listasTab,ciclo5,ciclo,opc3,opc2;
int auxLista,numLista,cicloLista,cicloTablero,cicloLista1,opcTarea,cicloTarea1,opcTarea3,opcTarea2;
int auxCodigoTarea1,auxCodigoTarea2,auxTareas2,auxTareas3,auxLista2,auxLista3,auxCodigoTarea3;
string auxTarea1,auxTarea2,auxTarea3;
int cicloMoverTarea,cicloMoverTarea2,cicloMoverTarea3,moverIdTarea1,moverIdTarea2,moverIdTarea3,auxListas,resp2,decision,movTareas,decision2,l=0,m=0,v=0,x=0,z=0,y=0;
string moverTarea1,moverTarea2,moverTarea3,moverTarea;
int eliminarTarea2,eliminarTarea,elejirLista;

void tablero1();
void tablero2();
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


void gotoxy(int  x, int y){
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon,dwPos);
}

void crearTablero(){
	system("cls");
	int ciclo2;
	
	
	do{
		if(tableros<2){
		
			gotoxy(70,10);cout<<"Ingrese el nombre del tablero"<<endl;
			gotoxy(70,11);getline(cin,tablero[i]);
			gotoxy(70,12);getline(cin,tablero[i]);
			gotoxy(70,13);cout<<"A que va estar enfocado su tablero?"<<endl;
			gotoxy(70,14);getline(cin,proposito[j]);
			gotoxy(70,15);cout<<"Tablero creado correctamente"<<endl;
			
			tableros++;
			i++;
			j++;
		}
		else{
			gotoxy(70,10);cout<<"Ya no puede crear mas tableros"<<endl;
		}
			
			
	}while(ciclo2==1);

	getch();
	
}

void verTablero(){
	system("cls");
	
	for(int i=0; i<tableros; i++){
		gotoxy(70,10+i);cout<<"Tablero "<<i<<" "<<tablero[i]<<" "<<"Proposito"<<" "<<proposito[i]<<endl;
	}
	
	getch();
}

void ingresarTablero(){
	system("cls");
	if(tableros >= 1){
		do{
			
			gotoxy(70,10);cout<<"Eliga el tablero a ingresar"<<endl;
			verTablero();
			gotoxy(70,12);cout<<"[3] Salir"<<endl;
			gotoxy(70,14);cin>>resp;
			if(resp == 0){
				tablero1();
			}
			else if(resp == 1){
				tablero2();
			}
			else{
				system("cls");
				gotoxy(70,10);cout<<"Esta opcion es incorrecta"<<endl;
				ciclo3=1;
				getch();
			}
		}while(ciclo3==1);
	}
	else{
		system("cls");
		gotoxy(70,10);cout<<"Primero cree un tablero"<<endl;
	}
	getch();
}

void tablero1(){
	bool banderaLista = false,bandera1 = false,bandera2 = false,bandera3 = false;
	do{
	
		system("cls");
		
		gotoxy(5,0);cout<<"Tablero"<<" "<<tablero[0];
		gotoxy(50,0);cout<<"Categoria/Proposito"<<" "<<proposito[0];
		gotoxy(5,2);cout<<"-----------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
		gotoxy(5,3);cout<<"MENU"<<endl;
		gotoxy(5,3);cout<<"[1] Crear nueva lista";
		gotoxy(30,3);cout<<"[2] Crear nueva tarea";
		gotoxy(57,3);cout<<"[3] Mover una tarea";
		gotoxy(80,3);cout<<"[4] Eliminar tarea";
		gotoxy(100,3);cout<<"[5] Salir";
		gotoxy(5,5);cout<<"Elija una opcion";
		gotoxy(0,6);cout<<"****************************************************************************************************************************************************************************"<<endl;
		for(int i=0; i<=34; i++){
			gotoxy(0,6+i);cout<<"*";
		}
		
		for(int i=0; i<=170; i++){
			gotoxy(0+i,40);cout<<"*";
		}
		
		for(int i=0; i<=34; i++){
			gotoxy(171,6+i);cout<<"*";
		}
		
		for(int i=0; i<=34; i++){
			gotoxy(57,6+i);cout<<"*";
		}
		
		for(int i=0; i<=34; i++){
			gotoxy(114,6+i);cout<<"*";
		}
		
		gotoxy(22,7);cout<<listasTablero1[0];
		gotoxy(80,7);cout<<listasTablero1[1];
		gotoxy(137,7);cout<<listasTablero1[2];
		codigoTarea1[0]=0;
		codigoTarea1[1]=1;
		codigoTarea1[2]=2;
		codigoTarea1[3]=3;
		codigoTarea1[4]=4;
		codigoTarea1[5]=5;
		codigoTarea1[6]=6;
		codigoTarea1[7]=7;
		codigoTarea1[8]=8;
		codigoTarea1[9]=9;
		codigoTarea1[10]=10;
		
		codigoTarea2[0]=0;
		codigoTarea2[1]=1;
		codigoTarea2[2]=2;
		codigoTarea2[3]=3;
		codigoTarea2[4]=4;
		codigoTarea2[5]=5;
		codigoTarea2[6]=6;
		codigoTarea2[7]=7;
		codigoTarea2[8]=8;
		codigoTarea2[9]=9;
		codigoTarea2[10]=10;
		
		codigoTarea3[0]=0;
		codigoTarea3[1]=1;
		codigoTarea3[2]=2;
		codigoTarea3[3]=3;
		codigoTarea3[4]=4;
		codigoTarea3[5]=5;
		codigoTarea3[6]=6;
		codigoTarea3[7]=7;
		codigoTarea3[8]=8;
		codigoTarea3[9]=9;
		codigoTarea3[10]=10;	
		
		for(int i=0; i<10; i++){
			gotoxy(1,9+i);cout<<"ID: "<<codigoTarea1[i]<<" NOMBRE: "<<tarea1[i];
		}
		
		for(int i=0; i<10; i++){
			gotoxy(58,9+i);cout<<"ID: "<<codigoTarea2[i]<<" NOMBRE: "<<tarea2[i];
		}
		
		for(int i=0; i<10; i++){
			gotoxy(115,9+i);cout<<"ID: "<<codigoTarea3[i]<<" NOMBRE: "<<tarea3[i];
		}
		
		gotoxy(22,5);cin>>opc;
	
		
		switch(opc){
			
			case 1:
					system("cls");
					if(auxLista <3){
						
						if(bandera1 == true){
							bandera2 = true;
						}
						else if(bandera2 == true){
							bandera3 = true;
						}
							gotoxy(70,10);cout<<"Ingrese el nombre de la lista"<<endl;
							gotoxy(70,11);getline(cin,listasTablero1[p]);
							gotoxy(70,11);getline(cin,listasTablero1[p]);
							gotoxy(70,12);cout<<"Lista creada correctamente"<<endl;
							auxLista=auxLista+1;
							p++;
							ciclo5=2;
							bandera1 = true;
							banderaLista=true;
							auxListas++;
							
					}
					else{
						gotoxy(70,10);cout<<"Ya no puede crear mas listas"<<endl;
						getch();
						break;
						
					} 
					cicloTablero=1; getch(); break;
					
			
			case 2:
					system("cls");
					if(banderaLista == true){
					
						gotoxy(70,10);cout<<"En que lista quiere crear la tarea?"<<endl;
						for(int i=0; i<auxLista; i++){
							gotoxy(70,11+i);cout<<"LISTA "<<i<<" "<<listasTablero1[i]<<endl;
						}
						gotoxy(70,14);cin>>resp;
						if(resp == 0){
								if(auxTareas <10){
									system("cls");
									gotoxy(70,10);cout<<"Ingrese el nombre de la tarea"<<endl;
									gotoxy(70,11);getline(cin,tarea1[k]);
									gotoxy(70,11);getline(cin,tarea1[k]);
									
									k++;
									c++;
									auxTareas++;
									cicloLista1=1;
									break;
								}
								else{
									gotoxy(70,10);cout<<"Ya no puedes crear mas tareas"<<endl;
									cicloLista1=1;
									break;
								}
							}
							else if(resp==1){
							 	if(bandera2==true){
								 
									if(auxTareas2 <10){
										system("cls");
										gotoxy(70,10);cout<<"Ingrese el nombre de la tarea"<<endl;
										gotoxy(70,11);getline(cin,tarea2[t]);
										gotoxy(70,11);getline(cin,tarea2[t]);
										
										t++;
										b++;
										auxTareas2++;
										break;
									}
									else{
										gotoxy(70,10);cout<<"Ya no puedes crear mas tareas"<<endl;
										cicloLista1=1;
										break;
									}
								}
							}
							else if(resp == 2){
								 
									if(auxTareas3 <10){
										system("cls");
										gotoxy(70,10);cout<<"Ingrese el nombre de la tarea"<<endl;
										gotoxy(70,11);getline(cin,tarea3[h]);
										gotoxy(70,11);getline(cin,tarea3[h]);
										
										h++;
										n++;
										auxTareas3++;
										break;
									}
									else{
										gotoxy(70,10);cout<<"Ya no puedes crear mas tareas"<<endl;
										cicloLista1=1;
										break;
									}
								}
							else{
								system("cls");
								gotoxy(70,10);cout<<"Esta lista no existe"<<endl;
								break;
							}
						}
						else{
							gotoxy(70,10);cout<<"Primero cree una lista"<<endl;
							getch(); 
							cicloTablero=1;
							break;
						}
						getch(); 
						break;
							
					
			case 3:	
					system("cls");
					if(auxListas >=2){
						gotoxy(70,10);cout<<"De que lista quiere mover una tarea"<<endl;
						for(int i=0; i<auxListas; i++){
								gotoxy(70,11+i);cout<<"LISTA "<<i<<" "<<listasTablero1[i]<<endl;
							}
							gotoxy(70,14);cout<<"Elije una opcion ";cin>>resp2;
							switch(resp2)
							{
								case 0:
										system("cls");
										gotoxy(70,10);cout<<"Que tarea quieres mover?"<<endl;
										for(int i=0; i<10; i++){
											gotoxy(70,11+i);cout<<"ID "<<codigoTarea1[i]<<" NOMBRE "<<tarea1[i]<<endl;
										}
										gotoxy(70,22);cout<<"Elije una opcion ";cin>>decision;
										decision2 = codigoTarea1[decision];
										if(decision == codigoTarea1[decision2]){
											system("cls");
											do{
											
												gotoxy(70,10);cout<<"A que lista deseas mover la tarea?"<<endl;
												gotoxy(70,11);cout<<"[1]"<<" "<<listasTablero1[1]<<endl;
												gotoxy(70,12);cout<<"[2]"<<" "<<listasTablero1[2]<<endl;
												gotoxy(70,13);cin>>movTareas;
												if(movTareas == 1){
													moverIdTarea1 = codigoTarea1[decision2];
													moverTarea1 = tarea1[decision2];
													codigoTarea1[decision2] = 0;
													tarea1[decision2] = "";
													
													
													codigoTarea2[6+l] = 6+l;
													tarea2[6+l] = moverTarea1;
													gotoxy(70,14);cout<<"Tarea movida correctamente"<<endl;
													cicloTablero=1;
													cicloMoverTarea = 2;
													l++;
													auxTareas--;
													getch();
													break;
												}
												else if(movTareas == 2){
													moverIdTarea1 = codigoTarea1[decision2];
													moverTarea1 = tarea1[decision2];
													codigoTarea1[decision2] = 0;
													tarea1[decision2] = "";
													
													
													codigoTarea3[6+m] = 6+m;
													tarea3[6+m] = moverTarea1;
													gotoxy(70,14);cout<<"Tarea movida correctamente"<<endl;
													cicloTablero=1;
													cicloMoverTarea = 2;
													m++;
													auxTareas--;
													getch();
													break;
												}
												else{
													system("cls");
													gotoxy(70,10);cout<<"Esta opcion es incorrecta"<<endl;
													cicloMoverTarea = 1;
													break;
												}
											}while(cicloMoverTarea == 1);
										}
										break;
								case 1:
										system("cls");
										gotoxy(70,10);cout<<"Que tarea quieres mover?"<<endl;
										for(int i=0; i<10; i++){
											gotoxy(70,11+i);cout<<"ID "<<codigoTarea2[i]<<" NOMBRE "<<tarea2[i]<<endl;
										}
										gotoxy(70,22);cout<<"Elije una opcion ";cin>>decision;
										decision2 = codigoTarea2[decision];
										if(decision == codigoTarea2[decision2]){
											do{
												system("cls");
												gotoxy(70,10);cout<<"A que lista deseas mover la tarea?"<<endl;
												gotoxy(70,11);cout<<"[0]"<<" "<<listasTablero1[0]<<endl;
												gotoxy(70,12);cout<<"[2]"<<" "<<listasTablero1[2]<<endl;
												gotoxy(70,13);cin>>movTareas;
												if(movTareas == 0){
													moverIdTarea2 = codigoTarea2[decision2];
													moverTarea2 = tarea2[decision2];
													codigoTarea2[decision2] = 0;
													tarea2[decision2] = "";
													
													codigoTarea1[6+v] = 6+v;
													tarea1[6+v] = moverTarea2;
													gotoxy(70,14);cout<<"Tarea movida correctamente"<<endl;
													cicloTablero=1;
													cicloMoverTarea2 = 2;
													v++;
													auxTareas2--;
													getch();
													break;
												}
												else if(movTareas == 2){
													moverIdTarea2 = codigoTarea2[decision2];
													moverTarea2 = tarea2[decision2];
													codigoTarea2[decision2] = 0;
													tarea2[decision] = "";
													
													codigoTarea3[6+x] = 6+x;
													tarea3[6+x] = moverTarea2;
													gotoxy(70,14);cout<<"Tarea movida correctamente"<<endl;
													cicloTablero=1;
													cicloMoverTarea = 2;
													x++;
													auxTareas2--;
													getch();
													break;
												}
												else{
													cout<<"Esta opcion es incorrecta"<<endl;
													cicloMoverTarea2 = 1;
													break;
												}
											}while(cicloMoverTarea2 == 1);
										}
										break;
										
								case 2:
										system("cls");
										gotoxy(70,10);cout<<"Que tarea quieres mover?"<<endl;
										for(int i=0; i<10; i++){
											gotoxy(70,11+i);cout<<"ID "<<codigoTarea3[i]<<" NOMBRE "<<tarea3[i]<<endl;
										}
										gotoxy(70,22);cout<<"Elije una opcion ";cin>>decision;
										decision2 = codigoTarea3[decision];
										if(decision == codigoTarea3[decision2]){
											do{
												system("cls");
												gotoxy(70,10);cout<<"A que lista deseas mover la tarea?"<<endl;
												gotoxy(70,11);cout<<"[0]"<<" "<<listasTablero1[0]<<endl;
												gotoxy(70,12);cout<<"[1]"<<" "<<listasTablero1[1]<<endl;
												gotoxy(70,13);cin>>movTareas;
												if(movTareas == 0){
													moverIdTarea3 = codigoTarea3[decision2];
													moverTarea3 = tarea3[decision2];
													codigoTarea3[decision2] = 0;
													tarea3[decision2] = "";
													
													codigoTarea1[6+z] = 6+z;
													tarea1[6+z] = moverTarea3;
													gotoxy(70,14);cout<<"Tarea movida correctamente"<<endl;
													cicloTablero=1;
													cicloMoverTarea3 = 2;
													z++;
													auxTareas3--;
													getch();
													break;
												}
												else if(movTareas == 1){
													moverIdTarea3 = codigoTarea3[decision2];
													moverTarea3 = tarea3[decision2];
													codigoTarea3[decision2] = 0;
													tarea3[decision2] = "";
													
													codigoTarea2[6+y] = 6+y;
													tarea2[6+y] = moverTarea3;
													gotoxy(70,14);cout<<"Tarea movida correctamente"<<endl;
													cicloTablero=1;
													cicloMoverTarea3 = 2;
													y++;
													auxTareas3--;
													getch();
													break;
												}
												else{
													cout<<"Esta opcion es incorrecta"<<endl;
													cicloMoverTarea3 = 1;
													break;
												}
											}while(cicloMoverTarea3 == 1);
										}
										break;
							}
					}
					else{
						system("cls");
						gotoxy(70,10);cout<<"Debe de  tener al menos 2 listas creadas"<<endl;
						cicloTablero=1;
						getch();
						break;
					}
					cicloTablero=1;
					break;
					
			case 4:
					if(auxListas >= 1){
						system("cls");
						gotoxy(70,10);cout<<"De que lista quiere eliminar tareas?"<<endl;
						for(int i=0; i<auxListas; i++){
							gotoxy(70,11+i);cout<<"LISTA "<<i<<" NOMBRE "<<listasTablero1[i]<<endl;
						}
						gotoxy(70,14);cout<<"Elija una opcion ";cin>>elejirLista;
						switch(elejirLista){
							case 0:
									system("cls");
									gotoxy(70,10);cout<<"Cual tarea desea eliminar"<<endl;
									for(int i=0;i<10; i++){
										gotoxy(70,11+i);cout<<"ID "<<codigoTarea1[i]<<" NOMBRE "<<tarea1[i]<<endl;
									}
									gotoxy(70,25);cout<<"Elja una opcion ";cin>>eliminarTarea;
									eliminarTarea2 = codigoTarea1[eliminarTarea];
									if(eliminarTarea == codigoTarea1[eliminarTarea2]){
										system("cls");
										tarea1[eliminarTarea2] = "";
										gotoxy(70,10);cout<<"Tarea eliminada"<<endl;
										cicloTablero=1;
										getch();
										break;
									}
									else{
										system("cls");
										gotoxy(70,10);cout<<"Esa tarea no existe"<<endl;
										cicloTablero=1;
										getch();
										break;
									}
									
							case 1:
									system("cls");
									gotoxy(70,10);cout<<"Cual tarea desea eliminar"<<endl;
									for(int i=0;i<10; i++){
										gotoxy(70,11+i);cout<<"ID "<<codigoTarea2[i]<<" NOMBRE "<<tarea2[i]<<endl;
									}
									gotoxy(70,25);cout<<"Elja una opcion ";cin>>eliminarTarea;
									eliminarTarea2 = codigoTarea2[eliminarTarea];
									if(eliminarTarea == codigoTarea2[eliminarTarea2]){
										system("cls");
										tarea2[eliminarTarea2] = "";
										gotoxy(70,10);cout<<"Tarea eliminada"<<endl;
										cicloTablero=1;
										getch();
										break;
									}
									else{
										system("cls");
										gotoxy(70,10);cout<<"Esa tarea no existe"<<endl;
										cicloTablero=1;
										getch();
										break;
									}
									
							case 2:
									system("cls");
									gotoxy(70,10);cout<<"Cual tarea desea eliminar"<<endl;
									for(int i=0;i<10; i++){
										gotoxy(70,11+i);cout<<"ID "<<codigoTarea3[i]<<" NOMBRE "<<tarea3[i]<<endl;
									}
									gotoxy(70,25);cout<<"Elja una opcion ";cin>>eliminarTarea;
									eliminarTarea2 = codigoTarea3[eliminarTarea];
									if(eliminarTarea == codigoTarea3[eliminarTarea2]){
										system("cls");
										tarea3[eliminarTarea2] = "";
										gotoxy(70,10);cout<<"Tarea eliminada"<<endl;
										cicloTablero=1;
										getch();
										break;
									}
									else{
										system("cls");
										gotoxy(70,10);cout<<"Esa tarea no existe"<<endl;
										cicloTablero=1;
										getch();
										break;
									}
						}
					}	
					else{
						system("cls");
						gotoxy(70,10);cout<<"Primero cree una lista"<<endl;
						cicloTablero=1;
						getch();
						break;
					}
					cicloTablero=1;
					break;
			
			case 5:
					cicloTablero=2;
					ciclo=1;
					break;
		
			default:
					cout<<"Esta opcion no existe"<<endl;
					cicloTablero=1;
					break;
		}
	
	}while(cicloTablero==1);
}

void tablero2(){
	
}


int main(){
	
	int opc;
	int ciclo=1;
	
	do{
		
		gotoxy(70,10);cout<<"[1] Crear tablero"<<endl;
		gotoxy(70,11);cout<<"[2] Ver tableros"<<endl;
		gotoxy(70,12);cout<<"[3] Ingresar a un tablero"<<endl;
		gotoxy(70,13);cout<<"[4] Salir"<<endl;
		gotoxy(70,14);cin>>opc;
		
		switch(opc){
			
			case 1: crearTablero();
					system("cls"); 
					ciclo=1;
					break;
			
			case 2: verTablero(); 
					system("cls");
					ciclo=1;
					break;
			
			case 3: ingresarTablero(); 
					system("cls");
					ciclo=1;
					break;
			
			case 4:  
					system("cls"); 
					ciclo=1;
					break;
			
			default: 
					system("cls");
					gotoxy(70,10);cout<<"Esa opcion no existe"<<endl; 
					ciclo=1; 
					getch();
					break;
		}
	}while(ciclo==1);
		

	return 0;
}
