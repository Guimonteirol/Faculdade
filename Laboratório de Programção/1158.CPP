#include <iostream>
 
using namespace std;
 
int main() {
 
   int N, x, y,soma;
    cin >> N;
    
    for(int i = 0; i < N; i++){
            cin >> x;
            cin >> y;
            
            soma = 0;
            
            if(x%2 != 0){
                   soma+=x;
            }else{
                   x+=1;
                   soma += x;
            }
            
            for(int i=0; i < y-1; i++){
                    x += 2; 
                    soma += x;           
            }
            
            cout << soma << endl;
    }
 
    return 0;
}