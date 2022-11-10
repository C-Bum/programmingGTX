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
	float cantidadcobrar;
	float descuento;
	string mes;
	float monto;
	// Una tienda ofrece un descuento del 15% sobre el total de la compra durante 
	// el mes de febrero. Dado un mes y un importe (monto), calcular cuál es la 
	// cantidad que se debe cobrar al cliente.
	mes = " ";
	monto = 0;
	descuento = 0;
	cantidadcobrar = 0;
	cout << "Ingrese su importe: " << endl;
	cin >> monto;
	cout << "El mes de la compra es?: " << endl;
	cin >> mes;
	if (mes=="febrero") {
		descuento = monto*0.15;
		cantidadcobrar = monto-descuento;
		cout << "===================================" << endl;
		cout << "Su Importe es de " << cantidadcobrar << " cordobas " << endl;
		cout << "===================================" << endl;
	} else {
		cout << "===================================" << endl;
		cout << "Su Importe es de " << monto << " cordobas " << endl;
		cout << "===================================" << endl;
	}
	return 0;
}

