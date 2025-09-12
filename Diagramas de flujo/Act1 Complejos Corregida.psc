Algoritmo Intento2act1
	Escribir 'Ingrese la parte real de su número complejo'
	Leer R
	Escribir 'Ingrese la parte imaginaria de su número complejo'
	Leer I
	Modulo <- raiz((R*R)+(I*I))
	Escribir 'El módulo del número complejo es ', Modulo
	Si R=0 Entonces
		Si I>0 Entonces
			AngA <- 90
		SiNo
			Si I<0 Entonces
				AngA <- 270
			SiNo
				AngA <- 0
			FinSi
		FinSi
	SiNo
		AngA <- (Atan(I/R))*(180/PI)
		Si R<0 Entonces
			Si I>=0 Entonces
				AngA <- AngA+180
			SiNo
				AngA <- AngA-180
			FinSi
		FinSi
	FinSi
	Si AngA<0 Entonces
		AngA <- AngA+360
	FinSi
	Escribir 'El módulo de su número complejo es ', Modulo, ' y su ángulo es ', AngA
FinAlgoritmo
