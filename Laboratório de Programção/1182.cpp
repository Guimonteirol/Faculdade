#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main(){

 double M[12][12];
 int C;
 double media = 0.0, somaC = 0.0; 
 char T;

    cin>>C>>T;

 for(int i = 0; i<12; i++){
     for(int j = 0; j<12;j++){
         cin>>M[i][j];
     }
 }


    if(T =='S'){
        for(int i = 0; i<12; i++){
            somaC += M[i][C];
        }
        cout<<fixed<<setprecision(1)<<somaC<<endl;
    }
    else{
        for(int i = 0; i<12; i++){
            somaC += M[i][C];  //SOMANDO OS VALORES DA LINHA i (1 a 12) DA COLUNA 'C'
            media = somaC / 12.0;
        }
        cout<<fixed<<setprecision(1)<<media<<endl;
    }



}
    


