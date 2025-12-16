#include <iostream>

		int main(){

		float prova=0,teste=0,trabalho=0,media=0;

		std::cout << "entre com a nota do seu trabalho\n";
			std::cin >> trabalho;

		std::cout << "entre com a nota do seu teste\n";
			std::cin >> teste;

		std::cout << "entre com a nota da sua prova\n";
			std::cin >> prova;

			media = teste + prova + trabalho;
			media/=2; 

			if(media>=6){


				std::cout << "aprovado!!!\n sua nota e:" << media;}

						else{ std::cout << "reprovado :(\n sua nota foi:" << media; }


return 0;}
