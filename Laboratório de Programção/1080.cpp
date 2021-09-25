#include <iostream>
 
using namespace std;
 
int main() {
 
     int N = 100, n, maior = -999, pos;
    for(int i = 1; i<=N; i++){
        cin>> n;
        if(n > maior){
            maior = n;
            pos = i;
        }
    }
    cout<<maior<<endl;
    cout<<pos<<endl;

 
    return 0;
}