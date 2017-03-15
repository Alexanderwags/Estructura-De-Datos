#include <iostream>

using namespace std;

void unaFuncion();
void Sumar(int, int);
int Contador (int);

int main(int argc, char** argv) {
	// VAriables
	int a=0, b=0;
	
	cout "Hola Mundo"<<endl;
	cin.get();
	system("cls");
	cout<<"Indica el valor de a: ";
	cin>>a;
	cout<<"Indica el valor de b: ";
	cin>>b;
	Sumar(a,b);
	cin.get();
	
	return 0;
}

void unaFuncion()
{
	cout<<"El codigo de una funcion";
}

void Sumar(int a, int b)
{
	int c = 0;
	c = a+ b;
	cout <<"El resultado de sumar "<<a<<"+"<<b<<" es: "<<c<<endl;
	
}

int Contador (int n)
{
	//variables
	int x;
	
	for (x=0; x<n; x++){
		cout<<<x<<" ";
	}
	cin<<endl;
	return 1;
}
