#include <iostream>

using namespace std;

int main() {
    void funcion1();
     int n;
    cout << "Ingrese el numero de materias que recibe: ";
    cin >> n;
    int suma = 0, notaMaxima = 0, notaMinima = 100;
    for(int i = 1; i <= n; i++) {
        int nota;
        cout << "Ingrese la nota de la materia " << i << ": ";
        cin >> nota;
        suma += nota;
        notaMaxima = max(notaMaxima, nota);
        notaMinima = min(notaMinima, nota);
    }
    double promedio = (double)suma / n;
    cout << "Calificaciones guardadas: " << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Nota mas alta: " << notaMaxima << endl;
    cout << "Nota mas baja: " << notaMinima << endl;
    return 0;
}