#include <stdio.h>
#define mes_act 4
#define anio_act 2024
#define dia_act 29
int anio_nac, mes_nac, dia_nac, edad;
main() {
	printf("Ingrese su dia de nacimiento: ");
	scanf("%d", & dia_nac);
	printf("Ingrese su mes de nacimiento: ");
	scanf("%d", & mes_nac);
	printf("Ingrese su anio de nacimiento: ");
	scanf("%d", & anio_nac);

	    if (anio_nac <= anio_act) {
        edad = anio_act - anio_nac;

        if (mes_nac > mes_act) {
            edad = edad - 1;
        } else if (mes_nac == mes_act) {
            if (dia_nac > dia_act) {
                edad = edad - 1;
            }
        }

        printf("Tu edad es: %d anios.\n", edad);
    } else {
        printf("EL ANIO DE NACIMIENTO NO PUEDE SER MAYOR AL ACTUAL");
    }
		
		
}
		
	




