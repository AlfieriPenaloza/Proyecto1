//
// Created by carol on 01/11/2019.
//

#include "robot.h"

size_t pedir_posicion(string label, string label_2, size_t colum, size_t fil){
    size_t  var_1,  var_bu;
    var_bu = 0;
    while(var_bu == 0) {
        cout << "Ingrese la posicion inicial en " << label_2 << " del " << label << ":";
        cin >> var_1;
        if (var_1 < colum && var_1 >= 0){
            return var_1;}
        else
            cout << "La posicion ingresada es incorrecta." << endl;}




}
Crobot::Crobot(size_t pos_i): _pos_i(pos_i) {
}
void Crobot::moverse(Crobot robot, size_t *pubica) {
    switch(robot){
        case r1:
            while (pos_i1=*ub_producto){
                if(pos_i1+1!=&pos_i2 && pos_i1!=pos_i3)
                    pos_i1+=1;
                else
                    pos_i1+=2;
            }

            break;
        case r2:
            break;
        case r3:
            break;
    }
}

//void Crobot::moverse(vector<vector<numero_t >> *ub_producto, vector<vector<numero_t >> pos_inicial) {
//    while (robot1.posicion_r()!=*ub_producto){
//        if (robot1.posicion_r()+1!=robot2.posicion_r and robot1.posicion_r()+1!=robot3.posicion_r){
//            robot1  .posicion_r()+=1;
//        }
//        else;
//        robot1.posicion_r()+=2;
//    }
//    if (robot.posicion_r()==pos_inicial){
//        auto entrego = slot[*ub_producto].entregar_producto(cant_productos);
//        if (entrego ==1){
//            while(robot1.posicion_r()!=pos_inicial){
//                if (robot1.posicion_r()+1!=robot2.posicion_r and robot1.posicion_r()+1!=robot3.posicion_r){
//                    robot1.posicion_r()+=1;
//                }
//                else;
//                robot1.posicion_r+=2;
//            }
//        }
//    }
//
//
//}
//
//
//void Crobot::recibir() {
//
//
//}
//
//void Crobot::lista_pedidos() {
//
//}
//
//void Crobot::dejar_producto() {
//
//    if (robot1.posicion_r==[0][0]){
//
//    }
//}
//
//void Crobot::recargar_bateria() {
//
//}

