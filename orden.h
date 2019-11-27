//
// Created by Bruno on 31/10/2019.
//

#ifndef PROYECTO1_ORDEN_H
#define PROYECTO1_ORDEN_H

#include "tipos.h"
class Corden{
private:
    cod_t codigo;
    numero_t cantidad;
    numero_t *pubica=distr;

public:
    Corden();
    void pedir_datos(cod_t codigo);
    void buscar_ubicacion(numero_t *pubica);
    numero_t entregar_ubicacion(numero_t *pubica);

};







#endif //PROYECTO1_ORDEN_H
