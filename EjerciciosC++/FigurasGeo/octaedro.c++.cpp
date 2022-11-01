#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float a;
	float v;
	float x;
	// Entrada de datos
	cout << " Introduzca la longitud de unos de los lados del octaedro: " << endl;
	cin >> x;
	// precesamiento
	// Area
	if (x>0) {
		a = 2*sqrtf(3)*pow(x,2);
		// volumen 
		v = 0.47*pow(x,3);
		// salida de datos 
		cout << " El area del hexaedro es de: " << int(a) << "  m²  " << endl;
		cout << " El volumen del hexaedro es de: " << int(v) << "  m³  " << endl;
	} else {
		cout << "Valores ingresados son invalidos" << endl;
	}
	return 0;
}

