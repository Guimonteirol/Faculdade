
#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main () {
    
    string N;
    getline(cin, N);

    int tam = N.size();
    
    for (int i = 0; i < tam; i++) {
        N[i] = toupper(N[i]);
    }
    for (int i = 0; i < tam; i++) {
        cout << N[i];
    }
    
    
    return 0;
}
