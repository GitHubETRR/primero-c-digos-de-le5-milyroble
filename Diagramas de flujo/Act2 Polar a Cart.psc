Algoritmo Act2PolarACart
	Escribir 'Ingrese el m�dulo de su n�mero complejo'
	Leer Modulo
	Escribir 'Ingrese el �ngulo (fase) positivo y en grados'
	Leer Angulo
	Rad <- (Angulo*PI)/180
	E1 <- Modulo*SEN(Rad)
	E2 <- Modulo*COS(Rad)
	Escribir 'La forma rectangular es: ', E2, ' + j', E1
FinAlgoritmo
