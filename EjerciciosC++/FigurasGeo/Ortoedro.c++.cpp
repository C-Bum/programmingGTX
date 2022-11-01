#include<iostream>
#include<cmath>
using namespace std;


int main() {
	float a;
	float area;
	float b;
	float c;
	float d;
	float v;
	// Entrada de datos
	cout << " Introduzcala arista a: " << endl;
	cin >> a;
	cout << " Introduzcala arista b: " << endl;
	cin >> b;
	cout << " Introduzcala arista c: " << endl;
	cin >> c;
	// precesamiento
	// Diagonal
	if (a>0 && b>0 && c>0) {
		d = sqrtf(pow(a,2)+pow(b,2)+pow(c,2));
		// Area
		area = 2*(a*b+a*c+b*c);
		// volumen 
		v = a*b*c;
		// salida de datos 
		cout << " La diagonal del ortoedro es de: " << int(d) << " m  " << endl;
		cout << " El area del ortoedro es de: " << int(area) << "  m²  " << endl;
		cout << " El volumen del ortoedro es de: " << int(v) << "  m³  " << endl;
	} else {
		cout << "Los valores ingresados son incorrectos" << endl;
	}
	return 0;
}

