// Created by Bruno on 31/10/2019.
//
#ifndef PROYECTO1_ALMACEN_H
#define PROYECTO1_ALMACEN_H
#include "tipos.h"
#include "slot.h"
#include "producto.h"


size_t pedir_datos(string lable);

class CAlmacen{
private:
    size_t _columnas;
    size_t _filas;
    Cslot* _slot;
public:
    CAlmacen(size_t columnas, size_t filas);
    void create_matriz(size_t columnas, size_t filas);

};


#endif //PROYECTO1_ALMACEN_H
