//
// Created by Alfieri Peñaloza on 1/11/2019.
//

#ifndef PROYECTO1_SLOT_H
#define PROYECTO1_SLOT_H
#include "tipos.h"
#include "producto.h"

class Cslot {
private:
    Cproducto* _producto;
    size_t _cantidad_max;
    size_t _cantidad_produc;
    vector<vector<size_t>> _posicion;
public:
    Cslot(Cproducto *produc ,size_t cantidad_produc);
    Cslot();
    void setCantidad(size_t cantidad_produc);
    void setCantMax(size_t cantidad_max);
    void setProducto(Cproducto *producto);
    auto getProducto();
    size_t getCantidad();
    void entregar_producto(size_t cantidad_produc);
};



#endif //PROYECTO1_SLOT_H
