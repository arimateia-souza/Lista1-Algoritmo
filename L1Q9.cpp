/*9. Leia dois valores inteiros nas vari�veis Val1 e Val2, troque os seus conte�dos e escreva o 
resultado. Exemplo: Se o valor lido foi 10 para a vari�vel Val1 e 11 para a vari�vel Val2, depois 
da troca o algoritmo ter� que escreva Val1 = 11 e Val2 = 10.*/

#include <iostream>
using namespace std;
int main(){
	int val1, val2, aux;
	//input
	cout<<"Digite o 1o numero inteiro: ";
	cin>>val1;
	cout<<"Digite o 2o numero inteiro: ";
	cin>>val2;
	
	aux = val1;
	val1 = val2 ;
	val2 = aux;
	
	
	//output
	cout<<"\n1o numero inteiro agora e: " <<val1;
	cout<<"\n2o numero inteiro agora e: " << val2;

	
	
	cout<<"\nfim do programa\n";
	system ("\npause");
}
