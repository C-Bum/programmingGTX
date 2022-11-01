Algoritmo ejercicio6
	//Un colegio desea saber qué porcentaje de niños y qué porcentaje de niñas 
	//hay en el curso actual. Diseñar un algoritmo para este propósito
	
	
	definir f, m , total como entero 
	f = 0 
	m = 0 
	total = 0
	
	escribir "Ingrese la cantidad de niños: "
	leer m
	escribir "Ingrese la cantidad de niñas: "
	leer f
	
	si f>0 entonces 
		Pf = (f/100)*100
		escribir "El porcentaje de niñas es de: " Pf "%"
		escribir"======================================"
		si m>0 entonces 
			Pm = (m/100)*100
			escribir "El porcentaje de niños es de: " Pm "%"
			escribir"======================================"
		FinSi
	sino
		
	FinSi
	totalNiños = m + f
	Ptotal = Pm + Pf 
	escribir " El total de niñ@s es " totalNiños " y en porcentaje son el " Ptotal "%" 
	escribir"======================================================================"
	
	
	
FinAlgoritmo
