//Programa ordenação
 
 //VIDEO 3 DIA 06/08/2021 TEMPO 00;57:27

#include <iostream>

using namespace std;

int main(){
    int vetor[5], troca=0;
    
    for (int i=0; i<5; i++){
        cout<<"Digite o valor: ";
        cin>>vetor[i];
    }
    
    // 5 4 3 2 1 
    // 4 5 3 2 1 
    // 4 3 5 2 1 
    // 4 3 2 5 1
    // 4 3 2 1 5
    
    // 4 3 2 1 5
    // 3 4 2 1 5
    // 3 2 4 1 5
    // 3 2 1 4 5
    
    // 3 2 1 4 5
    // 2 3 1 4 5
    // 2 1 3 4 5

    //Laços de repetição para efetuar a ordenação (A-Z) - SORT
    for (int i=0; i<5; i++){                // 4
        for (int j=0; j<5; j++){            // 4 3 2 1 5 
            if (vetor[i]<vetor[j]){
                troca = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = troca;
            }
        }
    }
    
    
    for (int i=0; i<5; i++){
        cout<<" "<<vetor[i];
    }
    
    return 0;
}
