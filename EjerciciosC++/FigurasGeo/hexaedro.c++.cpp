#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float a;
	float area;
	float d;
	float v;
	float x;
	// Entrada de datos
	cout << " Introduzca un lado del hexaedro: " << endl;
	cin >> x;
	// precesamiento
	// Diagonal
	if (x>0) {
		d = x*sqrtf(3);
		// Area
		area = 6*pow(x,2);
		// volumen 
		v = pow(x,3);
		// salida de datos 
		cout << " La diagonal del hexaedro es de: " << int(d) << " m  " << endl;
		cout << " El area del hexaedro es de: " << int(area) << "  m²  " << endl;
		cout << " El volumen del hexaedro es de: " << int(v) << "  m³  " << endl;
	} else {
		cout << "valores ingresados incorrectos." << endl;
	}
	return 0;
}

