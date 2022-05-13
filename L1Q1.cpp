//Leia a idade de uma pessoa expressa em anos, 
//meses e dias e mostre-a expressa apenas em dias.

#include <iostream>
using namespace std;
int main() {
int anos, meses,dias, resultado;
  
//entrada
cout <<"\nDigite sua idade em anos, meses e dias:";

  cin>> anos;
  cin>> meses;
  cin>> dias;
//proc
resultado = (anos*365)+(meses*30)+dias;

//saida
cout << "\nidade em dias:" << resultado;
  return 0;
}  
