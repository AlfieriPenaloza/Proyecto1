//
// Created by Bruno on 31/10/2019.
//
#include "almacen.h"

CAlmacen::CAlmacen(size_t columnas, size_t filas): _columnas(columnas), _filas(filas){
}

void CAlmacen::create_vector(size_t columnas, size_t filas) {
    size_t **matrix;
    matrix = new size_t* [filas];
    for (size_t i = 0; i < filas; i++) {
        matrix[i] = new size_t [columnas];
    }
}

void CAlmacen::slot_prof(size_t profundidad) {

}

vector CAlmacen::ubi_producto(cod_t prod) {
    return vector();
}

numero_t CAlmacen::get_cant_cajas() {
    return 0;
}

numero_t CAlmacen::get_prof() {
    return 0;
}

vector<vector<numero_t>> CAlmacen::ub_producto(cod_t codigo_prod) {
    return vector < vector < numero_t >> ();
}

void CAlmacen::crear_matriz() {

}

size_t CAlmacen::pedir_datos() {
    int columna;
    try{
        cout<<"Ingresa cantidad de columnas: "; cin>>columna;

    }
    catch(...) {
        cout << "Dato invalido, por favor intente de nuevo." << endl;
        return pedir_datos();
    }
    return columna;
}

