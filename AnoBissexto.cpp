#include <iostream>
#include <string>
#include <locale>

using namespace std;

//Algoritmo para o curso de Astronomia e Astron�utica IFSC
//MarcosBorges

void bissexto(int ano){

	cout<<"\nVoc� digitou o ano de: "<<ano<<endl;
	cout<<"_________________________________";
	if(ano % 4 == 0){
		if(ano % 100 == 0){
			if(ano % 400 == 0){
				cout<<"\n\n\nO Ano de: "<<ano<<" � BISSEXTO!"<<endl;				
			}else{
				cout<<"\n\n\nO Ano de: "<<ano<<" N�O � bissexto!"<<endl;				
			}
		}else{
			cout<<"\n\n\nO Ano de: "<<ano<<" � BISSEXTO!"<<endl;			
		}
	}else{
		cout<<"\n\n\nO Ano de: "<<ano<<" N�O � bissexto!"<<endl;
	}		
}
int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int ano;
	char op;
	
	cout<<"--- PROGRAMA ANO BISSEXTO ---"<<endl;
	do{		
		cout<<"\nDigite um ano:";
		cin>>ano;
		bissexto(ano);	
		cout<<"\n\n_________________________________"<<endl<<endl;
		cout<<"Deseja fazer outro c�lculo? "<<endl;
		cout<<"Digite a letra S para sim ou qualquer n�mero ou letra para sair: ";
		cin>>op;
	}while(op =='S' || op=='s');
	cout<<"\n ___________";
	cout<<"\n| OBRIGADO! |";
	cout<<"\n ------------";
		
	return(0);
}
