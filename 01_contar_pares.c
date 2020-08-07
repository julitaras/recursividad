#include <stdio.h>

/*

  Completar la función contar_pares de forma tal que devuelva la
  cantidad total de elementos pares del vector.

  NO está permitido utilizar for/while/do/strlen/memcpy/memmove/strdup/sarasa

  NO está permitido agregar mas funciones ni cambiar parámetros o tipos de retorno.

  Puntos extra si sale en 2 líneas o menos.
 */

//RESOLUCION

int contar_pares(int* numeros, int total){
    if(total == 0){
        return 0;
    }

    if(numeros[total-1]%2 == 0){
        return 1+contar_pares(numeros, total-1);
    }
    
    return contar_pares(numeros, total-1);
}

int main(){
  int numeros[] = {1, 7, 3, 2, 0, 12, 25, 15, 7, 10, 18, 9, 17, 28, 22, 98, 56, 53, 0};
  int numeros1[] = {1, 7, 3};
  int numeros2[] = {2, 0, 12, 10, 18, 28, 22, 0};

  printf("El vector tiene %i elementos pares.\n", contar_pares(numeros, sizeof(numeros)/sizeof(int)));
  printf("El vector tiene %i elementos pares.\n", contar_pares(numeros1, sizeof(numeros1)/sizeof(int)));
  printf("El vector tiene %i elementos pares.\n", contar_pares(numeros2, sizeof(numeros2)/sizeof(int)));

  return 0;
}