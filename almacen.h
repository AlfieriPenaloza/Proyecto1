//
// Created by Bruno on 31/10/2019.
//
#ifndef PROYECTO1_ALMACEN_H
#define PROYECTO1_ALMACEN_H
#include "tipos.h"

class CAlmacen {
private:
    numero_t cajas;
    size_t columnas;
    size_t filas;
    numero_t profundidad;
    vector<vector<numero_t>> distr;

public:
    CAlmacen(cod_t codigo_prod);//constructor por defecto
    void crear_profundidad();

    vector<vector<numero_t>> ub_producto(cod_t codigo_prod);

    void crear_matriz();

};

#endif //PROYECTO1_ALMACEN_H
