Algoritmo ejercicio6
	//Un colegio desea saber qu� porcentaje de ni�os y qu� porcentaje de ni�as 
	//hay en el curso actual. Dise�ar un algoritmo para este prop�sito
	
	
	definir f, m , total como entero 
	f = 0 
	m = 0 
	total = 0
	
	escribir "Ingrese la cantidad de ni�os: "
	leer m
	escribir "Ingrese la cantidad de ni�as: "
	leer f
	
	si f>0 entonces 
		Pf = (f/100)*100
		escribir "El porcentaje de ni�as es de: " Pf "%"
		escribir"======================================"
		si m>0 entonces 
			Pm = (m/100)*100
			escribir "El porcentaje de ni�os es de: " Pm "%"
			escribir"======================================"
		FinSi
	sino
		
	FinSi
	totalNi�os = m + f
	Ptotal = Pm + Pf 
	escribir " El total de ni�@s es " totalNi�os " y en porcentaje son el " Ptotal "%" 
	escribir"======================================================================"
	
	
	
FinAlgoritmo
