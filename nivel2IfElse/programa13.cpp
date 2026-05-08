#include <iostream>

int main(){

	int numeroA,numeroB,numeroC;
	std::cout<<"Ingresa el valor A: ";
	std::cin>>numeroA;
	std::cout<<"Ingresa el valor B: ";
	std::cin>>numeroB;
	std::cout<<"Ingresa el valor C: ";
	std::cin>>numeroC;
	if(numeroA > numeroB && numeroA > numeroC){
		std::cout<<"El valor A: "<<numeroA<<" es mayor"<<std::endl;
	}
	if(numeroB > numeroA && numeroB > numeroC){
		std::cout<<"El valor B: "<<numeroB<<" es mayor"<<std::endl;
	}
	if(numeroC > numeroA && numeroC > numeroB){
		std::cout<<"El valor C: "<<numeroC<<" es mayor"<<std::endl;
	}
	return 0;
}
