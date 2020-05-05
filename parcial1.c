/*
 * Programa: Salario e impuesto, Decisi�n Simple
 * Descripcion:Se calcula si un empleado debe o no pagar el impuesto
 * al estado teniendo en cuenta el salario
 * Fecha:21/04/20
 * Licencia: GNU GPL v3
 */

#include <stdio.h>
#include "uniquindio.c"

// Prototipos

float calcularImpuesto (float salario);
float calcularSueldo ( float salarioTotal, float impuesto);

//Función principal
int main ()
{
	float salario, salarioTotal, impuesto;
	
	clrscr     ( );
	
	salario = leerReal ("Ingrese su salario mensual:");
	
	impuesto = calcularImpuesto (salario);
	imprimirReal ("Su impuesto es:", impuesto);
	
	salarioTotal = calcularSueldo (salario,impuesto);
	imprimirReal ( "Su salario es:" , salarioTotal);

	return 0;
}
/* 
 * Funcion para determinar el impuesto del trabajador
 * param: salario
 * return: Valor del impuesto (4%)
 */
 
float calcularImpuesto (float salario)
{
	float impuesto;
	
	impuesto= 0.0;
	
	if ( salario > 2500000.00) 
	{
		impuesto = salario * 0.04;
		
	}
	return impuesto;
}
/* 
 * Funcion para determinar el salario total del empleado
 * param : salario y descuento 
 * return: salario total
 */
 float calcularSueldo ( float salario, float impuesto)
{
	 float salarioTotal;
	 salarioTotal= salario - impuesto;
	 return salarioTotal;
}
	
