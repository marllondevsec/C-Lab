#include <iostream>

int main(){

	int n1=0,n2=0;

	std::cout  << "entre com um numero entre 1 a 3\n";
		std::cin >> n1;

	switch(n1){

		case 1: std::cout << "este e o primeiro numero\n";
		break;
		case 2: std::cout << "este e o segundo numero\n";
		break;
		case 3: std::cout << "este e o terceiro numero\n";
		break;
		default: std::cout << "este valor e invalido\n";}


	std::cout << "selecione um veiculo terrestre\n1- carro\n2- moto\n3-bicicleta\n4- aviao\n5- barco\n";
		std::cin >> n2;

	switch(n2){
		
		case 1:
		case 2:
		case 3:
			std::cout << "veiculo certo\n";
		break;
		default: std::cout << "veiculo errado\n";}


return 0;}
