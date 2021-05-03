#include <iostream>
#include <stdlib.h>
#include <time.h>
#include<string.h>
using namespace std;

int cant = 4;//largo de la palabra
int cant2= 3; //Repeticion de palabras
const int  letras=26;


string palabra ( int cant){
	char alfabeto[letras] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g','h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u','v', 'w', 'x', 'y', 'z' };
     string cadena=" ";
    
    for(int i=0;i<cant;i++){
   	cadena=cadena+alfabeto[rand()%letras];//letras del grupo alfabeto
   	
   }
   cout<<cadena;
   cout<<endl;
   return cadena;
}



int main()
{
//Repetir palabras
    cout<<"Sus palabras son :"<<cant2;
    cout<<endl;
	string palabras[cant2];
	srand(time(NULL));
	
	for(int i=0;i<cant2-1;i++){
   		palabras[i]=palabra(cant);
   		
   }
   
	    
  
	palabra(cant);
	system("pause");
    return 0;
}



