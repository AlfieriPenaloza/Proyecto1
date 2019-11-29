#include"slot.h"
#include "producto.h"
#include "almacen.h"
#include "tipos.h"
#include "robot.h"


int main() {
    // la orden debe pedirle al usuario que ingrese la cantidad de filas, columnas y la profundidad
    // tambien debe de decirle
    // columnas = pedir datos();

    size_t columnas, filas;


    size_t colum, fil; string var_str;
    var_str = "columnas";
    colum = pedir_datos(var_str);
    var_str = "filas";
    fil = pedir_datos(var_str);




    return 0;
}