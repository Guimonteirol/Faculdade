#include <iostream>
 
using namespace std;
 
int main() {
 
    int A[3];
  int menor, maior, meio;
  menor= 9999;
  maior=-9999;
  meio = 0;
  

  for(int i = 0 ; i<3; i++){
      cin>>A[i];
     
  }
  for(int i = 0 ; i<3; i++){
     if(A[i] < menor){
        menor = A[i];
      }
       if(A[i]> maior){
        maior = A[i];
      }
}
  for(int i = 0 ; i<3; i++){
   if(A[i] != menor && A[i] != maior){
       meio = A[i];
      }
}
     cout<<menor<<endl;
     cout<<meio<<endl;
     cout<<maior<<endl;
     cout<<endl;
      for(int i =0; i<3;i++){
        cout<<A[i]<<endl;
      
  }
  
 
    return 0;
}