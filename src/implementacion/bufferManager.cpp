#include "../include/bufferManager.h"
#include "../include/gestorBloques.h"
#include <string>
using namespace  std;


void bufferManager::agregarGestorBloques(int id, bloque b) {
    gb.agregarBloque(id, b);
}
