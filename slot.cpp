//
// Created by Alfieri Peñaloza on 1/11/2019.
//

#include "slot.h"

Cslot::Cslot(Cproducto *produc , size_t cantidad_produc)
        : _cantidad_produc(cantidad_produc), _producto(produc){
}

void Cslot::setCantidad(size_t cantidad_produc) {
    _cantidad_produc = cantidad_produc;

}

void Cslot::setCantMax(size_t cantidad_max) {
    _cantidad_max = cantidad_max;
}

void Cslot::setProducto(Cproducto *producto){
    _producto = producto;
}

auto Cslot::getProducto(){
    return _producto;
}

size_t Cslot::getCantidad() {
    return _cantidad_produc;

}

void Cslot::entregar_producto(size_t cantidad_produc) {
    _cantidad_produc = cantidad_produc - 1;
}

Cslot::Cslot():_producto(),_cantidad_max(0),_cantidad_produc(0) {

}

