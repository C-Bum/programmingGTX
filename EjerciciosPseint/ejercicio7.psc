Algoritmo ejercicio7
	//Una tienda ofrece un descuento del 15% sobre el total de la compra durante 
	//el mes de febrero. Dado un mes y un importe (monto), calcular cuál es la 
	//cantidad que se debe cobrar al cliente.
	
	definir mes como caracter 
	definir monto, descuento, cantidadCobrar como real
	mes = " " 
	monto = 0
	descuento = 0
	cantidadCobrar = 0
	
	escribir "Ingrese su importe: "
	leer monto 
	escribir "El mes de la compra es?: "
	leer mes
	
	si  mes = "febrero" Entonces
		descuento = monto*0.15 
		cantidadCobrar = monto - descuento
		escribir "==================================="
		escribir "Su Importe es de " cantidadCobrar " cordobas "
		escribir "==================================="
	sino
		escribir "==================================="
		escribir "Su Importe es de " monto " cordobas "
		escribir "==================================="
	FinSi
	
	
	
	
	
	
	
	
FinAlgoritmo



