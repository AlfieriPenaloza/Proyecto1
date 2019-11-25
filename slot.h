//
// Created by Alfieri Peñaloza on 1/11/2019.
//

#ifndef PROYECTO1_SLOT_H
#define PROYECTO1_SLOT_H
#include "tipos.h"

class Cslot {
private:
    vector<vector<numero_t >> pos_inicial;
public:
    Cslot();
    void dar_producto();
    numero_t get_cantidad();
    void entregar();
    void pedir_recibir();

};


#endif //PROYECTO1_SLOT_H
