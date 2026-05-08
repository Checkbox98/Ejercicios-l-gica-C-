#include<iostream>

int main(){
  const double monedaDivisa = 490.2;
  double monedaLocal,cambioMoneda;
  
  std::cout<<"Ingresa el monto en Bs: ";
  std::cin>>monedaLocal;
  cambioMoneda = monedaLocal/monedaDivisa;
  std::cout<<"Cambio $ BCV: "<<monedaDivisa<<"Bs."<<std::endl;
  std::cout<<"Monto en Bs: "<<monedaLocal<<"Bs."<<std::endl;
  std::cout<<"Monto en $: "<<cambioMoneda<<"$."<<std::endl;
  
  return 0;
}
