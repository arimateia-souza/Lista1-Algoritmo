/* Leia o valor de uma compra nas Lojas Sua Melhor Compra e mostre o valor das prestações de
acordo com a quantidade de parcelas desejada pelo usuário. A loja está vendendo seus produtos
a vista ou parcelado em até 10 vezes sem juros.*/

#include <iostream>
using namespace std;
int main(){
	int parcelas;
	float vcompra, vprestacao;
//entrada
 cout << "\nDigite o valor da compra:";
 cin >> vcompra;
  cout << "\nDigite a quantidade de parcelas em ate 10x:";
 cin>> parcelas;
//proc
vprestacao = vcompra / parcelas;

//saida	
	cout<< "\nValor da prestacao R$ " <<vprestacao << " em " <<parcelas << "x sem juros";
	
	
	cout << "\nFim do programa";
	system("pause");
}
