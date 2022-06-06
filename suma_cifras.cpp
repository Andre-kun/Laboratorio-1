#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
  // Especificaciones de entrada
  unsigned int numero;

  // Especificaciones de salida
  unsigned int suma_cifras;

  // Datos internos
  unsigned int unidades_de_millar, centenas, decenas, unidades;

  // Ingreso de datos
  cout << "Ingrese un n\xA3mero de 4 cifras: ";
  cin >> numero;

  // Proceso
  unidades_de_millar = numero / 1000;
  numero = numero % 1000;

  centenas = numero / 100;
  numero = numero % 100;

  decenas = numero / 10;
  unidades = numero % 10;

  suma_cifras = unidades_de_millar + centenas + decenas + unidades;

  // Salida de resultados
  cout << "La suma de las cifras es: " << suma_cifras << endl;

  cout << "Presione cualquier tecla para continuar...";
  getch();
}