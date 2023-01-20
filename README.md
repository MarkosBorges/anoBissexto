// anoBissexto
//Programa em C++ criado no curso de Astronomia e Astronáutica (Astrofísica para Todos-UFSC) para informar se o ano é bissexto. :)


#include <iostream>
#include <string>
#include <locale>

using namespace std;

void bissexto(int ano){

	cout<<"\nVocê digitou o ano de: "<<ano<<endl;
	cout<<"_________________________________";
	if(ano % 4 == 0){
		if(ano % 100 == 0){
			if(ano % 400 == 0){
				cout<<"\n\n\nO Ano de: "<<ano<<" É BISSEXTO!"<<endl;				
			}else{
				cout<<"\n\n\nO Ano de: "<<ano<<" NÃO É bissexto!"<<endl;				
			}
		}else{
			cout<<"\n\n\nO Ano de: "<<ano<<" É BISSEXTO!"<<endl;			
		}
	}else{
		cout<<"\n\n\nO Ano de: "<<ano<<" NÃO É bissexto!"<<endl;
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
		cout<<"Deseja fazer outro cálculo? "<<endl;
		cout<<"Digite a letra S para sim ou qualquer número ou letra para sair: ";
		cin>>op;
	}while(op =='S' || op=='s');
	cout<<"\n ___________";
	cout<<"\n| OBRIGADO! |";
	cout<<"\n ------------";
		
	return(0);
}
