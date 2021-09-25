#include <iostream>
 
using namespace std;
 
int main() {
   int M, N, sum=0;
    cin>>M;
    cin>>N;

  while(M >0 && N >0){

    if(M>N){
      for(int i = N; i<=M; i++){
        sum = i + sum;
        cout<<i<<" ";

      }
      cout<<"Sum="<<sum<<endl;
    }

    else if(M<N){
      for(int i = M; i<=N; i++){
        sum = i + sum;
        cout<<i<<" ";

      }
      cout<<"Sum="<<sum<<endl;
    } 
    cin>>M;
    cin>>N;
    sum = 0;
}
    return 0;
}