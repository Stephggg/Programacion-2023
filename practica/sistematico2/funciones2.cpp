#include <iostream>

using namespace std;

int main() {
        void funcion2();
    int opcion;
    double total = 0, totalTigo = 0, totalClaro = 0;
    
    do {
        cout << "Seleccione que servicio desea:" << endl;
        cout << "1. Recarga Tigo" << endl;
        cout << "2. Recarga Claro" << endl;
        cout << "0. Salir" << endl;
        cin >> opcion;
        
        if (opcion == 1) {
            double recarga;
            cout << "Ingrese el monto de la recarga Tigo: ";
            cin >> recarga;
            
            if (recarga > 500) {
                recarga *= 0.97; 
            }
            
            total += recarga;
            totalTigo += recarga;
        } else if (opcion == 2) {
            double recarga;
            cout << "Ingrese el monto de la recarga Claro: ";
            cin >> recarga;
            
            if (recarga > 500) {
                recarga *= 0.97; 
            }
            
            total += recarga;
            totalClaro += recarga;
        }
    } while (opcion != 0);
    
    cout << "Total de ventas: C$ " << total << endl;
    cout << "Total de ventas Tigo: C$ " << totalTigo << endl;
    cout << "Total de ventas Claro: C$ " << totalClaro << endl;
    
    return 0;
}