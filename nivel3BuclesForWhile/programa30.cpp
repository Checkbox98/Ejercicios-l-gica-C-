#include <iostream>

int main(){

	int numeroLados;

	std::cout<<"Indica la dimension del cuadrado a mostrar: ";
	std::cin>>numeroLados;

	for(int i = 0; i < numeroLados; i++){
		for(int j = 0; j < numeroLados; j++){
			std::cout<<" * ";
		}
		std::cout<<""<<std::endl;
	}


	return 0;
}
