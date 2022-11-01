Algoritmo Icosaedro
	definir  A, x, V Como Real
	//Entrada de datos
	Escribir " Introduzca la longitud de unos de los lados del icosaedro: "
	leer x
	//precesamiento
	//Area
	si x > 0 entonces
		A = 8.65 * x^2
		//volumen 
		v = 2.18 * x^3
		//salida de datos 
		escribir "================================================"
		escribir " El area del icosaedro es de: " trunc(A) "  m²  "
		escribir "================================================"
		escribir " El volumen del icosaedro es de: " trunc(v) "  m³  "
	sino 
		escribir "El valor inggresado es incorrecto"
	finsi
FinAlgoritmo
