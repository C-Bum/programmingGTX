#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float ab1;
	float ab2;
	float al;
	float at;
	float g;
	float h;
	float pi;
	float rma;
	float rme;
	float v;
	// Datos de entrada
	cout << " ingrese el radio mayor del cono truncado: " << endl;
	cin >> rma;
	cout << " ingrese el radio menor del cono truncado: " << endl;
	cin >> rme;
	cout << " ingrese la altura del cono truncado: " << endl;
	cin >> h;
	if (rma>0 && rme>0 && h>0) {
		// procesamiento de datos
		// Area Lateral
		g = sqrtf(pow(h,2)+pow((rma-rme),2));
		al = M_PI*g*(rma+rme);
		// Area Total
		ab1 = M_PI*pow(rma,2);
		ab2 = M_PI*pow(rme,2);
		at = al+ab1+ab2;
		// Volumen
		v = (M_PI*h*((pow(rma,2)+pow(rme,2))+(rma*rme)))/3;
		// Salida de datos
		cout << "------------------------------------------------" << endl;
		cout << " El area lateral del cono truncado es de: " << int(al) << "  m² " << endl;
		cout << "------------------------------------------------" << endl;
		cout << " El area total del cono es truncado de: " << int(at) << "  m² " << endl;
		cout << "------------------------------------------------" << endl;
		cout << " El volumen del cono truncado es de: " << int(v) << "  m³  " << endl;
		cout << "------------------------------------------------" << endl;
	} else {
		cout << "Los valores ingresados son incorrectos!!" << endl;
	}
	return 0;
}

