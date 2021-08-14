//Faça uma programa que leia as 10 valores, e exiba a somatoria dos valores
//lidos


#include <iostream>

using namespace std;

int main(){
 int acumulado =0;// ele acumoa varive ele soma deles
  int numero[10];

        for(int i=0; i<10; i++){//i mais mais é  um empremetatoer
            cout<<"Digite numero: "<<i<<" -";
            cin>>numero[i];
            acumulado = acumulado + numero[i];
            //acumulador é quando vc colca duas variveis
            //igulando as suas que são igual ela tem
            //caratetistica acumuladora
            //e coma o valore da varivel que quer 

        }
            cout<<"O vamor da soma: "<< acumulado;//eziba soma
    
        return 0;
}