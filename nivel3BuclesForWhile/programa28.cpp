#include <iostream>

int main(){

	int fibonacci = 0;
	int aux = 1;

	for(int i=0; i<10; i++){
		aux += fibonacci;
		fibonacci = aux - fibonacci;
		std::cout<<fibonacci<<" - ";
	}

	return 0;
}
