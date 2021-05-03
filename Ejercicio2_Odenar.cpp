#include <iostream>
#include<stdlib.h>
#include<ctime>
#include<cmath>
using namespace std;

int arreglo[10];
int cantidad;


int rellenar (int arreglo[]){	
	srand(time(NULL));
	for(int i=0;i<10;i++){
		arreglo[i]=rand();		
	}
} 
int original(int arreglo[],int cantidad){
	cout<<"Arreglo original"<<endl;
	for(int i=0;i<cantidad;i++){		
		cout<<arreglo[i]<<endl;
	}
	
}
int vuelta(int arreglo[],int cantidad){
	cout<<"Arreglo inverso "<<endl;
	for(int i =cantidad-1;i>=0;i--){		
		cout<<arreglo[i]<<endl;
	}
	
}

int main (){
	
	rellenar(arreglo);	
	original(arreglo,10);
	vuelta(arreglo,10);
	
	
	
	system("pause");
	return 0;	
}
