#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 double N1 , N2 , N3, N4,exame,recu ;
    cin>>N1;
    cin>>N2;
    cin>>N3;
    cin>>N4;

  double media = (N1*2+N2*3+N3* 4+N4*1)/10;
  cout<<fixed<<setprecision(1)<<"Media: "<<media<<endl;

  if(media>=7){
    cout<<"Aluno aprovado."<<endl;
  }
  else if(media<5){
    cout<<"Aluno reprovado."<<endl;
  }
  else{
    cout<<"Aluno em exame."<<endl;
    cin>>exame;
    cout<<"Nota do exame: "<<exame<<endl;

    recu = (exame + media)/2;
    if(recu>=5){
      cout<<"Aluno aprovado."<<endl;
      cout<<"Media final: "<<recu<<endl;

    }
    else{
      cout<<"Aluno reprovado."<<endl;
      cout<<"Media final: "<<recu<<endl;
    }

  }
    return 0;
}