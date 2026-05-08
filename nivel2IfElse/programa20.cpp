#include <iostream>

int main(){

	int ladoA,ladoB,ladoC;

	std::cout<<"Ingresa el lado A del triangulo: ";
	std::cin>>ladoA;
	std::cout<<"Ingresa el lado B del triangulo: ";
	std::cin>>ladoB;
	std::cout<<"Ingresa el lado C del triangulo: ";
	std::cin>>ladoC;

	if(ladoA == ladoB && ladoA == ladoC){
		std::cout<<"El triangulo es equilatero."<<std::endl;
	}else if(ladoA != ladoB && ladoB != ladoC && ladoC != ladoA){
		std::cout<<"El triangulo es escaleno."<<std::endl;
	}else{
		std::cout<<"El triangulo es isosceles."<<std::endl;
	}

	return 0;
}
