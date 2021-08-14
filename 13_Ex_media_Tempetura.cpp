//Faça uma programa que leia as temperaturas de 10 dias, e exiba a maior delas,
//exibir também a média aritmética entre a maior e a menor temperatura
//a temperatura será armazenada num vetor do tipo double


#include <iostream>

using namespace std;

int main(){




 int  temperatura[4];
int menor; 
int  maior;
        for(int i =0; i<4; i++){
            cout<<"Digite a temperatura "<< i<< "- ";
            cin>> temperatura[i];

        }
        maior = temperatura[0];  // quando vc não sabe 
        //achar o valor maio vc pega  o primero e depoisa campara

        menor = temperatura[0];


        for( int i=0; i<4; i++){
          if(temperatura[i] > maior)
          {
            maior = temperatura[i];    
            } 

        }  
            
        cout<<"A maior temperutura foi: "<< maior;

    for( int i=0; i<4; i++){
          if(temperatura[i] < menor)
          {
            menor = temperatura[i];    
            } 

        } 

        cout<<"\n A Menor temperutura foi: "<< menor;

    cout<<"\n Media: "<< ((menor + maior)/2);
           

     return 0;
}