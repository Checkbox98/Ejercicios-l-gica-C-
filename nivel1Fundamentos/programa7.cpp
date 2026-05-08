#include<iostream>

int main(){
  
  double notaA,notaB,notaC;
  double promedio;
  
  std::cout<<"Ingresa la nota A: ";
  std::cin>>notaA;
  std::cout<<"Ingresa la nota B: ";
  std::cin>>notaB;
  std::cout<<"Ingresa la nota C: ";
  std::cin>>notaC;
  promedio = (notaA+notaB+notaC)/3;
  std::cout<<"El promedio de las notas es: "<<promedio<<std::endl;
  return 0;
}
