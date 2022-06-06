#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
  // Especificaciones de entrada
  int horas, minutos, segundos;

  // Especificaciones de salida
  int horas_restantes, minutos_restantes, segundos_restantes;

  // Datos internos
  int segundos_totales;
  int segundos_totales_restantes;

  // Ingreso de datos
  cout << "Ingrese horas: ";
  cin >> horas;
  cout << "Ingrese minutos: ";
  cin >> minutos;
  cout << "Ingrese segundos: ";
  cin >> segundos;
  
  // Proceso
  segundos_totales = horas*3600 + minutos * 60 + segundos;
  segundos_totales_restantes = 24*3600 - segundos_totales;

  horas_restantes = segundos_totales_restantes / 3600;
  segundos_totales_restantes %= 3600;

  minutos_restantes = segundos_totales_restantes / 60;
  segundos_restantes = segundos_totales_restantes % 60;
  
  // Salida de resultados
  cout << "El tiempo que falta para terminar el d\xA1" << "a es:" << endl;
  cout << horas_restantes << " horas, ";
  cout << minutos_restantes << " minutos, ";
  cout << segundos_restantes << " segundos." << endl;
}