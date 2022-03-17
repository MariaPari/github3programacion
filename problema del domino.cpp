// Programa para resolver el problema del domino que consiste en representar fichas por pares de numeros enteros y colocar todas las fichas
// de una lista aleatoria de forma que el segundo numero de cada ficha coincida con el primero de la siguiente.
#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main() {
	int num1,num2,num3,num4,num5,num6;
	// num1,num2,num3,num4,num5,num6 son los numeros pertenecientes a cada ficha del domino.
	srand(time(NULL));
	cout<<"\tBienvenid@"<<endl;
	//Dando informacion del programa al usuari@.
	cout<<"En esta ocasion representaremos fichas por pares de numeros enteros y colocaremos todas las fichas de una"<<endl;
	cout<<"lista aleatoria de forma que el segundo numero de cada ficha coincida con el primero de la siguiente."<<endl;
	do {
		num1 = (rand()%7);//Numeros aleatorios del 0 al 6.
	} while (num1<=1);
	do {
		num2 = (rand()%7);//Numeros aleatorios del 0 al 6.
	} while (!(num2>1 && num2!=num1));
	do {
		num3 = (rand()%7);//Numeros aleatorios del 0 al 6.
	} while (num3!=num2);
	do {
		num4 = (rand()%7);//Numeros aleatorios del 0 al 6.
	} while (!(num4>1 && num4!=num1 && num4!=num2));
	do {
		num5 = (rand()%7);//Numeros aleatorios del 0 al 6.
	} while (num5!=num4);
	do {
		num6 = (rand()%7);//Numeros aleatorios del 0 al 6.
	} while (!(num6>1 && num6!=num2 && num6!=num4));
	cout<<"\n\n\t[("<<num1<<","<<num2<<")"<<","<<"("<<num3<<","<<num4<<")"<<","<<"("<<num5<<","<<num6<<")]"<<endl<<endl;
	system("pause");
	return 0;
}

