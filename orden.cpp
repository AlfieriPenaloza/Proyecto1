//
// Created by Bruno on 31/10/2019.
//

#include "orden.h"

Corden::Corden():codigo{codigo} {

}

void Corden::pedir_datos(cod_t codigo) {
    cout<<"Código de producto: ";
    cin>>codigo;
}

void Corden::buscar_ubicacion(numero_t *pubica) {

    for(int i = 0; i < filas; i++) {
        distr[i] = new int[columnas]; // para crear los vectores dentro del vector principal
        if(distr[i]==codigo)
    }


}


numero_t Corden::entregar_ubicacion(numero_t *pubica) {
    return 0;
}
