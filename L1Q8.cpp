/*8. Escreva o valor em reais (R$) de um valor lido em dólares (US$). O algoritmo deverá solicitar o 
valor da cotação do dólar e também a quantidade de dólares que o usuário deseja converter.*/

#include <iostream>
using namespace std;
int main(){
	
	float cotacao, converter, total;
	
	//entrada
	cout<<"Digite qual a cotacao atual? ";
	cin>> cotacao;
	cout<<"Quantos dolares voce seseja converter para reais? ";
	cin>> converter;
	//proc
	total = cotacao*converter;
	
	//saida
	cout<<"\nO total da conversao e: R$ " << total;
	
	cout<<"\nfim do programa\n";
	system("pause");
	
}
