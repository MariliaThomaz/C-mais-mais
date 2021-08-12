//faça um progma  que  leria e exiba a nota   uma sala 10 alunos.

#include <iostream>

using namespace std;

int main()

{
    double nota= 0.0;
    for(int i =0;  i<10; i++){

        cout<<"Digite nota:"<<i <<" ";
       // cout<<"Digite nota:"<<i+1 <<" "; deste mdo não vai mottra o 0 ZERO
        cin>> nota;
    }
    for(int i =0;  i<10; i++){

        cout<< i <<" nota - " << nota <<"\n";
      
    }

    return 0;

}