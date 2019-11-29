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

    //Pide posición inicial de los Robots
    vector<vector<numero_t>> pos_ini_r1, pos_ini_r2, pos_ini_r3;
    pos_ini_r1 = pedir_posicion("robot 1");
    pos_ini_r2 = pedir_posicion("robot 2");
    pos_ini_r2 = pedir_posicion("robot 3");

    Crobot r1(pos_ini_r1);
    Crobot r2(pos_ini_r2);
    Crobot r3(pos_ini_r3);



    return 0;
}