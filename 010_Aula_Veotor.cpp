#include <iostream>

using namespace std;
// O vetor tem dua  maneira de trabalhar,  que  vamos ver  é só 
//maneira estaticas  o que srtisa isto?
//Uma ves  resavado espaço de memoria do espço 
// este espaço sera constante no programa 
// algum mometo  vamosa  amprender  resavar estes  espaço de  manei  dinamica
// logo vamosa amprender  resavar tempo de execulção 
// en ces  de ter uma poção fixa  ele pode quadar  um  posição varivel
// Sumpndo que voce  irar pedir usario digitar quantas notas  sera armazenada.
// e  com isto deixa eu sistema mias  inteligente 
// emves  de deixa  um sitema  que fixo de dobre  quantidade armazenameto.

int main()

{
    int  nota [10]; // aqui nosa  esmosa resvando espaço na  memoria  que resbra valores do tipo inteiro.


    for(int i =0;  i<10; i++){

       
         cout<<"Digite nota:"<<i+1 <<" ";// deste mdo não vai mottra o 0 ZERO
        cin>> nota[i];// aquie amazendo  o  que foi digitado
    }
    for(int i =0;  i<10; i++){

        cout<<"\n A nota ["<<i+1<<"]:  "<<nota[i];//exibindo 
      
    }
}