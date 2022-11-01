#include<iostream>
#include<cmath>
using namespace std;


int main() {
	float al;
	float at;
	float g;
	float h;
	float pi;
	float r;
	float v;
	// Datos de entrada
	cout << " ingrese el radio del cono: " << endl;
	cin >> r;
	cout << " ingrese la altura del cono: " << endl;
	cin >> h;
	if (r>0 && h>0) {
		// procesamiento de datos
		// Area Lateral
		g = sqrtf(pow(h,2)+pow(r,2));
		al = M_PI*r*g;
		// Area Total
		at = al+(M_PI*(pow(r,2)));
		// Volumen
		v = (M_PI*h*(pow(r,2)))/3;
		// Salida de datos
		cout << "------------------------------------------------" << endl;
		cout << " El area lateral del cono es de: " << int(al) << "  m² " << endl;
		cout << "------------------------------------------------" << endl;
		cout << " El area total del cono es de: " << int(at) << "  m² " << endl;
		cout << "------------------------------------------------" << endl;
		cout << " El volumen del cono es de: " << int(v) << "  m³  " << endl;
		cout << "------------------------------------------------" << endl;
	} else {
		cout << "los valores ingresados son incorrectos!!" << endl;
	}
	return 0;
}

