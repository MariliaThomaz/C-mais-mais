/*

Programa 06 - Fazer um programa que leia duas notas e calcule a média aritmética,
além de informar a média o programa deverá informar se o aluno está aprovado, ou
reprovado, para isto a média > = 7 aprova o aluno, a média < 7 reprova o aluno

*/

//Biblioteca que indentifica a programação C++
#include <iostream>

using namespace std;

int main()
{
   double media =0.0, nota1=0.0, nota2=0.0;
 
    cout<<"Digite a  primeroa nota: ";
    cin>> nota1;

    cout<<"Digite a segunda nota: ";
    cin>>nota2;
   
   media =( nota2+ nota1) /2;


    
        if(media>= 7){
            cout<<"Apravodo o aluno";

        }
        else if (media < 7){
            cout<<"Reprovado o aluno";
        }
     
        
    return 0;
}
