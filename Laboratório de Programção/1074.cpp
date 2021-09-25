#include <iostream>
 
using namespace std;
 
int main() {
 
    int N;
  cin>>N;
  int J[N] ;
  for(int i =0 ; i< N; i++){
    cin>>J[i];
  }

    for(int i =0 ; i< N; i++){
    if(J[i]==0){
      cout<<"NULL"<<endl;
    }
    else if (J[i]%2==0){
      if(J[i]>0){
        cout<<"EVEN POSITIVE"<<endl;
      }
      else{
        cout<<"EVEN NEGATIVE"<<endl;
      }
    }
    else{
      if(J[i]>0){
        cout<<"ODD POSITIVE"<<endl;
      }
      else{
        cout<<"ODD NEGATIVE"<<endl;
      }

    }
  }
 
    return 0;
}