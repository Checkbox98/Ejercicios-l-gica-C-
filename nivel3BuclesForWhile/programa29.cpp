#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){

	srand(time(0));

	int numeroAleatorio = rand() % 100 + 1;
	int numero;
	bool bandera = false;

	while(!bandera){
		std::cout<<"Ingresa un numero: ";
		std::cin>>numero;

		if(numero > numeroAleatorio){
			std::cout<<"El numero random es menor."<<std::endl;
		}else if(numero < numeroAleatorio){
			std::cout<<"El numero random es mayor."<<std::endl;
		}else{
			bandera = true;
		}
	}
	std::cout<<"GANASTE !!!"<<std::endl;
	std::cout<<"Adivinaste el numero: "<<numeroAleatorio<<std::endl;
	return 0;
}
