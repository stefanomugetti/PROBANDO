#include <stdio.h>
#include <stdlib.h>
#include "cursada.h"
#include "operaciones.h"
#include "menu.h"

int main(void)
{
	setbuf(stdout,NULL);
	int num1;
	int num2;
	float resultadoOperacion;
	char operacionElegida;

if(utn_getNumero(&num1,"Ingrese el primer numero","Error, el numero debe ser entre 1 y 100",0,100,2) == 0
		&& utn_getNumero(&num2,"Ingrese el segundo numero","Error, el numero debe ser entre 1 y 100",0,100,2)==0)
{
	printf("Nro 1:%d\n Nro 2:%d\n",num1,num2);

	utn_getMenu(&operacionElegida,"Elija una opcion:\n a)Suma\n b)Resta\n c)Multiplicacion\n d)Division\n e)Factorial"
	,"Error, ingrese una opcion valida.",'a','e',2);
		switch(operacionElegida)
		{
			case'a':
				if(utn_getSuma(&num1,&num2,&resultadoOperacion)==0)
				{
					printf("El resultado es: %f",resultadoOperacion);
				}
			break;
			case'b':
				if(utn_getResta(&num1,&num2,&resultadoOperacion)==0)
				{
					printf("El resultado es: %f",resultadoOperacion);
				}
			break;
			case'c':
				if(utn_getMultiplicacion(&num1,&num2,&resultadoOperacion)==0)
				{
					printf("El resultado es: %f",resultadoOperacion);
				}
			break;
			case'd':
				if(utn_getDivision(&num1,&num2,&resultadoOperacion)==0)
				{
					printf("El resultado es: %f",resultadoOperacion);
				}
			break;
			case'e':
				if(utn_getFactorial(&num1,&resultadoOperacion)==0)
				{
					printf("El factorial del Nro 1: %f\n",resultadoOperacion);
				}
				if(utn_getFactorial(&num2,&resultadoOperacion)==0)
				{
					printf("El factorial del Nro 2: %f\n",resultadoOperacion);
				}
			break;
		}
	}
	return EXIT_SUCCESS;
}


