Algoritmo Intento2act1
	Escribir 'Ingrese la parte real de su n�mero complejo'
	Leer R
	Escribir 'Ingrese la parte imaginaria de su n�mero complejo'
	Leer I
	Modulo <- raiz((R*R)+(I*I))
	Escribir 'El m�dulo del n�mero complejo es ', Modulo
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
	Escribir 'El m�dulo de su n�mero complejo es ', Modulo, ' y su �ngulo es ', AngA
FinAlgoritmo
