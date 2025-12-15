#include <iostream>

	int n1=11,n2=2;//variaveis globais, podem ser chamadas em qualquer funçao.

int main(){

	//operadores matemaricos: + - / * % ()


	int n3=5,n4=2,res;//variavel local, apenas dentro da funçao main.


		res = (n1+n2+n3+n4)-10; 

			res = res+15;

			std::cout << "a soma de todas as variaveis e:\n" << res; 


return 0; 

}
