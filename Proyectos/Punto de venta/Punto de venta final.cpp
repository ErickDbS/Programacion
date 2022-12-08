#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
#include <conio.h>

using namespace std;

	
	string productoM[20][5];
	string clientes[5][4];
	float totalVenta=0;
	
	
int opc;
int comprarProducto,np,opc2,x;
int mov=0;
float ventasTotales=0;
int produ=8;int pro2=4;
int ciclo=0,ciclo2=0;
int i=2,clientesIngresados;             
ofstream archivo;                       


void stockProductos();
void totalVentas();
void cliente();
void venderProductos();
void verProductos();

int main()
{	

	// rellenamos clientes
	clientes[0][0]="0";clientes[0][1]="Goku Estrada";clientes[0][2]="500";clientes[0][3]="100";
	clientes[1][0]="1";clientes[1][1]="Etesech Perez";clientes[1][2]="1000";clientes[1][3]="300";
	clientes[2][0]="2";clientes[2][1]="Elpepe Espinoza";clientes[2][2]="50";clientes[2][3]="10";
	

	//rellenamos producto
	
	productoM[0][0]="0";productoM[0][1]="Tortillas";productoM[0][2]="20";productoM[0][3]="20";productoM[0][4]="10";
	productoM[1][0]="1";productoM[1][1]="Tecate";productoM[1][2]="15";productoM[1][3]="20";productoM[1][4]="5";
	productoM[2][0]="2";productoM[2][1]="Galletas";productoM[2][2]="10";productoM[2][3]="8";productoM[2][4]="4";
	productoM[3][0]="3";productoM[3][1]="Frijol";productoM[3][2]="15";productoM[3][3]="15";productoM[3][4]="5";
	productoM[4][0]="4";productoM[4][1]="Machaca";productoM[4][2]="50";productoM[4][3]="10";productoM[4][4]="4";
	productoM[5][0]="5";productoM[5][1]="Harina";productoM[5][2]="25";productoM[5][3]="7";productoM[5][4]="2";
	productoM[6][0]="6";productoM[6][1]="Atun";productoM[6][2]="80";productoM[6][3]="12";productoM[6][4]="4";
	productoM[7][0]="7";productoM[7][1]="Azucar ";productoM[7][2]="10";productoM[7][3]="20";productoM[7][4]="5";
	productoM[8][0]="8";productoM[8][1]="Cafe";productoM[8][2]="15";productoM[8][3]="18";productoM[8][4]="6";
	
	
	do
	{
		system("CLS");
		cout<<"\tTIENDA SDLG"<<endl;
		cout<<endl;
		cout<<"[1]	Vender productos"<<endl;
		cout<<"[2]	Ver productos"<<endl;
		cout<<"[3]	Clientes"<<endl;
		cout<<"[4]	Total de ventas"<<endl;
		cout<<"[5]	Ver stock de los productos"<<endl;
		cout<<"[6]	Salir"<<endl;
		cin>>opc;
		switch(opc)
		{
			case 1:
				{	
					venderProductos();
				}
				break;
			case 2:
				{	
					verProductos();
			}
			break;
			case 3:
				{
					cliente();
				}
				break;
			
			case 4:
				{
					totalVentas();
				}
				break;
			case 5:
				{
					stockProductos();
				}
				break;
			case 6:
				{
					opc=-1;
					
				}
				break;
			default:
				{
					cout<<"Ingrese una opcion valida"<<endl;
					system("PAUSE");
					system("CLS");
				}		
		}
	}
	while (opc>=0 and opc<=7 or opc>=9 );
	
	return 0;
}

void venderProductos(){
	system("CLS");
					mov++;
					string op="";
					float tempp;
					string id; id=" ";
					int idN;
					string npL;
					tempp=0;
					do
					{
						cout<<"\tVentas"<<endl;
						for (ciclo=0;ciclo<=produ;ciclo++)
						{
							if(productoM[ciclo][1]==" ")
							{
								cout<<"\n";
							}
							else
							cout<<"["<<ciclo<<"]  "<<"$"<<productoM[ciclo][2]<<" "<<productoM[ciclo][1]<<"\n";
						}
						cout<<"eliga el producto a comprar: ";	
						cin>>comprarProducto;
						cout<<"eliga la cantidad de "<<productoM[comprarProducto][1]<<" que comprara: ";
						cin>>np;
						int l;
						l=stoi(productoM[comprarProducto][3]);
						while(np>l)
						{
							cout<<"ingrese una cantidad menor";
							cin>>np;
						}
						npL=to_string(np);
						tempp=stof(productoM[comprarProducto][2]);
						tempp*=np;
						cout<<"total a pagar: "<<tempp<<"\n";
						ventasTotales=ventasTotales+tempp;											 
						do
						{
							if (id==" ")
							{
								cout<<"id del clientes: ";
								cin>>id;
								idN=stoi(id);
								if(idN>i or idN<0)
								{
									cout<<"El cliente no existe"<<endl;
									x=1;
								}							
								else 
									x=0;
							}
							else 
								x=0;	
						}
						while(x==1);
						
							int st=stoi(productoM[comprarProducto][3]);
							st=st-np;
							productoM[comprarProducto][3]=to_string(st);
						
							string temppL=to_string(tempp);
							string movL;
							movL=to_string(mov);
							
						
						cout<<"quiere comprar otro producto? si/no\n";
						cin>>op;

					}
					while(op=="si");
					cout<<"el total de su venta es de: "<<ventasTotales;					
					//total de venta
					totalVenta=totalVenta+ventasTotales;
					
					system("PAUSE");
}

