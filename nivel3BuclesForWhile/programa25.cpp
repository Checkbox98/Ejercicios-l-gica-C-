#include <iostream>

int main(){

	int numero,suma;

	std::cout<<"Indique la suma de los primeros  n numeros naturales: ";
	std::cin>>numero;

	for(int i=0;i<=numero;i++){
		suma+=i;
	}
	std::cout<<"La suma de los "<<numero<<" primeros numeros naturales: "<<suma<<std::endl;
	return 0;
}
