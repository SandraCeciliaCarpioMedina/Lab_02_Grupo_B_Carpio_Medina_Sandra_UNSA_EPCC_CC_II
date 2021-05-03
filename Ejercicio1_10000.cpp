#include <iostream>
#include<stdlib.h>
#include<ctime>
#include<cmath>
using namespace std;

int arreglo[1000000];

int rellenar (int arreglo[]){	
	srand(time(NULL));
	for(int i=0;i<1000000;i++){
		arreglo[i]=rand();
		break;
		cout<<arreglo[i]<<endl;
	}
} 

int suma(int arreglo[]){
	int suma=0;
	for(int i=0;i<1000000;i++){
		suma=suma+arreglo[i];
	}
	cout<<"la suma es "<<suma;
	cout<<endl;
		
}

int main (){	
	rellenar(arreglo);
	suma(arreglo);
	
	system("pause");
	return 0;	
}
