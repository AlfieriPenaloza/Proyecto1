//
// Created by Bruno on 31/10/2019.
//
#include "almacen.h"
#include "slot.h"

CAlmacen::CAlmacen(size_t columnas, size_t filas): _columnas(columnas), _filas(filas) {
    create_matriz(columnas, filas);

}

void CAlmacen::create_matriz(size_t columnas, size_t filas) {
    Cslot **matriz;
    matriz = new Cslot*[filas];
    for (size_t i = 0; i < filas; i++){
        matriz[i] =  new Cslot[columnas];
    }
}




//*objeto.class->get.nombre
//slot1 = matriz[fila][columna]-> sel
//void CAlmacen::guardar_objeto(producto insert_produc, size_t columnas, size_t filas, vector<vector<size_t>> matrix){
//    for (int i = 0; i < columnas; i++){
//        for(int j = 0; j < filas; j++){
//            if(matrix[i][j] = producto)
//                return matrix[i][j] = producto++;
//            else if()
//                return "El almacen se encuentra lleno";
//
//        }
//    }
//}
//
//
// hago un get al producto para que me diga el atributo nombre, lo comparao con lo que quiero y digo cunatos hay
//vector<vector<numero_t>> CAlmacen::ubicacion(string cod_prod,size_t columnas, size_t filas, size_t **matrix )
//{
//    vector<vector<numero_t >> copy;
//    for( int i = 0; i < columnas; i++){
//            vector<numero_t> temp;
//        for (int j = 0; j < filas; j++){
//            copy.push_back(temp);
//           // if (prod == matrix[i][j])
//           //     return (i & j);
//        }
//    }
//}
//
//
//numero_t CAlmacen::get_cant_productos(matriz2, colum, fil) {
//    return matriz2[colum][fil];
//}
//
//truofal CAlmacen::get_camtidad_necesaria(size_t cantidad_de_producto){
//    if (cantidad de producto < CAlmacen::get_cant_productos(matriz2, colum, fil) )
//        return true;
//    else
//        return false;
//}






size_t pedir_datos(string lable) {
    int dato; int x;
    x = 0;
    while( x == 0) {
        cout << "Ingrese la cantidad de "<< lable <<": "; cin>>dato;
        if (dato > 0){
            x = 1;
            return dato;}
        else
            cout<< "Ingrese un dato valido." << endl;
    }
}

