#include <iostream>
 
using namespace std;
 
int main() {
 
     int A, N;
    int soma = 0;
    
    while(cin >> A){
              cin >> N;
              while(N <= 0){ 
                cin >> N;
                }
              for(int i = 0; i < N; i++){
                       soma += (A + i);
              }
              cout << soma << endl;
              soma = 0;
    }
 
    return 0;
}