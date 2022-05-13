/*10. Leia dois valores inteiros para as variáveis A e B e efetue as operações de adição, subtração, 
multiplicação e divisão de A por B, apresentando ao final os resultados obtidos. Em seguida leia
dois valores lógicos C e D e efetue as operações de negação (de cada um dos valores), conjunção 
(E) e disjunção (OU), apresentando ao final os resultados obtidos.*/

#include <iostream>
using namespace std;
int main(){
	int A, B, adicao, sub, mult, div;
	bool C, D;
	//entrada Leia dois valores inteiros para as variáveis A e B
/*	cout<< "Digite um numero inteiro A: ";
	cin>> A;
	cout<< "digite outro numero inteiro B: ";
	cin>> B;
	
	//proc efetue as operações de adição, subtração, 
// multiplicação e divisão de A por B
	adicao = A+B;
	sub = A-B;
	mult = A*B;
	div = A / B;
	
	//saida resultados obtidos
	cout<< "\n a soma dos numeros e: " <<adicao;
	cout<< "\n a subtracao dos numeros e: " <<sub;
	cout<< "\n a multiplicacao dos numeros e: " <<mult;
	cout<< "\n a divisao dos numeros e: " <<div;
	*/
	
	//entrada Em seguida leia
// dois valores lógicos C e D
    cout<<"\nDigite um valor logico C (1 = verdadeiro, 0 = falso): ";
    cin>> C;
    cout<<"\nDigite outro valor logico (1 = verdadeiro, 0 = falso): ";
    cin>> D;

  //proc efetue as operações de negação
  cout<<"\n!C= " << (!C) << "\n!D= " << (!D);
  cout<< "\nC&&D= " << (C&&D);
  cout<< "\nC||D= " << (C||D); 
  
  
  
  //saida final os resultados obtidos

	
	cout<<"\nfim do programa\n";
	system("\tpause");
}


