#include <iostream>

int main(){

	int numero;
	int digito;
	int numeroInverso = 0;

	std::cout<<"Ingresa un numero: ";
	std::cin>>numero;

	while(numero != 0){
		digito = numero % 10;
		numeroInverso = (numeroInverso * 10) + digito;
		numero = numero / 10;
	}

	std::cout<<"Numero invertido: "<<numeroInverso<<std::endl;

	return 0;
}
