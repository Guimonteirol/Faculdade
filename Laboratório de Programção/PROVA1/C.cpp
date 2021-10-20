#include <iostream>
 
using namespace std;
 
int main() {

    int A1, A2, A3;

    cin>>A1>>A2>>A3;

if(A1 + A2 + A3 == 180){
    if((A1 > 90) || (A2 > 90) || (A3 > 90)){
        cout<<"Triangulo Obtusangulo!"<<endl;
    }
    
    if((A1 < 90) && (A2 < 90)  && (A3<90)){
        cout<<"Triangulo Acutangulo!"<<endl;
    }
    if((A1 == 90) || (A2 == 90) || (A3 == 90)){
        cout<<"Triangulo Retangulo!"<<endl;
    }
}
    else
        cout<<"Nao eh triangulo!"<<endl;
    

}