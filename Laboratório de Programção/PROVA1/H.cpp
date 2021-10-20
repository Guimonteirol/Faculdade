#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {

    int N;
    cin>>N;
    double X[N][N], soma = 0.0, media = 0.0, m;
    int i, j;
    char op;

    cin>>op;
    for(i = 0; i<N; i++){
        for(j = 0; j<N; j++){
            cin>>X[i][j];
        }
    }
    if(op == 'S'){
     for(i = 0; i<N; i++){
        for(j = i + 1; j<N; j++){
            soma += X[i][j];
        }
    }
    cout<<fixed<<setprecision(2)<<soma<<endl;
    }
    if(op == 'M'){
        for(i = 0; i<N; i++){
        for(j = i + 1; j<N; j++){
            soma += X[i][j];
            m = ((N*N) - N)/2;
            media = soma/m;
        }
    }
    cout<<fixed<<setprecision(2)<<media<<endl;
    }
}