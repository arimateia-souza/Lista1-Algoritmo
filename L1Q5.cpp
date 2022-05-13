/*5. Leia o tempo de duração de um evento expresso em segundos,
converta-o e mostre-o expresso em horas, minutos e segundos.*/


#include <iostream>
using namespace std;
int main(){
	
	int eventoseg, minuto, hora, seg;
	//entrada
	cout<< "\nDigite a duracao do evento em segundos: ";
	cin>> eventoseg;
	
	//proc
	hora = eventoseg/3600;
	eventoseg = eventoseg - (hora*3600);
	minuto = (eventoseg/60);
	seg = eventoseg - (minuto*60);
	
	//saida
		cout<<"tempo em hora:minuto:segundos " << hora<<"h:" <<minuto<<"m:" <<seg<<"s";

	
	
	cout<<"\nFim do programa";
	system ("pause");
}
