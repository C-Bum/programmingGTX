#include<iostream>
// Algoritmo que lea tres números distintos y nos diga cuál de ellos es el
	// mayor.
using namespace std;
int main() {
	float num1;
	float num2;
	float num3;
	
	num1 = 0;
	num2 = 0;
	num3 = 0;
	cout << "ingrese el primer digito: " << endl;
	cin >> num1;
	cout << "ingrese el segundo digito: " << endl;
	cin >> num2;
	cout << "ingrese el tercer digito: " << endl;
	cin >> num3;
	if (num1==num2 && num2==num3) {
		cout << " Los 3 numeros son iguales" << endl;
	} else {
		if (num1>num2 && num1>num3) {
			cout << "El " << num1 << " es el mayor de los tres numeros" << endl;
		} else {
			if (num2>num3) {
				cout << "El " << num2 << " es el mayor de los tres numeros" << endl;
			} else {
				cout << "El " << num3 << " es el mayor de los tres numeros" << endl;
			}
		}
	}
	return 0;
}

