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
	float resultn;
	float resultp;
	float x;
	// Calculo para un f{x}
	cout << "Ingrese la variable x: " << endl;
	cin >> x;
	if (x>=0) {
		resultp = ((pow((x-2),2))/2)+((pow((x-4),4))/4)+((pow((x-6),6))/6);
		cout << "El resultado del problema cuando x vale " << x << " es: " << resultp << endl;
	} else {
		resultn = ((pow((x+2),2))/2)+((pow((x+4),4))/4)+((pow((x+6),6))/6);
		cout << "El resultado del problema cuando x vale " << x << " es: " << resultn << endl;
	}
	return 0;
}

