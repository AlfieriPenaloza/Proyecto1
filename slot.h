//
// Created by Alfieri Peñaloza on 1/11/2019.
//

#ifndef PROYECTO1_SLOT_H
#define PROYECTO1_SLOT_H
#include "tipos.h"

class Cslot {
private:
    numero_t _profundidad;
    vector<vector<numero_t >> pos_inicial;
public:
    Cslot(numero_t profundidad);
    void dar_producto(numero_t cant_pedida);
    void entregar_producto(numero_t );
    numero_t get_cantidad(numero_t cantidad);
};


#endif //PROYECTO1_SLOT_H
