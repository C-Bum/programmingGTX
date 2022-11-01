Algoritmo hexaedro
	definir  A, D, x, V Como Real
	//Entrada de datos
	Escribir " Introduzca un lado del hexaedro: "
	leer x
	//precesamiento
	//Diagonal
	si x > 0 entonces
		D = x*rc(3)
		//Area
		Area = 6*x^2
		//volumen 
		v = x^3
		//salida de datos 
		escribir " La diagonal del hexaedro es de: " trunc(D) " m  "
		escribir " El area del hexaedro es de: " trunc(Area) "  m²  "
		escribir " El volumen del hexaedro es de: " trunc(v) "  m³  "
	sino 
		escribir "valores ingresados incorrectos."
	finsi
FinAlgoritmo
