#include<iostream>

int main(){
  double celsius = 0.0;
  std::cout<<"Ingresa la temperatura en Celsius: ";
  std::cin>>celsius;
  std::cout<<"Temperatura Celsius: "<<celsius<<std::endl;
  std::cout<<"Temperatura Farenheit: "<<(celsius*1.8)+32<<std::endl;
  return 0;
}
