#include <iostream>

int main(){

	int numero;
	int contador = 1;
	int digitos = 10;
	std::cout<<"Ingresa un numero: ";
	std::cin>>numero;

	while(numero != 0){

		if(numero < digitos){
			break;
		}

		digitos *= 10;
		contador++;

	}

	std::cout<<"La cantidad de digitos de "<<numero<<" es: "<<contador<<std::endl;

	return 0;
}
