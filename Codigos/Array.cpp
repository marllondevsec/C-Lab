#include <iostream>
//
int main(){

	int vetor[5]={12,32,42,21,42}, i=0;

//size of da o tamanho em bts, entao tem que dividir por 4
	for(;i<sizeof(vetor)/4;i++){

        std::cout << vetor[i] << std::endl;

}



return 0;}
