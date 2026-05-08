#include <iostream>

int main(){

	int numero,factorial;
	int aux = 1;

	std::cout<<"Indique el numero a calcular el factorial: ";
	std::cin>>numero;

	if(numero == 0){

		std::cout<<"El factorial de 0 es 1"<<std::endl;

	}else{

		for(int i=1;i<=numero;i++){
			factorial = aux * i;
			aux = factorial;
		}

		std::cout<<"El factorial de "<<numero<<" es: "<<factorial<<std::endl;
	}

	return 0;
}
