#include"slot.h"
#include "producto.h"
#include "almacen.h"
#include "tipos.h"
#include "robot.h"


int main() {

    size_t colum, fil, posX_1, posY_1 , posX_2, posY_2, posX_3, posY_3; string var_str, product;
    var_str = "columnas";
    colum = pedir_datos(var_str);
    var_str = "filas";
    fil = pedir_datos(var_str);
    CAlmacen almacen1(colum, fil);

    //Pide posición inicial de los Robots


    posX_1 = pedir_posicion("Robot 1", "X", colum, fil);
    posY_1 = pedir_posicion("Robot 1", "Y", colum, fil);
    size_t pos_i1[2] = {posX_1, posY_1};

    Crobot r1(size_t pos_i1);

    posX_2 = pedir_posicion("Robot 2", "X", colum, fil);
    posY_2 = pedir_posicion("Robot 2", "Y", colum, fil);
    size_t pos_i2[2] = {posX_2, posY_2};
    Crobot r2(size_t pos_i2);

    posX_3 = pedir_posicion("Robot 3", "X", colum, fil);
    posY_3 = pedir_posicion("Robot 3", "Y", colum, fil);
    size_t pos_i3[2] = {posX_3, posY_3};
    Crobot r3(size_t pos_i3);

    cout << "El almacen se encuentra vacio, por favor ingrese productos." << endl
         << "Ingrese el nombre del producto a ingresar: "; cin >> product;
    int var_bucle = 0; char f;

    while(var_bucle == 0){



        cout << "Ingrese F para cerrar el programa: "; cin >> f;
        if (f == 'F'){
            cout << "La posición final del robot1 es: " << pos_i1;
            cout << "La posición final del robot2 es: " << pos_i2;
            cout << "La posición final del robot3 es: " << pos_i3;
            var_bucle = 1;}

    }






    return 0;
}