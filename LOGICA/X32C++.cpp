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
	float c;
	int max;
	int x;
	int z;
	// Dados X e Y enteros positivos, diseña un algoritmo que dé el máximo común divisor
	cout << " Ingrese la variable x: " << endl;
	cin >> x;
	cout << " Ingrese la variable z: " << endl;
	cin >> z;
	if (x>0 && z>0) {
		max = 1;
		c = 1;
		while (c<=x) {
			c = c+1;
			if (x%c==0 && z%c==0) {
				if (c>max) {
					max = c;
				}
			}
		}
		cout << "El maximo comun divisor es: " << max << endl;
	} else {
		cout << "Porfavor ingrese numeros mayores a 0" << endl;
	}
	return 0;
}

