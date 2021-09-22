#include <iostream>
 
using namespace std;
 
int main() {
 
    string A, B, C;
  cin>>A;
  cin>>B;
  cin>>C;

  if(A == "vertebrado"){
    if(B == "ave"){
      if(C =="carnivoro"){
        cout<<"aguia"<<endl;
      }
      else if(C == "onivoro"){
        cout<<"pomba"<<endl;
      }
    }
    else{
      if(C == "onivoro"){
        cout<<"homem"<<endl;
      }
      else if(C == "herbivoro"){
        cout<<"vaca"<<endl;
      }
     
    }
  }
  else if(A == "invertebrado"){
      if(B =="inseto"){
          if(C == "hematofago"){
            cout<<"pulga"<<endl;
      }
      else if(C== "herbivoro"){
          cout<<"lagarta"<<endl;
      }
      }
      else if(B =="anelideo"){
          if(C=="hematofago"){
            cout<<"sanguessuga"<<endl;
      }
      else if(C == "onivoro"){
        cout<<"minhoca"<<endl;
      }
      }
  }

 
    return 0;
}