#include <iostream>

int main(){
	
	int notas;

	std::cout<<"Ingresa la nota obtenida: ";
	std::cin>>notas;

	if(notas <= 100 && notas >= 90){
		std::cout<<"Tienes una clasificacion A."<<std::endl;
	}else if(notas < 90 && notas >= 80){
		std::cout<<"Tienes una clasificacion B."<<std::endl;
	}else if(notas < 80 && notas >= 70){
		std::cout<<"Tienes una clasificacion C."<<std::endl;
	}else if(notas < 70 && notas >= 60){
		std::cout<<"Tienes una clasificacion D."<<std::endl;
	}else if(notas < 60 && notas >= 50){
		std::cout<<"Tienes una clasificacion E."<<std::endl;
	}else if(notas < 50 && notas >= 0){
		std::cout<<"Tienes una clasificacion F."<<std::endl;
	}

	return 0;
}
