/*
 * Programa: Compa��a Alquiler , Desici�n Anidada
 * Descripcion:Se calcula el valor total que debe pagar una persona,
 * teniendo en cuenta los kilometros que recorrio en el vehiculo
 * Fecha:21/04/20
 * Licencia: GNU GPL v3
 */
 
#include <stdio.h>
#include "uniquindio.c"
#define MONTO_FIJO 300000
#define IVA 0.20


// Prototipos

float calcularValorPago (float kilometro, float montoPago);
float calcularValorIva (float montoPago);

//Funci�n principal
int main ()
{
	float kilometro, montoPago, montoIva;
	
	clrscr ( );
	
	kilometro = leerReal ("Ingrese la cantidad de kilometros recorridos:");
	
	montoPago = calcularValorPago ( kilometro,  montoPago);
	imprimirReal ("El monto a pagar por el alquiler del vehiculo es:", montoPago);
	
	montoIva = calcularValorIva (montoPago);
	imprimirReal ("El monto incluido de impuesto es:", montoIva);
	
	return 0;
}

/*
 * Procedimiento para calcular el monto a pagar
 * param: kilometro, montoPagar
 * return montoPagar
 */
float calcularValorPago ( float kilometro, float montoPago )
{
	
	if  (kilometro <= 300) 
	{
		montoPago = MONTO_FIJO;
	}
	else
	{
		if ( kilometro <= 1000)
		{
			montoPago = MONTO_FIJO + 1500 * (kilometro-300);
		}
		else 
		{
			montoPago = MONTO_FIJO + 1500 * 700 + 1000 * ( kilometro -300);
		}
	}
	return montoPago;
}
/*
 * Procedimiento para calcular el iva
 * param : montoPago, IVA
 * return: montoIva
 */
 
 float calcularValorIva (float montoPago)
{
	float montoIva;
    montoIva= IVA*montoPago;
    return montoPago;
}

