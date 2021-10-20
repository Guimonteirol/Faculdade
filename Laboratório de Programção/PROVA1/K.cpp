#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {

    int N, P, pos;
    bool resp = false;
    cin>>N;
    int vet[N];

      for(int i = 0; i<N; i++){
        cin>>vet[i];
    }

     cin>>P;
         for(int i = 0; i<N; i++){
             if(P == vet[i]){
                 pos = i;
                 cout<<i<<endl;
                 resp = false;
                 break;
             }
             else{
                resp = true;
             }  
      }
        if(resp == true){
             cout<<"Nao foi visitado ainda."<<endl;
        }
            resp = false;

            while(P != 0){
                cin>>P;
         for(int i = 0; i<N; i++){
             if(P == vet[i]){
                 pos = i;
                 resp = false;
                 cout<<i<<endl;
             }
             else{
                resp = true;
             }  
         }
          if(resp == true){
             cout<<"Nao foi visitado ainda."<<endl;
        }

    }

}