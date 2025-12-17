//and = &&; or = ||; 

#include <iostream>

int main(){

	int n1=0,n2=0,n3=0;
	char chuva='n';
inicio:
		std::cout << "entre com um valor maior que 10 e menor que 20\n";

			std::cin >> n1;

		if( n1>10 && n1<20){ 


	std::cout <<  "valor aceito\n";}

	else{ std::cout << " valor recusado\n";

	goto inicio;} 

segundo:

		std::cout << "entre com outro valor que seja:\n ou um numero entre 0 a 5\n ou um numero entre 10 a 15\n";
			std::cin >> n2;if( (n2 <= 6 && n2 >= 0) || ( n2 <= 16 && n2 >= 9) ){ std::cout << " valor aceito\n";}else{ std::cout << "valor recusado\n"; goto segundo;}

	std::cout << "esta chovendo ? [s/n]\n";
		std::cin >> chuva;
			if( chuva == 's' || chuva == 'S'){n3+=1;}

						if(!n3){std::cout << "va a praia\n";} // o ! inverte o valor da variavel.

						else{std::cout << "va ao cinema\n";}

return 0;}
