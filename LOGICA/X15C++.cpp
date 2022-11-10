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
	int intentos;
	string login;
	string password;
	int session;
	// Teniendo en cuenta que la clave es "tuani", escribir un algoritmo que nos 
	// pida una clave. Solo tenemos 3 intentos para acertar, si fallamos los 3 
	// intentos nos mostrará un mensaje indicándonos que hemos agotado esos 3 
	// intentos. Si acertamos la clave, saldremos directamente del programa
	session = 0;
	intentos = 0;
	cout << "Puedes usar el usuario estandar (admin)" << endl;
	while (intentos<3 && session==0) {
		cout << "Ingrese el usuario" << endl;
		cin >> login;
		cout << "Ingrese la contrasena" << endl;
		cin >> password;
		if (login=="admin") {
			if (password=="tuani") {
				cout << "**Bienvenido al Sistema**" << endl;
				session = session+1;
			} else {
				cout << "La contrasena es incorrecta" << endl;
				intentos = intentos+1;
				cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
			}
		} else {
			cout << "El usuario es incorrecto" << endl;
			intentos = intentos+1;
			cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
		}
	}
	if (intentos==3) {
		cout << "Lo siento, has sido bloqueado tras haber utilizado 3 intentos!!!!" << endl;
	}
	return 0;
}

