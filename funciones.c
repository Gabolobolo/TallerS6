#include "funciones.h"
float calcular_ahorro_total(float arriendo, float sueldo, float gastos_logistica, float gastos_mercadeo, float ingresos_trabajo, float ahorro_anterior, float ventas_producto, float inversiones) {
    float total_gastos = arriendo + sueldo + gastos_logistica + gastos_mercadeo;
    float total_ganancias = ingresos_trabajo + ahorro_anterior + ventas_producto + inversiones;
    return total_ganancias - total_gastos;