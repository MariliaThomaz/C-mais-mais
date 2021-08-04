/*
Programa 04 - Fazer um programa em C++ que pergunta um valor em metros
e imprime o correspondente em decímetros, centímetros e
milímetros.

1 metro = 10 decímetros
1 metro = 100 centímetros
1 metro = 1000 milimetros

*/
#include <iostream>
int main()
{
   using namespace std;
double Metro =0.0;


 cout<<"Didite o valor  em metros => ";
 cin >> Metro;

    cout<<"O valor: "<< Metro;
    cout<<"\n Metros em Decimetros =>"<< Metro*10;
    cout<<"\n Metros em Centimetros =>"<< Metro*100;
    cout<<"\n Metros em Militro =>"<< Metro*1000;

// o bara n ele  usado para  pular  linha --> \n
    return 0;
}
