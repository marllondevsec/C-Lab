// este programa define o ano de nascimento a partir de dados de entrada
// usando operaçoes matematicas basicas.
#include <iostream>

using namespace std;

int main(){

	int idade=0;
	int ano_atual=0;
	int ano_de_nascimento=0;

	cout << "qual o ano atual?:\n";
	cin >>  ano_atual;

	cout << "qual a sua idade?:\n";
	cin >> idade;


	ano_de_nascimento = idade - ano_atual;


	cout << "voce nasceu em" << ano_de_nascimento;



return 0;

}
