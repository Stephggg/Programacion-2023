#include <iostream>
using namespace std;

int main() {
        void funcion3();
  // Verificar si un numero es primo
  int num;
  cout << "Ingrese un numero: ";
  cin >> num;
  bool esPrimo = true;
  for (int i = 2; i < num; i++) {
    if (num % i == 0) {
      esPrimo = false;
      break;
    }
  }
  if (esPrimo) {
    cout << num << " es un numero primo." << endl;
  } else {
    cout << num << " no es un numero primo." << endl;
  }

  // Contar numeros pares, impares y neutros
  int par = 0, impar = 0, neutro = 0;
  cout << "Ingrese una lista de numeros (escribe 0 para terminar): ";
  while (cin >> num, num != 0) {
    if (num % 2 == 0) {
      par++;
    } else if (num % 2 == 1) {
      impar++;
    } else {
      neutro++;
    }
  }
  cout << "Hay " << par << " numeros pares, " << impar << " numeros impares, y " << neutro << " numeros neutros." << endl;

  // Imprimir los siguientes 10 numeros multiplos de 3
  cout << "Ingrese un numero: ";
  cin >> num;
  cout << "Los siguientes 10 numeros multiplos de 3 son: ";
  for (int i = num; i <= num + 27; i += 3) {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}