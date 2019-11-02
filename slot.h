//
// Created by Alfieri Peñaloza on 1/11/2019.
//

#ifndef PROYECTO1_SLOT_H
#define PROYECTO1_SLOT_H
#include "tipos.h"

class slot_t {
private:
    cant* vector_posicion;
public:
    slot_t(cant);
    void subir_bajar(truofal);
    void entregar(truofal);
    void pedir_recibir(truofal);

};


#endif //PROYECTO1_SLOT_H
