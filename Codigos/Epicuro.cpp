#include <iostream>

int main(){

	 int mal=0,onisciente=0,onipotente=0,querer=0,escolha=0,final=0;

		std::cout << "o mal existe ?\n 1 para sim:\n 2 para nao:\n";
			std::cin >> mal;

					if( mal == 1 ){ 


			std::cout << " Deus sabe que o mal existe?\n 1 para sim:\n 2 para nao:\n"; 
				std::cin >> onisciente;

					if( onisciente == 1 ){ 


			std::cout << "Deus pode acabar com o mal?\n 1 para sim:\n 2 para nao:\n";
				std::cin >> onipotente;

					if( onipotente == 1){

			std::cout << "deus quer acabar com o mal?\n 1 para sim:\n 2 para nao:\n";
				std::cin >> querer;

					if( querer == 1 ){

			std::cout << "entao por que o mal existe?\n 1 para nos testar:\n 2 satanas:\n 3 livre arbitrio:\n";
				std::cin >> escolha;

					switch (escolha){

						case 1:
							std::cout << "Se ele ja e onisciente, ja asabe o resultado e nao precisa nos testar.\n"; break;

						case 2:
							std::cout << "Se ele e onipotente e bondoso, teria destruido satanas.\n"; break;

						case 3:
							std::cout << "deus poderia ter criado um universo com livre arbitrio e sem o mal?\n 1 para sim:\n 2 para nao\n";
								std::cin >> final; 

					if( final == 1){

			 				goto bom;


}else{ std::cout << "Entao ele nao e onipotente";}

}}else{ bom: std:: cout << "entao ele nao e bom 1";}

}else{ std::cout << "entao ele nao e onipotente:\n";}

}else{std::cout << "entao ele nao e onisciente:\n";}

}else{std::cout << "o mal existe\n";}
 
return 0;

}
