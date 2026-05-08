#include <iostream>
#include <string>

int main(){
	
	bool bandera = false;
	std::string username;
	std::string password;

	while(bandera == false){
		std::cout<<"---- Login ----"<<std::endl;
                std::cout<<"Usuario: ";
                std::cin>>username;
                std::cout<<"Clave: ";
                std::cin>>password;

		if(username == "admin" && password == "abc123"){
			bandera = true;
		}else{
			std::cout<<"Datos incorrectos, intente de nuevo..."<<std::endl;
		}
	}

	std::cout<<"Bienvenidos al programa :D"<<std::endl;

	return 0;
}
