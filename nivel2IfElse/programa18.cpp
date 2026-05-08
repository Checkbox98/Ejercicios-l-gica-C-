#include <iostream>

int main(){

	char letra;
	std::cout<<"Ingresa una letra: ";
	std::cin>>letra;

	if(letra == 'a' ||  letra == 'A' || letra == 'e' || letra == 'E' || letra == 'i' || letra == 'I' || letra == 'o' || letra == 'O' || letra == 'u' || letra == 'U'){
		std::cout<<"La letra es una vocal"<<std::endl;
	}else{
		std::cout<<"La letra es una consonante"<<std::endl;
	}

	return 0;
}
