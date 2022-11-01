Algoritmo PiramideTruncada
	definir  h, Al, At, v, Bma, bme, ap, Ab1, Ab2, n Como Real
	n = 4 //Lados de las bases dela piramide 
	//Datos de entrada
	escribir " ingrese la base mayor del cono truncado: "
	leer Bma
	escribir " ingrese la base menor del cono truncado: "
	leer bme
	escribir " ingrese la altura de la piramide truncada: "
	leer h
	escribir " ingrese el apotema de la piramide truncada: "
	leer ap
	//procesamiento de datos
	//Area Lateral
	si Bma > 0 y bme > 0 y h > 0 y ap > 0 entonces
		Al = 2*(Bma+bme)*ap
		//Area Total
		Ab1 = Bma * Bma
		Ab2 = bme * bme 
		At = Al + Ab1 + Ab2
		//Volumen
		v = 1/3* h *( Ab1 + Ab2 +rc(Ab1 * Ab2))
		//Salida de datos
		escribir "------------------------------------------------"
		escribir " El area lateral de la piramide truncada es de: " trunc(Al) "  m² "
		escribir "------------------------------------------------"
		escribir " El area total de la piramide truncada es de: " trunc(At) "  m² "
		escribir "------------------------------------------------"
		escribir " El volumen de la piramide truncada es de: " trunc(v) "  m³  "
		escribir "------------------------------------------------"
	SiNo
	escribir " Los valores que Ud ha ingresado son incorrectos!! "
finsi
FinAlgoritmo
