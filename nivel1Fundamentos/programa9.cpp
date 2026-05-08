#include <iostream>

int main(){
	const double iva = 0.20;
	double precio;
	double totalPrecio;
	
	std::cout<<"Ingresa el precio del producto: ";
	std::cin>>precio;
	totalPrecio = precio + (precio*iva);
	std::cout<<"Precio del producto: "<<precio<<"$."<<std::endl;
	std::cout<<"Precio total+IVA: "<<totalPrecio<<"$."<<std::endl;
	
	return 0;
}
