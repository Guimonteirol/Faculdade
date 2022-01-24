#include <iostream>
using namespace std;
int main() {
int i, j, N, M, p, esq, dir, meio, dim=0;
cin >> N;
int v[N];
for(i=0; i < N; i++) //Lê vetor ordenado
cin >> v[i];
cin >> M;// qtd de casos de teste
for(i=0; i < M; i++) {
cin >> p;//chave a ser procurada
esq=0; dir=N-1;
while(esq <= dir) {// Busca binária
meio = (esq + dir)/2;
if(p < v[meio])
dir = meio-1;
else if(p == v[meio])
break;
else
esq = meio+1;
}
if(v[meio] == p)
    dim++;
}
if (dim > 0){
    cout << "Preparem o vidro de dragao!!!" << endl;
}
if (dim == 0){
    cout << "E assim termina nossa vigilia" << endl;
}
return 0; 
}