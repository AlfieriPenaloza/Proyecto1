// Created by Bruno on 31/10/2019.
//
#ifndef PROYECTO1_ALMACEN_H
#define PROYECTO1_ALMACEN_H
#include "tipos.h"

class CAlmacen:public C {
private:
    numero_t _cajas;
    size_t _columnas;
    size_t _filas;
    size_t _profundidad;
    vector<vector<numero_t>> distr;

public:
    CAlmacen(size_t columnas, size_t filas);
    size_t pedir_datos();
    void create_vector(size_t columnas, size_t filas);
    void slot_prof(size_t profundidad);
    void ubi_producto(cod_t prod);
    numero_t get_cant_cajas();
    numero_t get_prof();


    vector<vector<numero_t>> ub_producto(cod_t codigo_prod);

    void crear_matriz();

};

#endif //PROYECTO1_ALMACEN_H
