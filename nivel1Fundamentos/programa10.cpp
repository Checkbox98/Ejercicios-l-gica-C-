#include <iostream>

int main(){
	int  minutos;
	int  horas;
	int  resto;
	std::cout<<"Ingresa la cantidad de minutos a convertir en horas: ";
	std::cin>>minutos;
	horas = minutos / 60;
	resto = minutos % 60;
	std::cout<<"Conversion: Min: "<<minutos<<" min."<<std::endl;
	std::cout<<"Tiempo: Hrs: "<<horas<<" min: "<<resto<<std::endl;
	
	return 0;
}
