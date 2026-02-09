/**
 * @file centroide_sin_estado.cpp
 * @brief programación orientada a objetos para el cálculo del centroide (promedio
 *        de las coordenadas en 2D)
 *        Aquí la clase es una mera herramienta. No guarda datos.  
 * @author Gabriela Fernández Álvarez
 * @date 03/02/2025
 */

#include <cstdio> // Para printf
#include <vector> // (Aunque en esta versión sin estado no la usamos dentro de la clase)

#define MAX_PUNTOS_EN_NUBE 3

// Estructura de datos simple (La materia prima)
struct punto_t {
    double x = 0.0;
    double y = 0.0;
};

// Función auxiliar global (fuera de la clase)
void imprime_punto(punto_t p) {
    printf("(%.2f, %.2f)\n", p.x, p.y);
}

// --------------------------------------------------------------------------
// CLASE CALCULADOR (SIN ESTADO / STATELESS)
// --------------------------------------------------------------------------
class calculador_centroide { 
    
    // 🚫 ZONA PROHIBIDA PARA STATELESS 🚫
    // std::vector<punto_t> nube_puntos; 
    // He comentado esto porque si guardamos el vector aquí, la clase tendría MEMORIA
    // y dejaría de ser "sin estado". Aquí no guardamos nada, solo procesamos.
    // vamos que entonces sería estructurada?
    
public:
    /**
     * @brief Calcula el centroide.
     * @note Fíjate que recibe los datos (lp) por parámetros.
     * No usa nada guardado internamente porque está vacía.
     */
    punto_t calcula_centroide(const punto_t lp[], int nPuntos){
        punto_t pres = {0.0, 0.0}; // Variable local temporal
        double medx = 0.0, medy = 0.0;

        // Bucle de toda la vida para sumar
        for (int i = 0; i < nPuntos; i++) {
            medx += lp[i].x;
            medy += lp[i].y;
        }

        // Hacemos la media
        if (nPuntos > 0) {
            pres.x = medx / nPuntos;
            pres.y = medy / nPuntos;
        }
        
        return pres; // Devolvemos el resultado y la clase se queda limpia de nuevo
    }
    
    // Método wrapper (envoltorio) para imprimir
    void print(punto_t p) {
        imprime_punto(p);
    }
};


/****************************
* TESTS UNITARIOS (MAIN)
*****************************/
int main(void) {

    /* 1. CREACIÓN DE DATOS (En el main, no en la clase) */
    // Como la clase no tiene memoria, los datos tienen que vivir aquí fuera.
    punto_t lp[MAX_PUNTOS_EN_NUBE];
    
    // Rellenamos el array con un bucle
    for (int i = 0; i < MAX_PUNTOS_EN_NUBE; i++) {
        // Hacemos un casting a double para que no se queje
        lp[i].x = (double)i; 
        lp[i].y = (double)i;
    }

    /* 2. CREAMOS EL OBJETO HERRAMIENTA */
    calculador_centroide cent; // Es una herramienta vacía
        
    puts("--- Lista de puntos ---");
    /* Mostramos los puntos */
    for (int i = 0; i < MAX_PUNTOS_EN_NUBE; i++) {
        printf("Punto %d: ", i);
        cent.print(lp[i]); // Usamos la herramienta para imprimir
    }

    puts("\n************ CALCULANDO ************");
    
    /* 3. MOMENTO DE LA VERDAD */
    // Llamamos a la función y le pasamos los datos (lp) en ese mismo instante.
    punto_t resultado = cent.calcula_centroide(lp, MAX_PUNTOS_EN_NUBE);
    
    printf("El Centroide es: ");
    cent.print(resultado);

    return 0;
}