#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float ab1;
	float ab2;
	float al;
	float ap;
	float at;
	float bma;
	float bme;
	float h;
	float n;
	float v;
	// Lados de las bases dela piramide 
	n = 4;
	// Datos de entrada
	cout << " ingrese la base mayor del cono truncado: " << endl;
	cin >> bma;
	cout << " ingrese la base menor del cono truncado: " << endl;
	cin >> bme;
	cout << " ingrese la altura de la piramide truncada: " << endl;
	cin >> h;
	cout << " ingrese el apotema de la piramide truncada: " << endl;
	cin >> ap;
	// procesamiento de datos
	// Area Lateral
	if (bma>0 && bme>0 && h>0 && ap>0) {
		al = 2*(bma+bme)*ap;
		// Area Total
		ab1 = bma*bma;
		ab2 = bme*bme;
		at = al+ab1+ab2;
		// Volumen
		v = 1/3*h*(ab1+ab2+sqrtf(ab1*ab2));
		// Salida de datos
		cout << "------------------------------------------------" << endl;
		cout << " El area lateral de la piramide truncada es de: " << int(al) << "  m² " << endl;
		cout << "------------------------------------------------" << endl;
		cout << " El area total de la piramide truncada es de: " << int(at) << "  m² " << endl;
		cout << "------------------------------------------------" << endl;
		cout << " El volumen de la piramide truncada es de: " << int(v) << "  m³  " << endl;
		cout << "------------------------------------------------" << endl;
	} else {
		cout << " Los valores que Ud ha ingresado son incorrectos!! " << endl;
	}
	return 0;
}

