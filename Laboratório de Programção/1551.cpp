#include <iostream>
#include <map>
 
using namespace std;


int main() {
 int n;
 int ocorrencias[30];
 cin >> n;
 string line;
 getline(cin, line);
 for(int i=0;i<n;i++){
  for(int j=0;j<=26;j++){
   ocorrencias[j] = 0;
  }
  int letras_usadas = 0;
  getline(cin, line);
  for(int j=0;j<line.length();j++){
   if(line[j]!= ' ' and line[j]!=','){
    int letter = line[j]-'a';
    if(ocorrencias[letter] == 0){
     ocorrencias[letter] = 1;
     letras_usadas++;
    }
   }
  }
  if(letras_usadas==26) cout << "frase completa" << endl;
  else if(letras_usadas>=13) cout << "frase quase completa" << endl;
  else cout << "frase mal elaborada" << endl;
 }
    return 0;
}