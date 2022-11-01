#include<iostream>
#include<cmath>
using namespace std;


int main() {
	float al;
	float at;
	float v;
	float x;
	// Entrada de datos
	cout << " Introduzca la longitud de unos de los lados del dodecaedro: " << endl;
	cin >> x;
	// precesamiento
	// Area lateral
	if (x>0) {
		al = 3*0.43*pow(x,2);
		// Area total
		at = sqrtf(3)*pow(x,2);
		// volumen 
		v = 0.12*pow(x,3);
		// salida de datos 
		cout << "================================================" << endl;
		cout << " El area lateral del dodecaedro es de: " << int(al) << "  m²  " << endl;
		cout << "================================================" << endl;
		cout << " El area total del dodecaedro es de: " << int(at) << "  m²  " << endl;
		cout << "================================================" << endl;
		cout << " El volumen  del dodecaedro es de: " << int(v) << " m³  " << endl;
		cout << "================================================" << endl;
	} else {
		cout << " Los valores que Ud ha ingresado son incorrectos!! " << endl;
	}
	return 0;
}

