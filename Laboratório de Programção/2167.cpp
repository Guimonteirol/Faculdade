#include <iostream>
 
using namespace std;
 
int main() {
 
    int N;
    cin>>N;
    int x[N];

    for(int i =0; i<N;i++){
        cin>>x[i];
    }
    bool v = true;
    for(int i = 0; i<N; i++){
        if(x[i+1]<x[i]){
            cout<<i+2<<endl;
            v = false;
            break;
        }
    }
    if(v){
            cout<<0<<endl;
        }
  
    return 0;
}