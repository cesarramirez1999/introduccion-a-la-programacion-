#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
   float horas, precio, ingreso, ingresoNeto,impuesto;  
   char nombre[40];
   char apellido1[40];
   char apellido2[40];
  printf("este programa le notifica su saldo neto y su saldo total\n\n");
  printf("introdusca su nombre \t\n\n");
  scanf("%s",&nombre);
  
 printf("introdusca su primer apellido\t\n\n");
  scanf("%s",&apellido1);
  
  printf("introdusca su segundo apellido\t\n\n");
  scanf("%s",&apellido2);
  
  printf("su nombre es %s %s %s\n\n",nombre, apellido1, apellido2);
  
  printf("introdusca horas trabajadas\n\n\t");
  scanf("%f",&horas);
  
  printf("introdusca cuanto cobra las horas \n\n\t");
  scanf("%f",&precio);
  
  ingreso=horas*precio;
  impuesto=ingreso*.25;
  ingresoNeto=ingreso*.75;
    printf("su nombre es %s %s %s\n\n",nombre, apellido1, apellido2);
    printf("su sueldo es %f\t \nel impuesto a descontar es %f\nsu sueldo neto es %f \n\n\t", ingreso, impuesto,ingresoNeto); 
  system("PAUSE");	
  return 0;
}
