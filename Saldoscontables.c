#include <stdio.h>
#include "funciones.h"

int main(){
    float gastos_logistica, gastos_mercadeo, arriendo, sueldo;
    float ingresos_trabajo, ahorro_anterior, ventas_producto, inversiones, ahorro_total;
  
  printf("Ingrese el valor del arriendo: ");
  scanf("%f", &arriendo);
  printf( "Ingrese el valor del sueldo: ");
  scanf("%f", &sueldo);

   ahorro_anterior = 0;

    for (int mes = 1; mes <= 6; mes++) {
        printf("\nMes %d\n", mes);
        printf("Ingrese los gastos de logistica: ");
        scanf("%f", &gastos_logistica);
        printf("Ingrese los gastos de mercadeo: ");
        scanf("%f", &gastos_mercadeo);
        printf("Ingrese los ingresos del trabajo: ");
        scanf("%f", &ingresos_trabajo);
        printf("Ingrese las ventas del producto exportado: ");
        scanf("%f", &ventas_producto);
        printf("Ingrese las inversiones: ");
        scanf("%f", &inversiones);

      
      float total_gastos = arriendo + sueldo + gastos_logistica + gastos_mercadeo;
      float total_ganancias = ingresos_trabajo + ahorro_anterior + ventas_producto + inversiones;
      ahorro_total = total_ganancias - total_gastos;
      
        printf("\nAhorro total del mes: %.2f\n", ahorro_total);
      ahorro_anterior = ahorro_anterior + ahorro_total;
      
    }
    return 0;
  }