//
// Created by carol on 01/11/2019.
//

#ifndef PROYECTO1_ROBOT_H
#define PROYECTO1_ROBOT_H

#include "tipos.h"
#include "almacen.h"

size_t pedir_posicion(string label, string label_2, size_t colum, size_t fil);

class Crobot {
private:
    size_t _pos_i;
    numero_t robot_n;
    numero_t cant_productos;
    numero_t bateria;
    size_t _pos_f;

public:
    Crobot(size_t pos_i);

//    numero_t posicion_r ();
//    void moverse (vector<vector<numero_t >> *ub_producto);
//    void recibir ();
//    void lista_pedidos ();
//    void dejar_producto ();
//    void recargar_bateria ();

};

#endif //PROYECTO1_ROBOT_H



