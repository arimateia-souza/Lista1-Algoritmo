/*8. Escreva o valor em reais (R$) de um valor lido em d�lares (US$). O algoritmo dever� solicitar o 
valor da cota��o do d�lar e tamb�m a quantidade de d�lares que o usu�rio deseja converter.*/

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
