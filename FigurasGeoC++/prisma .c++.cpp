#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float ab;
	float al;
	float ap;
	float at;
	float h;
	float l;
	float n;
	float pb;
	float v;
	// Definiendo variables 
	// = debido a que el pentagono consta de 5 lados.
	n = 5;
	// Entrada de datos
	cout << " ingrese la longitud del prisma pentagonal: " << endl;
	cin >> l;
	cout << " ingrese el apotema del prisma pentagonal: " << endl;
	cin >> ap;
	cout << " ingrese la altura del prisma pentagonal: " << endl;
	cin >> h;
	// procesamiento de datos
	// Area Lateral
	if (l>0 && ap>0 && h>0) {
		pb = l*n;
		al = pb*h;
		// Area Total
		ab = (pb*ap)/2;
		at = al+2*ab;
		// Volumen
		v = ab*h;
		// Salida de datos
		cout << "------------------------------------------------" << endl;
		cout << " El area lateral del prisma pentagonal es de: " << int(al) << "  m² " << endl;
		cout << "------------------------------------------------" << endl;
		cout << " El area total del prisma pentagonal es de: " << int(at) << "  m² " << endl;
		cout << "------------------------------------------------" << endl;
		cout << " El volumen del prisma pentagonal es de: " << int(v) << "  m³  " << endl;
		cout << "------------------------------------------------" << endl;
	} else {
		cout << " Los valores que Ud ha ingresado son incorrectos!! " << endl;
	}
	return 0;
}

