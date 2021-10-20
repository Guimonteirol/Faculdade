#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {

    int M[3][3];
    int somaL, somaC, somaD;

    for(int i = 0; i<3; i++){
        for(int j = 0 ; j<3 ; j++){
            cin>>M[i][j];
        }
    }

    somaL = somaC = somaD = 0;
      for(int i = 0; i<3; i++)  // soma linha
        somaL += M[0][i];
      for(int i = 0; i<3; i++) // soma coluna
         somaC += M[i][0];
      for(int i = 0; i<3; i++) // soma diagonal
         somaD += M[i][i];

    if( somaL == somaC && somaL == somaD){
        cout<<"eh um quadrado magico"<<endl;
    }
    else
        cout<<"nao eh um quadrado magico"<<endl;
        
      

}