void verProductos(){
	
	int id;
					int op;
					cout<<"\tPRODUCTOS"<<endl;
					cout<<"[1]	Buscar producto"<<endl;
					cout<<"[2]	Mostrar todos los productos"<<endl;
					cout<<"[3]	Agregar un producto"<<endl;
					cout<<"[4]	Borrar un producto"<<endl;
					cout<<"[5]	Salir"<<endl;
					cin>>op;
					do
					{
					switch (op)
					{
						case 1:
							{
								cout<<"ingresar id del producto: ";
								cin>>id;
								int idN=0;
								for (idN=0;idN<=4;idN++)
								{
									if(idN==0)
									{
										cout<<"ID:";
									}
									else if(idN==2)
									{
										cout<<"$";
									}
									else if(idN==3)
									{
										cout<<"stock ";
									}
									else if(idN==4)
									{
										cout<<"stock minimo ";
									}
									cout<<productoM[id][idN]<<"  ";		
								}	
								system("PAUSE");
							}
							break;
						case 2:
								archivo.open("Productos.txt",ios::out);
								cout<<"ID"<<"\t"<<"Nombre"<<"\t\t"<<"Precio"<<"\t"<<"Stock"<<endl;
								archivo<<"ID"<<" \t"<<"Nombre"<<"\t\t"<<"Precio"<<"\t"<<"Stock"<<endl;
								for(int i=0; i<10; i++){
								for(int j=0; j<4; j++){
									cout<<productoM[i][j]<<"\t"<<"    ";
									archivo<<productoM[i][j]<<"\t"<<"    ";
								}
								cout<<endl;
								archivo<<endl;
							}
							archivo.close();
							getch();
							break;
						case 3:
							{
								int x;
								cout<<"agregar descripcion del producto: ";
								//comprobar que no haya espacios libres
								for (ciclo=0;ciclo<=produ;ciclo++)
								{
									if(productoM[ciclo][1]==" ")
									{
										cin>>productoM[ciclo][1];
										productoM[ciclo][0]=ciclo;
										cout<<"precio de venta del producto: ";
										cin>>productoM[ciclo][2];
										cout<<"cantidad de stock: ";
										cin>>productoM[ciclo][3];
										cout<<"cantdad minima de stock: ";
										cin>>productoM[ciclo][4]; 
										ciclo+=10;//salir del ciclo y que termine de buscar
										x=1;
									}
									else
									{
										x=0;
									}
								}
								// si x es igual a 0 es por que no encontro un lugar vacio;
								if(x==0)
								{
									//produ++ es para ir un lugar libre despues del ultimo producto
									produ++;
									cin>>productoM[produ][1];
									productoM[produ][0]=produ;
									cout<<"precio de venta del producto: ";
									cin>>productoM[produ][2];
									cout<<"cantidad de stock: ";
									cin>>productoM[produ][3];
									cout<<"cantdad minima de stock: ";
									cin>>productoM[produ][4]; 
								}	
							}
							break;
						case 4:
							{
								int x;
								cout<<"producto a eliminar: ";
								cin>>x;
								productoM[x][1]=" ";
								productoM[x][2]=" ";
								productoM[x][3]=" ";
								productoM[x][4]=" ";
								cout<<" producto "<<x<<" eliminado\n";
								cout<<productoM[x][1]<<productoM[x][2]<<productoM[x][3]<<productoM[x][4]<<"\n";
								system("PAUSE");
							}
							break;
						case 5:
							{
								op=6; //para que salga del ciclo
							}
							break;
						default:
							{
								cout<<"ingresar una opcion valida";
								system("PAUSE");
								system("CLS");
							}
					}
				}
				while(op<1 or op>6);
}

