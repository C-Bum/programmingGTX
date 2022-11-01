Algoritmo Octaedro
	definir  A, x, V Como Real
	//Entrada de datos
	Escribir " Introduzca la longitud de unos de los lados del octaedro: "
	leer x
	//precesamiento
	//Area
	si x > 0 entonces
		A = 2 * rc(3) * x^2
		//volumen 
		v = 0.47 * x^3
		//salida de datos 
		escribir " El area del hexaedro es de: " trunc(A) "  m²  "
		escribir " El volumen del hexaedro es de: " trunc(v) "  m³  "
	SiNo
		escribir "Valores ingresados son invalidos"
	finsi
FinAlgoritmo
