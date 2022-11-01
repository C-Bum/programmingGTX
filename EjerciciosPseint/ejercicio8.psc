Algoritmo ejercicio8
	//Realizar un algoritmo que, dado un número entero, visualice en pantalla si 
	//es par o impar. En el caso de ser 0, debe visualizar "el número no es par ni 
	//impar".
	
	definir num1 como entero
	num1 = 0
	
	escribir "Porfavor digite un numero entero: "
	leer num1
	
	si num1 mod 2=0 entonces 
		escribir "==================================="
		escribir "El numero " num1 " es un numero par"
		escribir "==================================="
	SiNo
		escribir "==================================="
		escribir "El numero " num1 " es un numero impar"
		escribir "==================================="
	FinSi
	
FinAlgoritmo
