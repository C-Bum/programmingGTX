// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
#include<cmath>
using namespace std;

// Para las variables que no se pudo determinar el tipo se utiliza la constante
// SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
// (usualmente int,float,string o bool).
#define SIN_TIPO string

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	float altura[200];
	float calculo;
	float cantpersonas;
	int i;
	SIN_TIPO nombres[200];
	SIN_TIPO number[200];
	float peso[200];
	int pesoideal;
	cout << "=======================BINEVENIDO A SeaFitYa S.A.========================" << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << "Toca para continuar" << endl;
	cin.get(); // a diferencia del pseudocódigo, espera un Enter, no cualquier tecla
	cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
	cout << "Ingrese la cantidad de personas a atender: " << endl;
	cin >> cantpersonas;
	// Leer datos
	for (i=1;i<=cantpersonas;i++) {
		cout << "Nombre " << i << ": " << endl;
		cin >> nombres[i-1];
		cout << "Peso(Kg): " << nombres[i-1] << endl;
		cin >> peso[i-1];
		cout << "Altura(m): " << nombres[i-1] << endl;
		cin >> altura[i-1];
		cout << "Telefono: " << nombres[i-1] << endl;
		cin >> number[i-1];
		cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
	}
	cout << "Personas: " << cantpersonas << endl;
	for (i=1;i<=cantpersonas;i++) {
		cout << "______________________________________" << endl;
		calculo = peso[i-1]/(pow(altura[i-1],2));
		pesoideal = int(calculo+.5);
		if (pesoideal>=23) {
			cout << "llamar a  " << nombres[i-1] << " con numero " << number[i-1] << ", necesita ayuda!! " << endl;
			cout << "Su peso ideal esta por arriba del adecuado: " << pesoideal << endl;
			if (pesoideal<23) {
				cout << "No se necesita llamar a nadie el dia de hoy. " << endl;
			}
		} else {
		}
	}
	return 0;
}

