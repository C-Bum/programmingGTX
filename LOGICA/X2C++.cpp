#include<iostream>
using namespace std;

// Algoritmo que lea dos números y nos diga cuál de ellos es mayor o bien si son iguales.
int main() {
	float num1;
	float num2;
	 
	num1 = 0;
	num2 = 0;
	cout << "Ingrese el primer digito: " << endl;
	cin >> num1;
	cout << "Ingrese el segundo digito: " << endl;
	cin >> num2;
	if (num1==num2) {
		cout << "Ambos numeros son iguales" << endl;
	} else {
		if (num1>num2) {
			cout << "El numero mayor es: " << num1 << endl;
		} else {
			cout << "El numero mayor es: " << num2 << endl;
		}
	}
	return 0;
}
