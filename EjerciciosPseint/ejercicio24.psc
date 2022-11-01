Algoritmo ejercicio24
	//Algoritmo que nos calcule las raíces de una ecuación de segundo grado. 
	//Controlar el caso de que las soluciones sean imaginarias
    definir  a, b, c, raizcua, x1, x2 como real
	
	Escribir  "escibe el valor de a: "
	Leer  a
	
	Escribir  "escibe el valor de b: "
	Leer  b
	
	Escribir  "escibe el valor de c: "
	Leer  c
	
	neg<__b

	
	Si  raizcua<=0 Entonces
		
		Escribir  "La ecuacion no se puede resolver"
		
	Sino
		x1=(neg+raizcua)/(2*a)
		x2=(neg-raizcua)/(2*a)
		Escribir "la respuesta 1 es: " x1 
		Escribir "la respuesta 1 es: " x2 
		
	FinSi
	
FinAlgoritmo
