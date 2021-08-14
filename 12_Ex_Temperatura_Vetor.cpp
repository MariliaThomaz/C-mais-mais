//Faça uma programa que leia as temperaturas de 10 dias, e exiba a maior delas,
//a temeratura será armazenada num vetor do tipo double


#include <iostream>

using namespace std;

int main(){
 //int dia[10];
 int  temperatura[4];
 //int valor =0; 
int  maior;
        for(int i =0; i<4; i++){
            cout<<"Digite a temperatura "<< i<< "- ";
            cin>> temperatura[i];

        }
        maior = temperatura[0];  // quando vc não sabe 
        //achar o valor maio vc pega  o primero e depoisa campara

        for( int i=0; i<4; i++){
          if(temperatura[i] > maior)
          {
            maior = temperatura[i];    
            }
        } 
            
        cout<<"A maior temperutura foi: "<< maior;
           

return 0;
}