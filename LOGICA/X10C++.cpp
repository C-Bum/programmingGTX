// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se ley� otra variable con >>.

int main() {
	string estado;
	// Algoritmo que nos diga si una persona puede acceder a cursar un ciclo 
	// formativo de grado superior o no. Para acceder a un grado superior, si se 
	// tiene un t�tulo de bachiller, en caso de no tenerlo, se puede acceder si 
	// hemos superado una prueba de acceso (admisi�n).
	cout << "Para acceder a nuestro ciclo de grado superior, debes de completar este  peque�o cuestionario" << endl;
	cout << "Responda con si o no." << endl;
	cout << "Eres bechiller?: " << endl;
	cin >> estado;
	if (estado=="si") {
		cout << "felicidades, puedes acceder a nuestro ciclo de estudio!" << endl;
	} else {
		cout << "Oh vaya! lo sentimos, sin embargo aun puedes entrar  en nuestro ciclos,  pero deberas realizar el examen de admision." << endl;
	}
	return 0;
}

