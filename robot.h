//
// Created by carol on 01/11/2019.
//

#ifndef PROYECTO1_ROBOT_H
#define PROYECTO1_ROBOT_H

#include "tipos.h"

class robot_t {
private:
    cod_t codigo_rob;
    vector<vector<numero_t>> pos_inicial;
    vector<vector<numero_t>> pos_destino;
    numero_t cant_productos;
    numero_t bateria;

public:
    void recepcionar ();
    void reconocer ();
    void moverse ();
    void extraer ();
    void esperar_ruta ();
    void lista_pedidos ();
    void dejar_producto ();
    void recargar_bateria ();

};


#endif //PROYECTO1_ROBOT_H
