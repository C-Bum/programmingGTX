Algoritmo QuienEsMayor2x
	//Algoritmo que lea tres números distintos y nos diga cuál de ellos es el
	//mayor.
	Definir num1, num2, num3 Como Real
	
	num1 = 0
	num2 = 0
	num3 = 0
	
	escribir "ingrese el primer digito: "
	Leer num1
	escribir "ingrese el segundo digito: "
	leer num2
	escribir "ingrese el tercer digito: "
	leer num3
	
	si num1 = num2 y num2 = num3 entonces 
		escribir " Los 3 numeros son iguales"
	SiNo
		si num1 > num2 y num1 > num3 entonces 
			escribir "El " num1 " es el mayor de los tres numeros"
		sino 
			si num2 > num3 entonces 
				escribir "El " num2 " es el mayor de los tres numeros"
			sino 
				escribir "El " num3 " es el mayor de los tres numeros"
			FinSi
		FinSi
	FinSi
	
FinAlgoritmo
