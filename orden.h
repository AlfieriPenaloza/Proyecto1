//
// Created by Bruno on 31/10/2019.
//

#ifndef PROYECTO1_ORDEN_H
#define PROYECTO1_ORDEN_H
class COrden{
private:
    cod_t codigo;
    numero_t cantidad;

public:
    COrden();//constructor por defecto
    COrden()
    void pedir_datos();
    numero_t buscar_ubicacion();
    numero_t generar_ubicacion();
    numero_t entregar ubicacion();


};







#endif //PROYECTO1_ORDEN_H
