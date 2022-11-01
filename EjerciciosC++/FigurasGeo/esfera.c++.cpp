#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float a;
	float pi;
	float r;
	float v;
	// Datos entrada 
	cout << " Escriba el radio de la esfera: " << endl;
	cin >> r;
	// Procesamiento 
	// area
	if (r>0) {
		a = 4*M_PI*pow(r,2);
		// volumen
		v = (4*M_PI*pow(r,3))/3;
		// salida de datos
		cout << "------------------------------------" << endl;
		cout << " El area de la esfera es de: " << int(a) << " m²  " << endl;
		cout << "------------------------------------" << endl;
		cout << " El volumen de la esfera es de: " << int(v) << "  m² " << endl;
	} else {
		cout << "El valor ingresado es incorrecto!!" << endl;
	}
	return 0;
}

