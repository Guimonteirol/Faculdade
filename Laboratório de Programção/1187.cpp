  
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double M[12][12];
    char O;
    double soma = 0.0;
    
    cin >> O;
    
    for(int i = 0; i < 12; i++){
            for(int j = 0; j < 12; j++){
                   cin >> M[i][j];
            if(j > i && (j+i) < 11){
                 soma += M[i][j];
            }
            }
   }
    
    if(O == 'S')
          cout<<fixed<<setprecision(1)<<soma<<endl;
    else{
          soma = soma / 30;
         cout<<fixed<<setprecision(1)<<soma<<endl;
    }
   
}