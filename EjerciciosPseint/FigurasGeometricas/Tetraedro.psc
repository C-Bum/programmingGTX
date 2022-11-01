Algoritmo Tetraedro
	definir  At, x, V, Al Como Real
	//Entrada de datos
	Escribir " Introduzca la longitud de unos de los lados del dodecaedro: "
	leer x
	//precesamiento
	//Area lateral
	si x > 0 entonces
		Al= 3 * 0.43 * x^2
		//Area total
		At = rc(3) * x^2
		//volumen 
		v = 0.12 * x^3
		//salida de datos 
		escribir "================================================"
		escribir " El area lateral del dodecaedro es de: " trunc(Al) "  m²  "
		escribir "================================================"
		escribir " El area total del dodecaedro es de: " trunc(At) "  m²  "
		escribir "================================================"
		escribir " El volumen  del dodecaedro es de: " trunc(V) " m³  " 
		escribir "================================================"
	SiNo
		escribir " Los valores que Ud ha ingresado son incorrectos!! "
	finsi
FinAlgoritmo
