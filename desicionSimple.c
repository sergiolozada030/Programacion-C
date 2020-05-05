/*
 * Programa: Salario e impuesto, Desición Simple
 * Descripcion:Se calcula si un empleado debe o no pagar el impuesto
 * al estado teniendo en cuenta el salario
 * Autora:Eliana Hernández Ortiz
 * Fecha:21/04/20
 * Licencia: GNU GPL v3
 */
 
#include <stdio.h>
#include "uniquindio.c"

// Prototipos

float calcularDescuento (float salario);
float calcularValorPagar ( float factura, float descuento);

//Función principal
int main ()
{
	float  factura, valorTotal, descuento;
		
	factura = leerReal("Ingrese el valor de la factura:" );
	
	imprimirReal ("El valor de neto de la factura es:" , factura);
	descuento = calcularDescuento(factura);
	imprimirReal ("El valor del descuento es:" , descuento);
	valorTotal = calcularValorPagar( factura, descuento);
	imprimirReal ("El valor total a pagar es: " , valorTotal);
	
	return 0;
}
/* 
 * Funcion para determinar el descuento en la factura
 * param: factura
 * return: Descuento de 10% o 5%
 */
 
float calcularDescuento (float factura)
{
	float descuento = 0;
	
	if ( factura > 8000) 
	{
		descuento = factura * 0.10;
	}
	else
	{
		descuento= factura * 0.08;
	}
	
	return descuento;
}
/* 
 * Funcion para determinar el valor total a pagar aplicando el descuento
 * param : factura y descuento 
 * return: valor a pagar
 */
 float calcularValorPagar( float factura, float descuento)
{
	float valorTotal;
	valorTotal = factura - descuento;
	
	return valorTotal;
}
	
	
	
	
