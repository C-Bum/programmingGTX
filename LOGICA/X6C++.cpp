// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
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
	int f;
	int m;
	float pf;
	float pm;
	float ptotal;
	int total;
	SIN_TIPO totalninos;
	float totalniños;
	// Un colegio desea saber qué porcentaje de niños y qué porcentaje de niñas 
	// hay en el curso actual. Diseñar un algoritmo para este propósito
	f = 0;
	m = 0;
	total = 0;
	cout << "Ingrese la cantidad de niños: " << endl;
	cin >> m;
	cout << "Ingrese la cantidad de niñas: " << endl;
	cin >> f;
	if (f>0) {
		pf = (f/100)*100;
		cout << "El porcentaje de niñas es de: " << pf << "%" << endl;
		cout << "======================================" << endl;
		if (m>0) {
			pm = (m/100)*100;
			cout << "El porcentaje de niños es de: " << pm << "%" << endl;
			cout << "======================================" << endl;
		}
	} else {
	}
	totalninos = m+f;
	ptotal = pm+pf;
	cout << " El total de niñ@s es " << totalninos << " y en porcentaje son el " << ptotal << "%" << endl;
	cout << "======================================================================" << endl;
	return 0;
}