void cliente(){
	
	int op=0;
					string id;
					int idN;
					do
					{
						system("CLS");
						cout<<"\tCLIENTES"<<endl;
						cout<<"[1]	Buscar un clientes"<<endl;
						cout<<"[2]	Ver clientes"<<endl;
						cout<<"[3]	Agregar un clientes"<<endl;
						cout<<"[4]	Borrar un clientes"<<endl;
						cout<<"[5]	Abonar a un clientes"<<endl;
						cout<<"[6]	Salir"<<endl;  
						cin>>op;
						switch(op)
						{
							case 1:
								{
									cout<<"ingresar clientes para buscar: ";
									cin>>id;
									idN=stoi(id);
									for (ciclo=0;ciclo<=3;ciclo++)
									{	
										if (ciclo==0)
										{
											cout<<"ID: ";
										}
										else if (ciclo==1)
										{
											cout<<"NOMBRE: ";
										}
										else if(ciclo==2)
										{
											cout<<"CREDITO MAXIMO: ";
										}
										else if (ciclo==3)
										{
											cout<<"CREDITO UTILIZADO: ";
										}
										cout<<clientes[idN][ciclo]<<"  ";
									}
									system("PAUSE");
								}
								break;
							case 2:
									archivo.open("Clientes.txt",ios::out);
									cout<<"ID"<<" \t\t"<<"Nombre"<<"\t\t\t"<<"Credito"<<"\t\t"<<"Aduedo"<<endl;
									archivo<<"ID"<<" \t\t"<<"Nombre"<<"\t\t\t"<<"Credito"<<"\t\t"<<"Aduedo"<<endl;
									for(int i=0; i<5; i++){
										for(int j=0; j<4; j++){
											cout<<clientes[i][j]<<"\t"<<"\t";
											archivo<<clientes[i][j]<<"\t"<<"\t";
											
										}
										cout<<endl;
										archivo<<endl;
										
									}
									archivo.close();
									op==6;
									getch();
								break;
							case 3:
									{
									
											int p=0,j=0;
											i++;	
	
											cout<<"Ingrese el ID del cliente"<<endl;
											cin>>clientes[i][j];
											j++;
											cout<<"Ingrese el nombre del cliente"<<endl;
											getline(cin,clientes[i][j]);
											getline(cin,clientes[i][j]);
											j++;
											cout<<"Ingrese el credito del clientes"<<endl;
											cin>>clientes[i][j];
											j++;
											cout<<"Ingrese el aduedo"<<endl;
											cin>>clientes[i][j];
											j=0;
											p =2;
											clientesIngresados++;
											break;
									}
										
							case 4:
								{
									int x;
									cout<<"clientes a eliminar: ";
									cin>>x;
									clientes[x][0]=" ";
									clientes[x][1]=" ";
									clientes[x][2]=" ";
									clientes[x][3]=" ";
									cout<<" cliente "<<x<<" eliminado\n";
									cout<<clientes[x][1]<<clientes[x][2]<<clientes[x][3]<<"\n";
									i--;
									system("PAUSE");
								}
								break;
							case 5:
								{
									// este temporal es para saber cuanto depositara
									int temp;
									cout<<"ingresar usuario para abonar ";
									cin>>id;
									idN=stoi(id);
									if (idN>=0 and idN<=i)
									{
										cout<<"su usuario tiene un credito pendiente de: "<<clientes[idN][3]<<"\n";
										cout<<"cantidad a depositar: ";
										cin>>temp;
										float tempc=stof(clientes[idN][3]);
										tempc-=temp;
										clientes[idN][3]=to_string(tempc);
										
									}
									else 
									{
										cout<<"usuario invalido, intente nuevamente ";
										system("PAUSE");
									}
									system("PAUSE");
								}
								break;
							case 6:
								{
									//esta si queda en blanco ya que es para regresar de menu y por lo tanto no necesito hacer nada
								}
								break;
							default:
								{
									cout<<"favor de ingresar una opcion valida\n"<<"presione cualquier tecla para volver a intentar";
									system("PAUSE");
									system("CLS");
								}
						}
					}
					while(op!=6);
}

void totalVentas(){
	archivo.open("Ventas Totales.txt",ios::out);
	cout<<"\tTOTAL DE CAJA"<<endl;
	archivo<<"\tTOTAL DE CAJA"<<endl;
					cout<<"el total de caja es: ";
					archivo<<"el total de caja es: ";
					cout<<totalVenta;
					archivo<<totalVenta;
					archivo.close();
					system("PAUSE");
}

void stockProductos(){
	int x;
					archivo.open("Stock.txt",ios::out);
					int temp1,temp2;
					cout<<"\tstock de producto"<<endl;
					for(x=0;x<=produ;x++)
					{
						cout<<"ID: "<<productoM[x][0]<<" "<<productoM[x][1]<<" stock actual: "<<productoM[x][3]<<" stock minimo: "<<productoM[x][4]<<"\n";
						archivo<<"ID: "<<productoM[x][0]<<" "<<productoM[x][1]<<" stock actual: "<<productoM[x][3]<<" stock minimo: "<<productoM[x][4]<<"\n";
						temp1=stoi(productoM[x][3]);
						temp2=stoi(productoM[x][4]);
						if(temp1<=temp2)
						{
							cout<<"ADVERTENCIA: STOCK BAJO, PEDIR MAS A PROVEEDORES"<<endl;
							archivo<<"ADVERTENCIA: STOCK BAJO, PEDIR MAS A PROVEEDORES"<<endl;
						}
					}
					archivo.close();
					system("PAUSE");
}
