Algoritmo Act3SumaCorregida
	Escribir 'Ingrese la parte real del primer n�mero complejo'
	Leer R1
	Escribir 'Ingrese la parte imaginaria del primer n�mero complejo'
	Leer I1
	Escribir 'Ingrese la parte real del segundo n�mero complejo'
	Leer R2
	Escribir 'Ingrese la parte imaginaria del segundo n�mero complejo'
	Leer I2
	Escribir '�En qu� formato desea observar la suma? Ingrese 1 para rectangular o 0 para polar.'
	Leer Valor
	R <- R1+R2
	I <- I1+I2
	Modulo <- raiz((R*R)+(I*I))
	Si R=0 Entonces
		Si I=0 Entonces
			Escribir 'El �ngulo no existe'
		SiNo
			Si I<0 Entonces
				AngA <- 270
			SiNo
				AngA <- 0
			FinSi
		FinSi
		Si I>0 Entonces
			AngA <- 90
		FinSi
	SiNo
		Si I=0 Entonces
			Si R<0 Entonces
				Escribir 'El �ngulo es 180 grados'
			SiNo
				Escribir 'El �ngulo es 0'
			FinSi
		SiNo
			AngA <- (Atan(I/R))*(180/PI)
			Si R>0 Entonces
				Si I>0 Entonces
					Escribir 'El �ngulo del n�mero complejo es: ', AngA
				SiNo
					AngB <- AngA+360
					Escribir 'El �ngulo del n�mero complejo es: ', AngB
				FinSi
			SiNo
				Si I>0 Entonces
					AngC <- AngA+180
					Escribir 'El �ngulo del n�mero complejo es: ', AngC
				SiNo
					AngD <- AngA+180
					Escribir 'El �ngulo del n�mero complejo es: ', AngD
				FinSi
			FinSi
		FinSi
	FinSi
	Escribir 'El m�dulo de su n�mero complejo es ', Modulo
FinAlgoritmo
