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
	float a;
	float b;
	float c;
	float disc;
	float pimag;
	float preal;
	float r;
	float r1;
	float r2;
	float raizcua;
	float x1;
	float x2;
	// Algoritmo que nos calcule las raíces de una ecuación de segundo grado. 
	// Controlar el caso de que las soluciones sean imaginarias
	cout << "Ingrese la variable A:" << endl;
	cin >> a;
	cout << "Ingrese la variable B:" << endl;
	cin >> b;
	cout << "Ingrese la variable C:" << endl;
	cin >> c;
	// determinar si son reales o imaginarias
	disc = pow(b,2)-4*a*c;
	if (disc<0) {
		// si son imaginarias
		preal = (-b)/(2*a);
		pimag = sqrtf(-disc)/(2*a);
		cout << "Raiz 1: " << preal << "+" << pimag << "i" << endl;
		cout << "Raiz 2: " << preal << "-" << pimag << "i" << endl;
	} else {
		// ver si son iguales o distintas
		if (disc==0) {
			r = (-b)/(2*a);
			cout << "Raiz 1 = Raiz 2: " << r << endl;
		} else {
			r1 = ((-b)+sqrtf(disc))/(2*a);
			r2 = ((-b)-sqrtf(disc))/(2*a);
			cout << "Raiz 1: " << r1 << endl;
			cout << "Raiz 2: " << r2 << endl;
		}
	}
	return 0;
}

