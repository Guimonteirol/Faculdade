#include <iostream>
 
using namespace std;
 
int main() {
 int X;
 int Y,soma=0;
  cin>>X;
  cin>>Y;

  if(X>=Y){
    for(int i = Y + 1; i<X ; i++){
      if(i%2!=0){
        soma = i + soma;
      }
    }
  }
  else if(X<Y){
    for(int i = X + 1; i<Y;i++){
       if(i%2!=0){
        soma = i + soma;
      }
    }
  }
   cout<<soma<<endl;

 
    return 0;
}