//
// Created by carol on 30/10/2019.
//

#include "producto.h"

Cproducto::Cproducto(cod_t codigo_prod):codigo_prod{codigo_prod} {

}


cod_t Cproducto::informar_codigo(cod_t codigo_prod) {
    return codigo_prod ;
}

cod_t Cproducto::informar_peso(numero_t peso) {
    return get_peso;
}











#include "tipos.h"
#include "producto.h"
#include <utility>

Producto::Producto(string nombre) {
    this->nombre = nombre;
}

Producto::Producto() {

}

string Producto::get_nombre() {
    return nombre;
}