#include <iostream>

int main(){
	
	int anio;
	std::cout<<"Ingresa el anio en cuestión: ";
	std::cin>>anio;
	if(anio % 100 != 0 && anio % 4 == 0){
		std::cout<<"El anio: "<<anio<<" es bisiesto"<<std::endl;
	}else{
		std::cout<<"El anio: "<<anio<<" no es bisiesto"<<std::endl;
	}
	return 0;
}
