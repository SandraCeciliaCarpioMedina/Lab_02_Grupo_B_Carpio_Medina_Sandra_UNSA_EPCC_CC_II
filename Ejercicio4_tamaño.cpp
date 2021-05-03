#include <iostream>
#include<stdlib.h>
#include<ctime>
#include<cmath>
using namespace std;

int arreglo[1000000];

int rellenar (int arreglo[],int cantidad){	
	srand(time(NULL));
	for(int i=0;i<cantidad;i++){
		arreglo[i]=rand();
		
	}
} 
int mostrar(int arreglo[],int cantidad){
	for(int i=0;i<cantidad;i++){
		cout<<arreglo[i]<<endl;		
	}
}

int tamano(int arreglo[] ){
	int tam=0;
	int i=0;
	while(arreglo[i]!='\0'){
		tam=tam+1;
		i++;	
	}	cout<<"El porte del arreglo es "<<tam;
	    cout<<endl; 
	
		
}
 
int main(){
	rellenar(arreglo,11);
	mostrar(arreglo,11);
	tamano(arreglo);
	
	system("pause");
	return 0;
	
}
