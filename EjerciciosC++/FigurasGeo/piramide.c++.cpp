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
	// = debido a que la base consta de 4 lados
	n = 4;
	cout << " ingrese la longitud de la piramide cuadrangular: " << endl;
	cin >> l;
	cout << " ingrese el apotema de la piramide cuadrangular: " << endl;
	cin >> ap;
	cout << " ingrese la altura de la piramide cuadrangular: " << endl;
	cin >> h;
	// procesamiento de datos
	// Area Lateral
	if (l>0 && ap>0 && h>0) {
		pb = l*n;
		al = 1/2*(pb*ap);
		// Area Total
		ab = pow(l,2);
		at = al+ab;
		// Volumen
		v = 1/3*(ab*h);
		// Salida de datos
		cout << "------------------------------------------------" << endl;
		cout << " El area lateralde la piramide cuadrangular es de: " << int(al) << "  m² " << endl;
		cout << "------------------------------------------------" << endl;
		cout << " El area total de la piramide cuadrangular es de: " << int(at) << "  m² " << endl;
		cout << "------------------------------------------------" << endl;
		cout << " El volumen de la piramide cuadrangular es de: " << int(v) << "  m³  " << endl;
		cout << "------------------------------------------------" << endl;
	} else {
		cout << " Los valores que Ud ha ingresado son incorrectos!! " << endl;
	}
	return 0;
}

