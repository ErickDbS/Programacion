#include <iostream> 
#include <string.h>

using namespace std;

string clientes[10] = {"jose Ramires","Goku Estrada"};
int id[10] = {1,2};
int productosM[9] = {1,2,3,4,5,6,7,8,9};
string DescripcionP[9] = {"Tortillas","Coca cola 2Lt","Galletas","Frijol","Machaca","Harina","Atun","Azucar","Cafe"};
int precioP[9] = {20,30,15,20,50,30,15,20,30};
int stockP[9] = {10,20,30,19,100,50,60,30,50};
int i=0;
int j,p=2,k=0;



void productos()
{
	cout<<"ID"<<" \t"<<"Descripcion"<<"\t"<<"Precio"<<"\t"<<"Stock"<<endl;
	cout<<"----------------------------------------------------------"<<endl;
	cout<<productosM[0]<<" \t"<<DescripcionP[0]<<"\t"<<precioP[0]<<"\t"<<stockP[0]<<endl;
	cout<<productosM[1]<<" \t"<<DescripcionP[1]<<"\t"<<precioP[1]<<"\t"<<stockP[1]<<endl;
	cout<<productosM[2]<<" \t"<<DescripcionP[2]<<"\t"<<precioP[2]<<"\t"<<stockP[2]<<endl;
	cout<<productosM[3]<<" \t"<<DescripcionP[3]<<"\t\t"<<precioP[3]<<"\t"<<stockP[3]<<endl;
	cout<<productosM[4]<<" \t"<<DescripcionP[4]<<"\t\t"<<precioP[4]<<"\t"<<stockP[4]<<endl;
	cout<<productosM[5]<<" \t"<<DescripcionP[5]<<"\t\t"<<precioP[5]<<"\t"<<stockP[5]<<endl;
	cout<<productosM[6]<<" \t"<<DescripcionP[6]<<"\t\t"<<precioP[6]<<"\t"<<stockP[6]<<endl;
	cout<<productosM[7]<<" \t"<<DescripcionP[7]<<"\t\t"<<precioP[7]<<"\t"<<stockP[7]<<endl;
	cout<<productosM[8]<<" \t"<<DescripcionP[8]<<"\t\t"<<precioP[8]<<"\t"<<stockP[8]<<endl;
	
 	

}

void menu()
{
}

void verClientes()
{
	for(int i=0; i<10; i++){
		cout<<id[i]<<" "<<clientes[i]<<endl;
	}
}

void agregarClientes()
{
	
	
	do{
		
		cout<<"Ingrese el id del cliente"<<endl;
		cin>>id[p];
		cout<<"Ingrese el nombre del cliente"<<endl;
		getline(cin, clientes[p]);
		getline(cin, clientes[p]);
		p++;
		j =1;
	}while(j<1);	
}

void comprarProductos()
{
	int j,id2,IDP,sumaProducto,sumaStock,piezas,sumaTotal;
	
	cout<<"Ingrese el ID del cliente que va a comprar"<<endl;
	cin>>id2;
	do{
		if(id2 == id[i]){
			cout<<"Comprando actualmente el cliente"<<endl;
			cout<<id[i]<<" "<<clientes[i]<<endl;
			productos();
			cout<<"Ingrese el ID del producto que va a comprar"<<endl;
			cin>>IDP;
			if(IDP == productosM[i]){
				sumaProducto = productosM[i];
				cout<<"ESTA COMPRANDO"<<" "<<DescripcionP[i]<<endl;
				cout<<"Ingrese el numero de piezas a comprar"<<endl;
				cin>>piezas;
				if(piezas == stockP[i]){
					sumaStock = stockP[i];
					cout<<"Con"<<" "<<stockP[i]<<" "<<"Piezas"<<endl;
					sumaTotal = sumaProducto * sumaStock;
					cout<<"El total a pagar es ",sumaTotal;
					cout<<"Compra exitosa"<<endl;
					
				
				}
			}
			
			j++;
			i++;
		}
	}while(j<1);
}

int main()
{
	int ID[10];
	int i=0;
	int p=0;
	int opc;
	int j = 0;
	
	
	while(j == 0){
	cout<<"Agregar clientes"<<endl;
	cout<<"Ver clientes"<<endl;
	cout<<"Ver productos"<<endl;
	cout<<"Comprar Productos"<<endl;
	cout<<"Salir"<<endl;
	cin>>opc;
	
		switch(opc)
		{
			case 1: agregarClientes(); j=0; break;

			
			case 2: verClientes(); j = 0; break;	
			
			case 3: productos();
					j = 0; break;
				
			case 4:	comprarProductos(); j=0; break;
		}
	}


	

	
	return 0;
	
}

