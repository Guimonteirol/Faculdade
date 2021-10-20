#include <iostream>
 
using namespace std;
 
int main() {

    int x, y, x1, y1, N;
    bool yes = false, yas = false;

    cin>>x>>y;
    cin>>x1>>y1;
    cin>>N;

    for(int i = x + 1; i<= y ; i++){
        if(N == i){
            yes = true;
        }
    }

     for(int i = x1 ; i< y1  ; i++){
        if(N == i){
            yas = true;
        }
    }

    if((yes == true) && (yas == true)){
        cout<<"Ambos!"<<endl;
    }
     else if(yes == true){
        cout<<"Primeiro intervalo!"<<endl;
    }
     else if(yas == true){
        cout<<"Segundo intervalo!"<<endl;
    }
    else{
        cout<<"Nenhum!"<<endl;
    }



}