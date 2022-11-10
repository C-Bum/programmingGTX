// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	int a;
	bool band;
	float max;
	float min;
	float promedio;
	float suma;
	float x;
	// Algoritmo que lea números enteros hasta teclear 0, y nos muestre el 
	// máximo, el mínimo y la media de todos ellos.
	a = 0;
	x = 1;
	suma = 0;
	while (x!=0) {
		cout << "Ingrese un numero: " << endl;
		cin >> x;
		if (x!=0) {
			a = a+1;
			suma = suma+x;
			promedio = suma/a;
			if (band==true) {
				max = x;
				min = x;
				band = false;
			} else {
				if (x>max) {
					max = x;
				} else {
					if (x<min) {
						min = x;
					}
				}
			}
		}
	}
	cout << "El promedio de ellos es: " << promedio << endl;
	cout << "El maximo es: " << max << endl;
	cout << "El minimo es: " << min << endl;
	return 0;
}

