Algoritmo Act5Impedanciaasociados
	Escribir 'Ingrese el módulo de la tensión'
	Leer ModuloT
	Escribir 'Ingrese el ángulo de la tensión en grados'
	Leer AnguloT
	Escribir 'Ingrese el módulo de la corriente'
	Leer ModuloI
	Escribir 'Ingrese el ángulo de la corriente en grados'
	Leer AnguloI
	Escribir 'Ingrese la frecuencia de trabajo'
	Leer F
	Zm <- (ModuloT)/(ModuloI)
	Za <- (AnguloT)-(AnguloI)
	Zrad <- (Za*PI)/180
	ImpR <- Cos(Zrad)*Zm
	ImpI <- Sen(Zrad)*Zm
	Omega <- 2*PI*F
	Escribir 'El valor de la impedancia expresada en forma rectangular es: ', ImpR, ' + ', ImpI, 'j'
	Si ImpI>=0 Entonces
		L <- ImpI/Omega
		Escribir 'RESULTADOS'
		Escribir 'Resistencia= ', ImpR, ' ohm'
		Escribir 'Componente reactivo obtenido: Inductor'
		Escribir 'Inductancia= ', L, ' H'
	SiNo
		Si ImpI<0 Entonces
			C <- -1/(Omega*ImpI)
			Escribir 'RESULTADOS'
			Escribir 'Resistencia= ', ImpR, ' ohm'
			Escribir 'Componente reactivo obtenido= Capacitor'
			Escribir 'Capacitancia= ', C, ' F'
		SiNo
			Escribir 'RESULTADOS'
			Escribir 'Resistencia= ', ImpR, ' ohm'
			Escribir 'Componente reactivo obtenido= Ninguno.'
		FinSi
	FinSi
FinAlgoritmo
