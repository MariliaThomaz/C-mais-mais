//Faça uma programa que leia duas notas de cada aluno e exiba a média. 
// Considere que a sala tenha 10 alunos e deverá ser utilizado um vetor para
// a nota1, um vetor para a nota2 e um vetor para media;

#include <iostream>

using namespace std;

int main(){

    double nota1 [10];
    double nota2 [10];
    double media[10];

    for(int i =0; i<10; i++){
        cout<<"Digite a primera nota:"<< i<<"- ";
            cin>>nota1[i];
      cout<<"Digite a cenda nota:"<< i<<"- ";
            cin>>nota2[i];

       // media[i]=((nota1[i+nota2]/2));
    }
    for(int i=0; i<10; i++){
        cout<<"\n Media: "<< ((nota1[i] + nota2[i])/2);
    }

return 0;
}
