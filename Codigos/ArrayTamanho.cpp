#include <iostream>

int main (){

	int grupos=0,i=0;

	std::cout << "entre com a quantidade de grupos\n ";
		std::cin >> grupos;

		int ar[grupos];
			do{
	 std::cout << "entre com o valor " << i  << std::endl;
		std::cin >> ar[i]; i++; }while(i<grupos);


		for(i=0; i < grupos ; i++){ 
		std::cout << "valor das arrays: " << ar[i] <<std::endl; 

}






return 0;}
