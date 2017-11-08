//Autor: David Sorcia Hernandez
//Programa que calcula la velocidad en metros sobre segundos

#include <iostream>
using namespace std;
int main()
{

  float d=0;
  float t=0;
  float v=0.0;
  
  cout << "Escribe la distancia en metros " << endl;
  cin >> d;
  
  cout << "Escribe el tiempo en segundos " << endl;
  cin >> t;
  
  v=d/t;
  
  cout << "La velocidad resultante es = " << v << " m/s" << endl;
  
  return 0;
}

