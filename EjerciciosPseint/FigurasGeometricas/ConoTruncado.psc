Algoritmo ConoTruncado
	definir g, h, Al, At, v, rme, Rma, Ab1,Ab2 Como Real
	//Datos de entrada
	escribir " ingrese el radio mayor del cono truncado: "
	leer Rma
	escribir " ingrese el radio menor del cono truncado: "
	leer rme
	escribir " ingrese la altura del cono truncado: "
	leer h
	si Rma > 0 y rme > 0 y h > 0 entonces
		//procesamiento de datos
		//Area Lateral
		g = rc(h^2 + (Rma-rme)^2)
		Al = pi * g *(Rma+rme)
		//Area Total
		Ab1 = pi * Rma^2
		Ab2 = pi * rme^2
		At = Al + Ab1 + Ab2
		//Volumen
		v = (pi * h *((Rma^2 + rme^2) + (Rma*rme)))/3
		//Salida de datos
		escribir "------------------------------------------------"
		escribir " El area lateral del cono truncado es de: " trunc(Al) "  m² "
		escribir "------------------------------------------------"
		escribir " El area total del cono es truncado de: " trunc(At) "  m² "
		escribir "------------------------------------------------"
		escribir " El volumen del cono truncado es de: " trunc(v) "  m³  "
		escribir "------------------------------------------------"
	sino
		escribir "Los valores ingresados son incorrectos!!"
	finsi
FinAlgoritmo
