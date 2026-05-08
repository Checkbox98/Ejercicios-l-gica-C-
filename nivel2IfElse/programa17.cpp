#include <iostream>

int main(){
	
	int numero;

	std::cout<<"Ingresa un numero: ";
	std::cin>>numero;
	if(numero > 0){
		std::cout<<"El numero es positivo."<<std::endl;
	}
	if(numero < 0){
		std::cout<<"El numero es negativo."<<std::endl;
	}
	if(numero == 0){
		std::cout<<"El numero es 0."<<std::endl;
	}

	return 0;
}
