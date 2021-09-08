/*
 ============================================================================
 Name        : array_clase05.c
 Author      : Juan Manuel
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	float arregloNumeros[5]; // es una buena practica indicar la cantidad de elementos que tiene ya que es un lugar especial en la memoria donde lo guarda

	for(int i=0; i < 5; i++)
	{
		arregloNumeros[i]=10.0;
	}
	for(int i=0; i < 5; i++)
		{
			printf("\n En la posicion i %d, se encuentra %.2f",i, arregloNumeros[i]);
		}

	return EXIT_SUCCESS;
}
