#include <iostream>
 
using namespace std;
 
int main() {

    int P, T;
    bool s = false;

    cin>>T;
    cin>>P;
    while(P != 0){
      cin>>P;

        if(P >T){
            s = true;
        }
    }

    if(s == true)
    cout<<"ALARME"<<endl;
    else
    cout<<"O Havai pode dormir tranquilo"<<endl;

}