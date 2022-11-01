Algoritmo Ortoedro
	definir  a, b, c, D, Area, V Como Real
	//Entrada de datos
	Escribir " Introduzcala arista a: "
	leer a
	Escribir " Introduzcala arista b: "
	leer b
	Escribir " Introduzcala arista c: "
	leer c
	//precesamiento
	//Diagonal
	si a > 0 y b > 0 y c > 0 entonces
		D = rc(a^2 + b^2 + c^2)
		//Area
		Area = 2*(a*b + a*c + b*c)
		//volumen 
		v = a* b * c
		//salida de datos 
		escribir " La diagonal del ortoedro es de: " trunc(D) " m  "
		escribir " El area del ortoedro es de: " trunc(Area) "  m²  "
		escribir " El volumen del ortoedro es de: " trunc(v) "  m³  "
	SiNo
		escribir "Los valores ingresados son incorrectos"
	finsi
FinAlgoritmo
