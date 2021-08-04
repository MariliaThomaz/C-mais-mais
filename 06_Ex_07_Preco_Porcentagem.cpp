/*

Programa 07 - Fazer um programa em "C++" que lê o preço de um produto e
inflaciona esse preço em 10% se ele for menor que 100 e em
20% se ele for maior ou igual a 100.

*/

#include <iostream>

using namespace std;

int main()
{
    double produto =0.0;

        cout<<"Digite o valor do  produto: ";
        cin>>produto;
//produto = produto + produto*0.1; --> estoutro metodo
            if(produto<100){
             cout<<"O preco final : "<< produto*1.1;// este  1.1 é mesma  coisa  que 10%
            }
            if(produto>=100){
                cout<<"O preco final: "<< produto*1.2; // este é 20%
            }




    return 0;
}
