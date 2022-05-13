/*7. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A 
fórmula de conversão é F=(9*C+160)/5, sendo F a temperatura em Fahrenheit e C a temperatura 
em Celsius.*/
#include <iostream>
using namespace std;
int main(){
	
	int celsius, fahrenheit;
	//entrada
	cout<< "\ndigite a temperatura em graus Celsius: ";
	cin>> celsius;
	//proc
	fahrenheit = celsius *9/5 + 32;
	//saida
	cout<<"\na temperatura em fahrenheit e: " << fahrenheit;
	cout<<"\nfim\n";
	system("\n\n\npause");
}

