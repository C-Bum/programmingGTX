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
	float const;
	float fahr;
	float gradoscelsius;
	string ing;
	gradoscelsius = 0;
	fahr = 0;
	const = 32;
	cout << "para describir la conversion que desea saber, solo coloque las iniciales(c a f, f a c) " << endl;
	cout << "Que conversion desea saber: " << endl;
	cin >> ing;
	if (ing=="c a f") {
		cout << "Ingrese los grados Celsius: " << endl;
		cin >> gradoscelsius;
		fahr = (gradoscelsius*1.8)+const;
		cout << "La temperatura de celsius a fahrenheit es de: " << fahr << "°" << "fahrenheit" << endl;
	} else {
		if (ing=="f a c") {
			cout << "Ingrese los grados fahrenheit: " << endl;
			cin >> fahr;
			gradoscelsius = (fahr-const)/1.8;
			cout << "La temperatura de fahrenheit a celsius es de: " << gradoscelsius << "°" << "Celsius" << endl;
		}
	}
	return 0;
}

