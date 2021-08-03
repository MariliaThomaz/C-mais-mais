  #include<iostream>
  
  /*
  Programa 03 - Fazer um programa em "C++" que pergunte um valor em graus
Fahrenheit e imprime no vídeo o correspondente em graus 
Celsius usando as fórmulas que seguem.
 
a) Usar uma variável double para ler o valor em Fahrenheit e
a fórmula C=(f-32.0) * (5.0/9.0)
*/
using namespace std;

int main()
{
 double temperatura =0.0,  Tempero = 0.0;
    cout<< "Digite Fahrenheit: ";
    cin >> temperatura;

cout << "Resultado: " << ( (temperatura -32.0)* (5.0/9.0));


    return 0;
}



