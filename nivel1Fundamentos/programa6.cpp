#include<iostream>

int main(){
  int valorA = 2;
  int valorB = 5;
  
  std::cout<<"Valor de A: "<<valorA<<std::endl;
  std::cout<<"Valor de B: "<<valorB<<std::endl;
  valorA = valorA + valorB;
  valorB = valorA - valorB;
  valorA = valorA - valorB;
  std::cout<<"Valor de A: "<<valorA<<std::endl;
  std::cout<<"Valor de B: "<<valorB<<std::endl;
  return 0;
}
