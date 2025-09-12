Algoritmo Act4Impedancia
	Escribir 'Ingrese la parte real de la impedancia'
	Leer R
	Escribir 'Ingrese la parte imaginaria de la impedancia'
	Leer I
	Escribir 'Ingrese la frecuencia del trabajo'
	Leer F
	Trabajo <- 2*PI*F
	Si I>=0 Entonces
		L <- I/Trabajo
		Escribir 'RESULTADO'
		Escribir 'Resistencia: ', R, ' ohm'
		Escribir 'Componente reactivo obtenido: Inductor'
		Escribir 'Inductancia (L): ', L, ' H'
	SiNo
		Si I<0 Entonces
			C <- -1/(Trabajo*I)
			Escribir 'RESULTADO'
			Escribir 'Resistencia: ', R, ' ohm'
			Escribir 'Componente reactivo obtenido: Capacitor'
			Escribir 'Capacitancia: ', C, ' F'
		SiNo
			Escribir 'RESULTADO'
			Escribir 'Resistencia: ', R, ' ohm'
			Escribir 'Componente reactivo obtenido: Ninguno.'
		FinSi
	FinSi
FinAlgoritmo
