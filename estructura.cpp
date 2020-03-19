#include <iostream>
using namespace std;

// Programa para entender la sintaxis básica de una estructura

// Creamos la estructura
	struct Persona{
		char nombre[20];
		int edad;
		// Antes de salir del punto y coma tenemos que decirle los nombres de las variables que serguirán esta estructura
	} // persona1;
	;
	
int main() {
	// O podemos definitlos ya dentro del main
	struct Persona persona1;
	
	// Pedimos al usuario que nos rellene los datos de la estructura
	cout<<"Introduce un nombre: ";
	cin.getline(persona1.nombre,30,'\n');
	cout<<"Introduce la edad: ";
	cin>>persona1.edad;
	
	// Ahora mostramos los datos por pantalla
	cout<<"\nEl nombre es: "<<persona1.nombre<<endl;
	cout<<"La edad es: "<<persona1.edad<<endl<<endl;
	
	// Paramos el ejecutable
	system("pause");
	
	return 0;
}
