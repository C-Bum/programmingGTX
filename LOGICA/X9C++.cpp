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
	int num1;
	// Modificar el algoritmo anterior, de forma que,si se teclea un cero, se vuelva 
	// a pedir el número por teclado (así hasta que se teclee un número mayor 
	// que cero).
	num1 = 0;
	do {
		cout << "Porfavor digite un numero entero: " << endl;
		cin >> num1;
		if (num1==0) {
			cout << "Porfavor digite un numero entero: " << endl;
			cin >> num1;
		} else {
			if (num1%2==0) {
				cout << "===================================" << endl;
				cout << "El numero " << num1 << " es un numero par" << endl;
				cout << "===================================" << endl;
			} else {
				cout << "===================================" << endl;
				cout << "El numero " << num1 << " es un numero impar" << endl;
				cout << "===================================" << endl;
			}
		}
	} while (num1<=0);
	return 0;
}

