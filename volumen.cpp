#include <iostream>
using namespace std;


int main() 
{
  // Especificaciones de entrada
  float ladoa;
  float ladob;
  float altura;

  // Especificaciones de salida
  float volumen;

  // Ingreso de datos
  std::cout << "Ingrese lado a: ";
  std::cin >> ladoa;
  std::cout << "Ingrese lado b: ";
  std::cin >> ladob;
  std::cout << "Ingrese altura: ";
  std::cin >> altura;

  // Proceso para solucinoar el problema
  volumen = ladoa*ladob*altura/3;

  // Salida de resultados
  std::cout << "El resultado del volumen de la pir\xA0mide es: " << volumen << std::endl;

  system("pause");
}
