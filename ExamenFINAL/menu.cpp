#include <iostream>
#include "menu.h"
#include "seguridad.h"
#include "crud.h"
#include "reportes.h"

using namespace std;

bool autenticarUsuario() {
    string usuario = "admin";
    string contrasena = "1234";
    cout << "Usuario autenticado: " << usuario << endl;
    return true;
}

void mostrarMenuPrincipal() {
    int opcion;
    do {
        cout << "\n--- Menú Principal ---" << endl;
        cout << "1. Catálogos" << endl;
        cout << "2. Informes" << endl;
        cout << "3. Seguridad" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1: menuCRUD(); break;
            case 2: menuReportes(); break;
            case 3: menuSeguridad(); break;
        }
    } while (opcion != 4);
}