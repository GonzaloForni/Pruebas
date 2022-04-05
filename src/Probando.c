/*============================================================================

 ============================================================================*/
#include <stdio.h>
#include <stdlib.h>

int PedirRetornarEntero();

int main(void) {
	setbuf(stdout,NULL);

	int entero;

	entero= PedirRetornarEntero();
	printf("El entero ingresado fue: %d", entero);

	return 0;
}

int PedirRetornarEntero() {

	int enteroIngresado;

	printf("Ingrese un numero entero entre 0 y 100: ");
	fflush(stdin);
	scanf("%d", &enteroIngresado);
	while (enteroIngresado < 0 || enteroIngresado > 100) {
		printf("Error!! Reingrese un numero entero entre 0 y 100: ");
		fflush(stdin);
		scanf("%d", &enteroIngresado);
	}

	return enteroIngresado;
}
