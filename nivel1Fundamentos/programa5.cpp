#include<iostream>


int main(){
  
  double peso = 0.0;
  double altura = 0.0;
  std::cout<<"Ingresa tu peso: ";
  std::cin>>peso;
  std::cout<<"Ingresa tu altura: ";
  std::cin>>altura;
  std::cout<<"Indice de masa corporal: "<<peso/(altura*altura)<<std::endl;
  return 0;
}
