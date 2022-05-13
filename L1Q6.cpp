/*6. O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do 
distribuidor e dos impostos, ambos aplicados ao custo de fábrica. Supondo que a percentagem 
do distribuidor seja de 28% e os impostos de 45%, escreva um algoritmo que leia o custo de 
fábrica de um carro e escreva o custo ao consumidor*/

#include <iostream>
using namespace std;
int main(){
	
	float valorcarro, ttpagar, distribuidor, impostos;
	
	//entrada
	cout<<"\nQual o valor o seu carro? R$";
	cin>> valorcarro;
	
	//proc = aplicar 28% e 45% ao valor do carro
	
	distribuidor = valorcarro * 0.28 ; 
	impostos = valorcarro *0.45;
	ttpagar = valorcarro + distribuidor + impostos;
	//saida
	cout<<"\nTotal a pagar e R$ " <<ttpagar;
	
	cout<<"\n\nfim";
	system("\n\npause");
}
