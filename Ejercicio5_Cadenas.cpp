#include <iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;
//tamaño de los arreglo
char a[500];
char b[500];

void concatenar (char a[],char b[] ){	
      strcat(b,a);
      cout<<"Su nueva cadena es: "<<b<<endl;	
}

int main (){
	cout<<"Escriba su primera cadena:";
	cin.getline(a,500,'\n');//donde almaceanar,espaciototaldeelemeneto,termine salto de linea
	
	cout<<"Escriba su segunda cadena:";
	cin.getline(b,500,'\n');
	
	concatenar(a,b);
	system("pause");
	return 0;
}
