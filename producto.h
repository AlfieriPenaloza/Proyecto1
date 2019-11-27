//
// Created by carol on 30/10/2019.
//

#ifndef PROYECTO1_PRODUCTO_H
#define PROYECTO1_PRODUCTO_H

#include "tipos.h"

class Cproducto {
private:
    cod_t codigo_prod;
    numero_t dimensiones;
    numero_t peso;

public:
    Cproducto(cod_t codigo_prod);
    cod_t informar_codigo (cod_t codigo_prod);
    cod_t informar_peso (numero_t peso);


};


#endif //PROYECTO1_PRODUCTO_H
