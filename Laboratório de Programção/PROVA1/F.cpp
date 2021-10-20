#include <iostream>
#include <cstdlib>

using namespace std;
 
int Catalan(int N){
    if (N <= 0)
        return 1;   
    else
        return (2 * (2*N - 1) * Catalan(N - 1)) / (N + 1);               
}

int main() {

    int N;
    int X, pos;
    bool r = false;
    cin>>N>>X;
    int vet [N];

    for(int i = 0; i<N; i++){

        vet[i] = Catalan(i); 

        if(X == vet[i]){
            pos = i;
            r = false;
            break;
        }
        
        else {
            r = true;
        }
    }
        int poss = pos + 1;
        if(r == false)
         cout<<X<<" esta na posicao "<< poss <<endl;
         if(r == true){
          cout<<X<<" nao existe"<<endl;
         }

}