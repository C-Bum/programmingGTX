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
	int gasolina;
	int litros;
	float pago;
	// Diseñar un algoritmo que solicite la cantidad (en litros) de combustible a echar a un vehículo, y muestre el monto a pagar según la cantidad y el 
	// tipo de combustible solicitado, tomando como referencia la siguiente tabla
	cout << "===============Bienvenido a nuestra gasolinera===============" << endl;
	cout << "Que tipo de gasolina desea commprar: 1-Gasolina Regular, 2-Gasolina Super, 3-Diesel " << endl;
	cin >> gasolina;
	cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
	switch (gasolina) {
	case 1:
		cout << " Gasolina Regular = C$32.85 " << endl;
		break;
	case 2:
		cout << " Gasolina Super = C$33.48 " << endl;
		break;
	case 3:
		cout << " Diesel = C$28.45 " << endl;
		break;
	default:
		cout << " la Gasolina ingresada no se encuentra en este establecimiento " << endl;
	}
	cout << " cuantos litros de gasolina deseas echar: " << endl;
	cin >> litros;
	pago = litros*gasolina;
	if (gasolina==1) {
		pago = litros*32.85;
		cout << "El total a pagar es de: " << pago << " C$ " << endl;
	} else {
		if (gasolina==2) {
			pago = litros*33.48;
			cout << "El total a pagar es de: " << pago << " C$ " << endl;
		} else {
			if (gasolina==3) {
				pago = litros*28.45;
				cout << "El total a pagar es de: " << pago << " C$ " << endl;
			} else {
				cout << "los datos no coinciden" << endl;
			}
		}
	}
	return 0;
}

