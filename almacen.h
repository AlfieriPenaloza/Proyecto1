//
// Created by Bruno on 31/10/2019.
//

#include "tipos.h"

#ifndef PROYECTO1_ALMACEN_H
#define PROYECTO1_ALMACEN_H
class CAlmacen {
private:
    numero_t cajas;
    numero_t columnas;
    numero_t filas;
    numero_t profundidad;

public:
    CAlmacen();//constructor por defecto
    void crear_profundidad();

    void distribuir();

    void crear_matriz();


};

#endif //PROYECTO1_ALMACEN_H
