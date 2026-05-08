#include <iostream>

int main(){

	int tablaMultiplicar;

	std::cout<<"Indique la tabla de multiplicar a mostrar: ";
	std::cin>>tablaMultiplicar;

	for(int i=1;i<=10;i++){
		std::cout<<tablaMultiplicar<<" x "<<i<<" = "<<tablaMultiplicar*i<<std::endl;
	}

	return 0;
}
