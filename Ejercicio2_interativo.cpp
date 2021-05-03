#include <iostream>
#include<stdlib.h>

using namespace std;

int opcion;
void menu();
void ingresar();
void vuelta();

void menu(){

	cout<<"Bienvenido al metodo interativo"<<endl;
	cout<<"Marca 1 para Insertar elementos"<<endl;
	cout<<"Marca 2 para Salir"<<endl;
	cout<<"\n\n Elige una opcion "<<" ";
	cin>>opcion;
	switch(opcion){
		case 1:
			ingresar();
			break;	
		case 2:
			cout<<"Adios"<<endl;
		break;
		
	}	
} 
void ingresar(){
	int n;
    cout<<"Ingrese el tamaño del arreglo"<<endl;
    cin>>n;
    float arreglo[n];       
	
	for (int i =0;i<n;i++){
		cout<<"Su valor ingresado es:["<<i<<"]:";
		cin>>arreglo[i];
   }
   cout<<"El arreglo invertido es: "<<endl;
   for(int i=n-1;i>=0;i--){		
		cout<<arreglo[i];
	    cout<<endl;
		
	}
}


int main(){
	
	menu();
	
	system("pause");
	return 0;
	
}

