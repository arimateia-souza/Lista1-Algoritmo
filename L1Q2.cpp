/*Calcule e escreva a quantidade de dinheiro gasta por um fumante a partir da leitura das
informações número de anos que ele fuma, nº de cigarros fumados por dia e preço de uma
carteira.*/
#include <iostream>
using namespace std;
int main(){
	
int anos, ncig;
float preco, precouni, totalgasto;
//entrada
 cout << "\nDigite ha quantos anos voce fuma:";
 cin>> anos;
 cout << "\nDigite a quantidade de cigarros fumados por dia:";
 cin>> ncig;
 cout << "\nDigite o preco de uma carteira:";
 cin >> preco;

//processamento
precouni = preco / 20; //20 numero de cigarros que uma carteira tem 

//saida
totalgasto = ((precouni*ncig)*(anos*365));
 cout << "\nTotal gasto:" << totalgasto;
	
	cout<< "\nFim do programa!";
 system ("pause")	;
}
