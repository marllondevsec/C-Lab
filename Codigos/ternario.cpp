#include <iostream>

	int main (){

	int n1=0,n2=0,nota=0;
	std::string res;
	std::string contra;

		std::cout << "digite a primeira nota:\n";
			std::cin >> n1;

		std::cout << "digite a segunda nota:\n";
			std::cin >> n2;

		nota = n1 + n2; 

		( nota >= 60 ) ? res="aprovado\n":res="reprovado\n";

		std::cout << "situaçao do aluno:" << res << std::endl;

		contra=( res == "aprovado\n")?"parabens":"uma pena";
			std::cout << contra;


return 0;}
