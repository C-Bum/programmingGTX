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
	string nombre;
	float notapbma;
	float notapr;
	float notat;
	float porcentajenotapbma;
	float porcentajenotapr;
	float porcentajenotat;
	bool salir;
	float totalnota;
	// Calcular las calificaciones de un grupo de alumnos. La nota final de cada 
	// alumno se calcula seg�n el siguiente criterio: la parte pr�ctica vale el 10%; 
	// (la parte de problemas vale el 50% y la parte te�rica el 40%. El algoritmo 
	// leer� el nombre del alumno, las tres notas, escribir� el resultado y volver� a 
	// pedir los datos del siguiente alumno hasta que el nombre sea una cadena 
	// vac�a. Las notas deben estar entre 0 y 10, si no lo est�n, no imprimir� las 
	// notas, mostrar� un mensaje de error y volver� a pedir otro alumno.
	salir = false;
	do {
		cout << "Nombre del alumno:" << endl;
		cin >> nombre;
		if (nombre=="") {
			salir = true;
		} else {
			cout << "Cual es su Nota segun la  pr�ctica: " << endl;
			do {
				cin >> notapr;
				if (notapr<0 || notapr>10) {
					cout << "Error" << endl;
				}
			} while (!(notapr>=0 && notapr<=10));
			cout << "Cual es su Nota segun los problemas: " << endl;
			do {
				cin >> notapbma;
				if (notapbma<0 || notapbma>10) {
					cout << "Error" << endl;
				}
			} while (!(notapbma>=0 && notapbma<=10));
			cout << "Cual es su nota segun la  te�ria: " << endl;
			do {
				cin >> notat;
				if (notat<0 || notat>10) {
					cout << "Error" << endl;
				}
			} while (!(notat>=0 && notat<=10));
			porcentajenotapr = notapr*0.10;
			porcentajenotapbma = notapbma*0.50;
			porcentajenotat = notat*0.40;
			totalnota = porcentajenotapr+porcentajenotapbma+porcentajenotat;
		}
		cout << " su nota por practica es del: " << porcentajenotapr << "%" << endl;
		cout << " su nota por resolucion de problema es del: " << porcentajenotapbma << "%" << endl;
		cout << " su nota por teoria es del: " << porcentajenotat << "%" << endl;
		cout << "La nota final es del: " << totalnota << "%" << endl;
	} while (salir!=true);
	return 0;
}

