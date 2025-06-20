#ifndef BUFFERMANAGER_H
#define BUFFERMANAGER_H
#include "gestorBloques.h"
#include "bloque.h"
#include <string>
using namespace std;

class bufferManager{
    gestorBloques gb;
    public:
        void agregarGestorBloques(int id , bloque b);
       // void mostrar
        void agregarBufferPool();
};
//
#endif // !BUFFERMANAGER