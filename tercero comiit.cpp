#include <iostream>
#include "menu.h"

int main() {
    if (autenticarUsuario()) {
        mostrarMenuPrincipal();
    } else {
        std::cout << "Autenticación fallida. Finalizando programa." << std::endl;
    }
    return 0;
}
