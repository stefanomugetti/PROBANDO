#include <stdio.h>
#include <stdlib.h>
#include "cursada.h"


int main(void)
{
	setbuf(stdout,NULL);

	char charIngresado;

	if(utn_getChar(&charIngresado,"Ingrese una letra","flashaste",'A','Z',2)==0)
	{
		printf("%c",charIngresado);
	}
	return EXIT_SUCCESS;
}


