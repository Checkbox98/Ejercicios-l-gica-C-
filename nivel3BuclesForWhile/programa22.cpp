#include <iostream>

int main(){

	int numero=1;

	while(numero<=50){
		if(numero % 2 == 0){
			std::cout<<numero<<std::endl;
		}
		numero++;
	}

	return 0;
}
