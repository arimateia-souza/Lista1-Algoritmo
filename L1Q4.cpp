/* Leia um número inteiro N e um percentual qualquer e 
escreva qual o valor do percentual aplicado ao número.*/

#include <iostream>
using namespace std;
int main(){
	int N, porcentagem, resultado;
	
	//entrada
	cout << "\nDigite um numero inteiro: " ;
	cin >> N;
	cout << "\nDigite uma porcentagem: ";
	cin>> porcentagem;
	//proc
	resultado = porcentagem*N;
	resultado = resultado/100;
	//saida
	cout<< "\nSeu resultado e: " << resultado;
	
	
	
	cout<< "\n\tfim do programa";
	system ("pause");
	
}
