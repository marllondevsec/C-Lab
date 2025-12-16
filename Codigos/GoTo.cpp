#include <iostream>

	int main(){


		int n1=0, n2=0, res=0;
		char opc;

		começo:

			std::cout << "digite o valor da nota 1\n";
				std::cin >> n1;

			std::cout << "digite o valor da nota 2\n";
				std::cin >> n2;

			res=n1+n2;

		if(res >= 60 ){ std::cout << "aprovado";}

		else if( res >=40){ std::cout << "aluno em recuperaçao";}

		else{ std::cout << "aluno reprovado";}


		std::cout << "\n digitar outra nota ? [s/n]:";
			std::cin >> opc;if( opc == 's' or opc=='S'){ goto começo;}



return 0;}
