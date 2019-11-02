//
// Created by Alfieri Peñaloza on 1/11/2019.
//

#include "slot.h"

slot_t::slot_t(cant cantidad) {
    vector_posicion = new cant[cantidad];
}

void slot_t::subir_bajar(truofal subir) {
    truofal _subir;
    _subir = subir;
    // la clase orden al determinar qué producto se necesita mandará la orden de subir o no
    if (_subir == true){
        //activar el slot y subirlo
    }
}

void slot_t::entregar(truofal vacio) {

    if (//cantidad de objetos en slot == 0 )
        // entregar caja

}

void slot_t::pedir_recibir(truofal pedir) {

}