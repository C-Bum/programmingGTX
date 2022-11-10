// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
#include<cmath>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	float cuadrado[9];
	int i;
	float num[9];
	// Desarrollar un algoritmo que nos calcule el cuadrado de los 9 primeros 
	// números naturales.
	cout << "Calcular el cuadrado de los primeros 9 numeros naturales" << endl;
	for (i=1;i<=9;i++) {
		num[i-1] = i;
		cuadrado[i-1] = pow(i,2);
	}
	for (i=1;i<=9;i++) {
		cout << " Numero " << num[i-1] << " y su cuadrado es " << cuadrado[i-1] << endl;
	}
	return 0;
}

