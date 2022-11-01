Algoritmo Cono
	definir g, h, Al, At, v, r  Como Real
	//Datos de entrada
	escribir " ingrese el radio del cono: "
	leer r
	escribir " ingrese la altura del cono: "
	leer h
	si r > 0 y h > 0 entonces
		//procesamiento de datos
		//Area Lateral
		g = rc(h^2 + r^2)
		Al = pi * r * g
		//Area Total
		At = Al + (pi * (r^2))
		//Volumen
		v = (pi * h *(r^2)) /3
		//Salida de datos
		escribir "------------------------------------------------"
		escribir " El area lateral del cono es de: " trunc(Al) "  m² "
		escribir "------------------------------------------------"
		escribir " El area total del cono es de: " trunc(At) "  m² "
		escribir "------------------------------------------------"
		escribir " El volumen del cono es de: " trunc(v) "  m³  "
		escribir "------------------------------------------------"
	sino 
		escribir "los valores ingresados son incorrectos!!"
	finsi
FinAlgoritmo
