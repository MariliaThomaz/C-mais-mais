//Faça um programa que leia a nota de uma sala de 10 aluno

#include <iostream>

using namespace std;

int main(){
    int soma =0;
    
      int vaslor[10] ;
    
    for (int i=0; i<10; i++){
        cout<<"Digite avalor "<<i+1<<": ";
        cin>>vaslor[i];
        
        soma= vaslor + vaslor;
        cin>> soma;
       //jcjcortezbr@gmail.com
        
    }
    cout<<"SOMA  É "<< soma;

    return 0;
}
