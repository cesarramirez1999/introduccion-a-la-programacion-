/*PEREZ SANCHEZ ISAAC, 1TM1
11 DE SEPTIEMBRE DE 2017 
PEDIR NUMEROS Y MOSTRARLOS, MATRIZ*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int matriz[3][3], i, j;
    for(i=0; i<3; i++)
    {
             for(j=0; j<3; j++)
             {
                      printf("Indique la posicion del numero: %d, %d \n", i, j);
                      scanf("%d", &matriz[i][j]);
             }
    }
     for(i=0; i<3; i++)
    {
             for(j=0; j<3; j++)
             {
                      printf("%d ", matriz[i][j]);
             }
             printf("\n");
    }
    
    
    getche();
    return 0;
} 
