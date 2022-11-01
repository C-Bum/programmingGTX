#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float al;
	float at;
	float h;
	float r;
	float v;
	// definiendo variables
	// Entrada de datos 
	cout << " Escribir el radio del cilindro: " << endl;
	cin >> r;
	cout << " Escribrir la altura del cilindro: " << endl;
	cin >> h;
	// Procesamiento de datoos
	if (r>0 && h>0) {
		v = 3.1416*pow(r,2)*h;
		al = 2*3.1416*r*h;
		at = 2*3.1416*r*(h+r);
		// Salida de datos
		cout << "------------------------------------------------" << endl;
		cout << " El area lateral del cilindro es de: " << int(al) << "  m² " << endl;
		cout << "------------------------------------------------" << endl;
		cout << " El area total del cilindro es de: " << int(at) << "  m² " << endl;
		cout << "------------------------------------------------" << endl;
		cout << " El volumen del cilindro es de: " << int(v) << "  m³  " << endl;
		cout << "------------------------------------------------" << endl;
	} else {
		cout << "Por favor Introduzca un valor correcto!!" << endl;
	}
	return 0;
}

