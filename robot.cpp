//
// Created by carol on 01/11/2019.
//

#include "robot.h"


Crobot::Crobot(vector<vector<numero_t >> pos_ini): pos_inicial(pos_ini) {
}

numero_t Crobot::posicion_r() {
    return vector<vector<numero_t >> posicion;
}

void Crobot::moverse(vector<vector<numero_t >> *ub_producto, vector<vector<numero_t >> pos_inicial) {
    while (robot1.posicion_r()!=*ub_producto){
        if (robot1.posicion_r()+1!=robot2.posicion_r and robot1.posicion_r()+1!=robot3.posicion_r){
            robot1  .posicion_r()+=1;
        }
        else;
        robot1.posicion_r()+=2;
    }
    if (robot.posicion_r()==pos_inicial){
        auto entrego = slot[*ub_producto].entregar_producto(cant_productos);
        if (entrego ==1){
            while(robot1.posicion_r()!=pos_inicial){
                if (robot1.posicion_r()+1!=robot2.posicion_r and robot1.posicion_r()+1!=robot3.posicion_r){
                    robot1.posicion_r()+=1;
                }
                else;
                robot1.posicion_r+=2;
            }
        }
    }


}


void Crobot::recibir() {


}

void Crobot::lista_pedidos() {

}

void Crobot::dejar_producto() {

    if (robot1.posicion_r==[0][0]){

    }
}

void Crobot::recargar_bateria() {

}

