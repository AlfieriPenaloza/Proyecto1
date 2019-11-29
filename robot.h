//
// Created by carol on 01/11/2019.
//

#ifndef PROYECTO1_ROBOT_H
#define PROYECTO1_ROBOT_H

#include "tipos.h"
#include "almacen.h"

vector<vector<numero_t>> pedir_posicion(string label);

class Crobot {
private:
    numero_t robot_n;
    vector<vector<numero_t>> pos_inicial;
    numero_t cant_productos;
    numero_t bateria;
    vector<vector<numero_t >>  posicion;

public:
    Crobot(vector<vector<numero_t >> pos_inicial);
    numero_t posicion_r ();
    void moverse (vector<vector<numero_t >> *ub_producto);
    void recibir ();
    void lista_pedidos ();
    void dejar_producto ();
    void recargar_bateria ();

};

#endif //PROYECTO1_ROBOT_H



