#include <stdio.h>
float numero;
main()
{
	
		printf("ingrese numero ");
		scanf("%f", & numero);
		if(numero>0)
		{
		printf("Tranca el numero es positivo. ");
		}
		else if(numero<0)
		{
		printf("EL NUMERO ES NEGATIVO");
		}
		else
		{
		printf("EL NUMERO ES CERO");
		}
	
}
