Algoritmo esfera
	Definir A, r,  v Como Real
	//Datos entrada 
	escribir " Escriba el radio de la esfera: " 
	leer r
	//Procesamiento 
	//area
	si r > 0 entonces 
		A = 4 * pi * r^2
		//volumen
		v = (4 * pi * r^3)/3
		//salida de datos
		escribir "------------------------------------"
		escribir " El area de la esfera es de: " trunc(A) " m²  "
		escribir "------------------------------------"
		escribir " El volumen de la esfera es de: " trunc(v) "  m² "
	SiNo
		escribir "El valor ingresado es incorrecto!!"
	finsi
FinAlgoritmo
