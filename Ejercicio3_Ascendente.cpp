#include <iostream>
#include<stdlib.h>
#include<ctime>
#include<cmath>
using namespace std;

int arreglo[1000000];//datos disponibles
int cantidad;


int rellenar (int arreglo[]){	
	srand(time(NULL));
	for(int i=0;i<1000000;i++){///1000000
		arreglo[i]=rand();		
	}
} 

int original(int arreglo[],int cantidad){
	cout<<"Arreglo original"<<endl;
	for(int i=0;i<cantidad;i++){		
		cout<<arreglo[i]<<endl;
	}
	
}

int descendente(int arreglo[],int cantidad){
	cout<<"Arreglo descendente "<<endl;
	int aux,i,j;
	for(i=0;i<cantidad;i++){
		for(j=i+1;j<cantidad;j++){
			if(arreglo[i]<arreglo[j]){
				aux=arreglo[i];
				arreglo[i]=arreglo[j];
				arreglo[j]=aux;
			}
		}
			
	cout<<arreglo[i]<<endl;	
	}
		
}
int ascendente(int arreglo[],int cantidad){
	cout<<"Arreglo ascendente "<<endl;
	int aux,i,j;
		for(i=0;i<cantidad;i++){
		for(j=i+1;j<cantidad;j++){
			if(arreglo[i]>arreglo[j]){
				aux=arreglo[i];
				arreglo[i]=arreglo[j];
				arreglo[j]=aux;
			}
		}
			
	cout<<arreglo[i]<<endl;	
	}
		
}


int main (){
	
	rellenar(arreglo);	
	original(arreglo,40);
	descendente(arreglo,40);
	ascendente(arreglo,40);
	
	system("pause");
	return 0;	
}
