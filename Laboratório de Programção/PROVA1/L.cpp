#include <iostream>

using namespace std;
 
int main() {

     int X,  N;
    bool resp = false;

    cin>>X;
    int I[X];
    
    for(int i = 0; i<X; i++){
        cin>>I[i];
    }
    
    cin>>N;
    int R[N];
    
    for(int j = 0; j<N; j++){
        cin>>R[j];
    }

    for(int i =0 ; i < X; i++){
      for(int j = 0; j<N; j++ ){
        if(R[j] == I[i]){
            resp = true;
        }
      }

    }
    if(resp == true){
        cout<<"Preparem o vidro de dragao!!!"<<endl;
    }
    else{
        cout<<"E assim termina nossa vigilia"<<endl;
    }
}