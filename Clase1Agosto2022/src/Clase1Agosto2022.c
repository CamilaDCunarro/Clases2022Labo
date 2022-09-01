/*
 Ejercicio 1-3: ingresar 3 números y mostrar el número del medio, sólo si existe.
  En caso de que no exista también informarlo.
Ejemplo:
1   5   3     el 3 es del medio
5   1   5    no hay numero del medio
3   5   1     el 3 es del medio
3   1   5    el 3 es del medio
5   3   1    el 3 es del medio

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout, NULL);

	int num1;
	int num2;
	int num3;

	int numeroDelMedio;

	printf("Ingrese Numero 1\n");
	scanf("%d", &num1);

	printf("Ingrese Numero 2\n");
	scanf("%d", &num2);

	printf("Ingrese Numero 3\n");
	scanf("%d", &num3);

	if ((num1 = num2) || (num1 = num3)) {

		printf("No hay numero del medio ");

	} else {

		if ((num1 > num2 && num1 < num3) || (num1 < num2 && num1 > num3)) {
			numeroDelMedio = num1;

		} else if ((num2 > num1 && num2 < num3)
				|| (num2 < num1 && num2 > num3)) {

			numeroDelMedio = num2;

		} else {
			numeroDelMedio = num3;

		}

		printf("El numero del medio es: %d", numeroDelMedio);

	}

	return EXIT_SUCCESS;
}
