#include <stdio.h>
#define iva 0.21
float prec_prod, iva_prod;
	main()
	{
	printf("ingrese precio de producto");
	scanf("%f", & prec_prod);
	iva_prod = prec_prod * 0.21;
    printf("el iva es %f", iva_prod);	
	
	}
