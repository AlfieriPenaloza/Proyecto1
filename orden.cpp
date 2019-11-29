//
// Created by Bruno on 31/10/2019.
//

#include "orden.h"

Corden::Corden():codigo_prod{codigo} {

}

void Corden::pedir_datos(cod_t codigo_prod) {
    cout<<"Código de producto: ";
    cin>>codigo_prod;
}

cod_t Corden::buscar_ubicacion(numero_t **matriz,numero_t *pubica) {

    for(int i = 0; i < filas; i++) {
        for (int j = 0; j <columnas ; ++j)
            if(matriz[i][j]==codigo_prod)
                return codigo_prod;
         // para crear el array dentro del array principal
    }
}


numero_t Corden::entregar_ubicacion(numero_t **matriz,numero_t *pubica){
    numero_t ubicacion=matrix[i][j]:
    return ubicacion;
}
