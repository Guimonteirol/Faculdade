#include <iostream>
 
using namespace std;
 
int main() {
 int IN, FIM,hi,hf;

  cin>>IN;
  cin>>FIM;
  if(IN == 0 ){
    IN = 24;
  }
  if(FIM == 0){
     FIM = 24;
  }
    if(IN == FIM){
    cout<<"O JOGO DUROU 24 HORA(S)"<<endl;
  }
     if(IN < FIM){
    hf = FIM - IN;
    cout<<"O JOGO DUROU "<<hf<<" HORA(S)"<<endl;
  }
    if(IN > FIM){
    hi = 24 - IN;
    hf = hi + FIM;
    cout<<"O JOGO DUROU "<<hf<<" HORA(S)"<<endl;
  }
    
 
    return 0;
}