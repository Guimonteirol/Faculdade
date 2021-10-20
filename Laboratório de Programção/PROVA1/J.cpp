#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {

    int N, M, P, t,c;

     int menor, topo  ; /*GRAVA QUEM É O MENOR ELEMENTO ATUAL*/
         int posicao; /*POSIÇÃO DE ONDE TÁ ESSE MENOR ELEMENTO*/
         bool troca;/*PARA SABER SE PRECISA TER TROCA OU NÃO*/
         int aux;

    cin>>N;
    int vet[N];
    for(int i = 0; i < N; i++){
        cin>>vet[i];
    }

    cin>>M>>P;

    if((N == P) || (P>N) || (N == M) || (M>N)){
        cout<<"Impossivel!"<<endl;
    }

    else if((N % 2 == 0 && M % 2 == 0) || (N % 2 != 0 && M % 2 != 0)){
        t = N/M;
        if(P == 1){
            c = 0;
        }
        else if( P == 2){
            c = t ;
        }
        else
         c = t  * P;
         /* POR EXEMPLO, SE O N for 9 (3 5 6 2 12 15 10 7 8) E EU QUISER ACESSAR A TERCEIRA PARTE
         VOU PEGAR O t (9/3 = 3) e MULTIPLICAR POR P (2), resultando em 6(c) - onde o array começa
         e vaia até o t(3) + c(6) = 9 - TAMANHO DO ARRAY. 

         */

        for( int i = c ; i < t + c ; i++ ){
             menor = vet[i];
             posicao = i;           /*NESSE FOR ELE SEGURA O VALOR MENOR COMO O i vat[i] = menor Ex.: i=0 -> 8 */
             troca = false;
             for(int j = i +1; j< t + c ; j++){  /*--AQUI O for TEM Q SER COMPELTO PARA MUDAR O i, ENT VARRE TODO O VETOR COM O j, 
                 PARA ACHAR O MENOR DE TODOS. i = 0; j = i -> menor = 8(i=0) val[j(1)] = 7/ NESSE CASO TEM A TROCA E aux GRAVA O 8 e coloca na posição j(1) e o 7 vai p o menor .
                 A var de posição vai gravar de onde veio o menor, para colocar o antigo menor no lugar do q estava o atual menor*/
                 if(vet[j] < menor){ /* AQUI EU PEGO O VALOR DO PRÓXIMO ELEMENTO E VERIFICO SE É MENOR Q O VALOR ANTERIOR (i)*/
                     menor = vet[j];
                     posicao = j;
                     troca = true;
                 }
             }
             if(troca == true){
                 aux = vet[i];
                 vet[i] = menor;
                 vet[posicao] = aux;
             }
         }
            for(int i = 0; i < N; i++){
             cout<<vet[i]<<" ";
          }

        }

        else
        cout<<"Impossivel!"<<endl;


    }


    

