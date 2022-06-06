#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
  // Especificaciones de entrada
  unsigned int numero;

  // Especificaciones de salida
  unsigned int cifra_unidades;

  // Ingreso de datos
  cout << "Ingrese n\xa3mero: ";
  cin >> numero;

  // Proceso
  cifra_unidades = numero % 10; // bota un valor de 0 a 9

  // Salida de resultados
  cout << "La cifra de las unidades es: " << cifra_unidades << endl;
}
  // 5/2 = 2, sobra 1
  // 4/2 = 2, sobra 0

  // 5/3 = 1, sobra 2
  // 6/3 = 2, sobra 0
  // 7/3 = 2, sobra 1
  // 8/3 = 2, sobra 2
