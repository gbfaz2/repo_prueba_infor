/**
* @file centroide_inco.c
* @brief Programa incompleto en C que calcula el centroide de una nube de puntos 2D
* @author pss
* @date 03/02/2025
* @last modified 09/02/2026
**/

#include <stdio.h>

#define MAX_PUNTOS_EN_NUBE 3

typedef struct {
	double x;
	double y;
} punto_t;

void print_punto(punto_t p) {
	printf("(%.2f, %.2f)\n", p.x, p.y);
}

/**
* @brief Calcula el centroide de un array de puntos.
* @param lp Array de puntos
* @param nPuntos N�mero de puntos en el array
* @return El centroide de los puntos como un punto_t
* @details
*  - Si el array es NULL o el n�mero de puntos es menor o igual a 0, 
*    se devuelve un punto con coordenadas (0.0, 0.0).
*/
punto_t centroide(const punto_t lp[], int nPuntos) {
	/****/
}

/****************************
*
* TESTS UNITARIOS
* 
*****************************/

int main(void) {
	punto_t nube_puntos[MAX_PUNTOS_EN_NUBE];
	int i = 0;

	/* Inicializaci�n de la nube de puntos */
	

	/* Mostrar puntos */
	
	
	puts("************");

	/* Calcular y mostrar centroide */
	

	return 0;
}

