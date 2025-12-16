#include <iostream>

		int main(){


		int chuva=0;int sol= 0;

		std::cout << "esta chovendo ?\n 1 para Sim:\n 2 para nao:\n";
			std::cin >> chuva ;
					if( chuva==2){	


				std::cout << "qual a intensidade do sol de 0 a 10?\n";
					std::cin >> sol;

							if( sol>=6){std::cout << "va a praia\n";}else{ std::cout << "va ao cinema\n";}


}else{ std::cout << "fique em casa e maratone series.\n";}

return 0;}
