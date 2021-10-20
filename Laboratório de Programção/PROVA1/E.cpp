#include <iostream>
 
using namespace std;
 
int main() {

    int N, S, somH = 0, somM = 0;

    cin>> N;

    for(int i = 0; i<N ; i++){

        cin>> S;

        if(S == 1){
            somH += 1;
        }
        else
            somM +=1;
    }
    cout<<somH<<endl<<somM<<endl;

}