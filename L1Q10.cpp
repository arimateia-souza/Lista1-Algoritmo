/*10. Leia dois valores inteiros para as vari�veis A e B e efetue as opera��es de adi��o, subtra��o, 
multiplica��o e divis�o de A por B, apresentando ao final os resultados obtidos. Em seguida leia
dois valores l�gicos C e D e efetue as opera��es de nega��o (de cada um dos valores), conjun��o 
(E) e disjun��o (OU), apresentando ao final os resultados obtidos.*/

#include <iostream>
using namespace std;
int main(){
	int A, B, adicao, sub, mult, div;
	bool C, D;
	//entrada Leia dois valores inteiros para as vari�veis A e B
/*	cout<< "Digite um numero inteiro A: ";
	cin>> A;
	cout<< "digite outro numero inteiro B: ";
	cin>> B;
	
	//proc efetue as opera��es de adi��o, subtra��o, 
// multiplica��o e divis�o de A por B
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
// dois valores l�gicos C e D
    cout<<"\nDigite um valor logico C (1 = verdadeiro, 0 = falso): ";
    cin>> C;
    cout<<"\nDigite outro valor logico (1 = verdadeiro, 0 = falso): ";
    cin>> D;

  //proc efetue as opera��es de nega��o
  cout<<"\n!C= " << (!C) << "\n!D= " << (!D);
  cout<< "\nC&&D= " << (C&&D);
  cout<< "\nC||D= " << (C||D); 
  
  
  
  //saida final os resultados obtidos

	
	cout<<"\nfim do programa\n";
	system("\tpause");
}


