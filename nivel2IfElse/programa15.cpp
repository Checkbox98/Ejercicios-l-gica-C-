#include <iostream>

int main(){
	
	bool bandera = false;
	int opcion,numeroA,numeroB;

	while(bandera == false){
         	std::cout<<"1) Suma. "<<std::endl;
                std::cout<<"2) Resta. "<<std::endl;
                std::cout<<"3) Multiplicacion. "<<std::endl;
                std::cout<<"4) Division. "<<std::endl;
                std::cout<<"5) Salir."<<std::endl;
                std::cout<<"Ingresa una opcion: ";
                std::cin>>opcion;

	
		switch(opcion){

			
			case 1:
				std::cout<<"Ingresa el valorA: ";
				std::cin>>numeroA;
				std::cout<<"Ingresa el valorB: ";
				std::cin>>numeroB;
				std::cout<<"Resultado: "<<numeroA+numeroB<<std::endl;
				break;
			case 2:
				std::cout<<"Ingresa el valorA: "; 
                                std::cin>>numeroA;
                                std::cout<<"Ingresa el valorB: ";
                                std::cin>>numeroB;
                                std::cout<<"Resultado: "<<numeroA-numeroB<<std::endl;
				break;
			case 3:
				std::cout<<"Ingresa el valorA: "; 
                                std::cin>>numeroA;
                                std::cout<<"Ingresa el valorB: ";
                                std::cin>>numeroB;
                                std::cout<<"Resultado: "<<numeroA*numeroB<<std::endl;
				break;
			case 4:
				std::cout<<"Ingresa el valorA: "; 
                                std::cin>>numeroA;
                                std::cout<<"Ingresa el valorB: ";
                                std::cin>>numeroB;
                                std::cout<<"Resultado: "<<numeroA/numeroB<<std::endl;
				break;
			case 5:
				bandera = true;
				break;
			default:
				std::cout<<"No existe esa opcion intente de nuevo...."<<std::endl;
				break;
		}

	}

	std::cout<<"Gracias por ejecutar el programa :D"<<std::endl;

	return 0;
}
