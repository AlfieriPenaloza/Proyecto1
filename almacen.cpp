//
// Created by Bruno on 31/10/2019.
//
#include "almacen.h"



COrden::CAlmacen(numero_t cajas, size_t columnas, size_t filas, numero_t
profundidad):cajas{total_cajas}, filas{nf},columnas{nc},profundidad{profundidad} {
}

void crear_profundidad(){

}

void CAlmacen::distribuir(){
    return ;
}

numero_t CAlmacen::crear_matriz() {
    numero_t **pmatriz=nullptr;
    pmatriz= new numero_t*[filas];

    return pmatriz ;
}

