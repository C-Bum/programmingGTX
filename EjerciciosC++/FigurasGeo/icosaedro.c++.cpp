#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float a;
	float v;
	float x;
	// Entrada de datos
	cout << " Introduzca la longitud de unos de los lados del icosaedro: " << endl;
	cin >> x;
	// precesamiento
	// Area
	if (x>0) {
		a = 8.65*pow(x,2);
		// volumen 
		v = 2.18*pow(x,3);
		// salida de datos 
		cout << "================================================" << endl;
		cout << " El area del icosaedro es de: " << int(a) << "  m²  " << endl;
		cout << "================================================" << endl;
		cout << " El volumen del icosaedro es de: " << int(v) << "  m³  " << endl;
	} else {
		cout << "El valor inggresado es incorrecto" << endl;
	}
	return 0;
}

