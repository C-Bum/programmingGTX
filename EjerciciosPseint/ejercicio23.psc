Algoritmo ejercicio23
	//El siguiente es el menú de un restaurante de bocadillos. Diseñar un 
	//algoritmo capaz de leer el número de unidades consumidas de cada 
	//alimento ordenado y calcular la cuenta total. Vamos a suponer que estos 
	//precios son fijos, es decir, que son.
	
	

	definir total, cantJamon, cantFreso, cantCerveza como real
	JAMON=1.5
	REFRESCO=1.05
	CERVEZA=0.75
	total=0
	Escribir  "Introduce la cantidad de bocadillos de jamon"
	Leer  cantJamon
    Escribir  "Introduce la cantidad de refresco"
	Leer  cantFreso
	Escribir  "Introduce la cantidad de cerveza"
	Leer  cantCerveza
	total = (cantJamon*JAMON) + (cantFreso*REFRESCO) + (cantCerveza*CERVEZA)
	Escribir"El total a pagar es de " total " usd "
	
	
FinAlgoritmo
