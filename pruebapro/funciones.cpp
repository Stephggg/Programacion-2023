#include <iostream>
#include <string>
using namespace std;

int main() {
    string miembros[10][9];  // Asumiendo una matriz de 10 filas y 9 columnas
    string opcion, codigo, nombre, apellido, anio, facultad, edad, contacto, departamento;
    int posicion;
    opcion = "";
  
    while (opcion != "5") {
        cout << "----- Registro del Club de Guitarra -----" << endl;
        cout << "1. Agregar datos del miembro" << endl;
        cout << "2. Editar datos de los miembros" << endl;
        cout << "3. Eliminar miembro" << endl;
        cout << "4. Visualizar registro de miembros" << endl;
        cout << "5. Salir del programa" << endl;
        cout << "Ingrese el numero de opcion:";
        cin >> opcion;
    
        switch (stoi(opcion)) {
            case 1:
                cout << "----- Cargar datos del miembro -----" << endl;
                cout << "Ingrese el codigo:";
                cin >> codigo;
                cout << "Ingrese el nombre:";
                cin >> nombre;
                cout << "Ingrese el apellido:";
                cin >> apellido;
                cout << "Ingrese el anio:";
                cin >> anio;
                cout << "Ingrese la facultad:";
                cin >> facultad;
                cout << "Ingrese la edad:";
                cin >> edad;
                cout << "Ingrese el contacto:";
                cin >> contacto;
                cout << "Ingrese el departamento:";
                cin >> departamento;
              
                // Lógica para agregar el miembro a la matriz miembros
                // ...
              
                cout << "Datos del miembro cargados correctamente." << endl;
                break;
            case 2:
                cout << "----- Editar datos de los miembros -----" << endl;
                cout << "Ingrese el código del miembro a editar:";
                cin >> codigo;
              
                // Lógica para buscar el miembro en la matriz miembros y obtener su posición
                // ...
              
                if (posicion != -1) {
                    cout << "Ingrese el nuevo nombre:";
                    cin >> nombre;
                    cout << "Ingrese el nuevo apellido:";
                    cin >> apellido;
                    cout << "Ingrese el nuevo año:";
                    cin >> anio;
                    cout << "Ingrese la nueva facultad:";
                    cin >> facultad;
                    cout << "Ingrese la nueva edad:";
                    cin >> edad;
                    cout << "Ingrese el nuevo contacto:";
                    cin >> contacto;
                    cout << "Ingrese el nuevo departamento:";
                    cin >> departamento;
                  
                    // Lógica para editar los datos del miembro en la matriz miembros
                    // ...
                  
                    cout << "Datos del miembro editados correctamente." << endl;
                } else {
                    cout << "Miembro no encontrado." << endl;
                }
                break;
            case 3:
                cout << "----- Eliminar miembro -----" << endl;
                cout << "Ingrese el codigo del miembro a eliminar:";
                cin >> codigo;
              
                // Lógica para buscar el miembro en la matriz miembros y obtener su posición
                // ...
              
                if (posicion != -1) {
                    // Lógica para eliminar el miembro de la matriz miembros
                    // ...
                  
                    cout << "Miembro eliminado correctamente." << endl;
                } else {
                    cout << "Miembro no encontrado." << endl;
                }
                break;
           case 4:
                cout << "----- Buscar miembro por ID -----" << endl;
                                cout << "Ingrese el codigo del miembro a buscar:";
                cin >> codigo;
              
                // Lógica para buscar el miembro en la matriz miembros y obtener su posición
                // ...
              
                if (posicion != -1) {
                    // Lógica para buscar al miembro en la matriz miembros
                    // ...
                  
                    // Supongamos que encontramos al miembro en la posición deseada
                    cout << "Miembro encontrado:" << endl;
                    cout << "Código: " << miembros[posicion][0] << endl;
                    cout << "Nombre: " << miembros[posicion][1] << endl;
                    cout << "Apellido: " << miembros[posicion][2] << endl;
                    cout << "Anio: " << miembros[posicion][3] << endl;
                    cout << "Facultad: " << miembros[posicion][4] << endl;
                    cout << "Edad: " << miembros[posicion][5] << endl;
                    cout << "Contacto: " << miembros[posicion][6] << endl;
                    cout << "Departamento: " << miembros[posicion][7] << endl;
                } else {
                    cout << "Miembro no encontrado." << endl;
                }
                break;
            case 5:
                cout << "Programa finalizado." << endl;
                break;
            default:
                cout << "Opcion invalida. Por favor, ingrese un numero valido." << endl;
                break;
        }
    }
  
    return 0;
}
