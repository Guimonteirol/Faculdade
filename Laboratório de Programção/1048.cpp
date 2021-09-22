#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
     double s,r, reajuste, novos;
    cin>>s;
  if(s<= 400 ){
    r = s * 0.15;
    novos = s + r;
    cout<<fixed<<setprecision(2)<<"Novo salario: "<<novos<<endl;
    cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<r<<endl;
    cout<<"Em percentual: 15 %"<<endl;
  }
  else if(s>400 && s<=800 ){
    r = s * 0.12;
    novos = s + r;
    cout<<fixed<<setprecision(2)<<"Novo salario: "<<novos<<endl;
    cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<r<<endl;
    cout<<"Em percentual: 12 %"<<endl;
  }
  else if(s>800 && s<=1200 ){
    r = s * 0.10;
    novos = s + r;
    cout<<fixed<<setprecision(2)<<"Novo salario: "<<novos<<endl;
    cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<r<<endl;
    cout<<"Em percentual: 10 %"<<endl;
  }
  else if(s>1200 && s<=2000 ){
      r = s * 0.07;
    novos = s + r;
    cout<<fixed<<setprecision(2)<<"Novo salario: "<<novos<<endl;
    cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<r<<endl;
    cout<<"Em percentual: 7 %"<<endl;
  }
  else if(s>2000 ){
    r = s * 0.04;
    novos = s + r;
    cout<<fixed<<setprecision(2)<<"Novo salario: "<<novos<<endl;
    cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<r<<endl;
    cout<<"Em percentual: 4 %"<<endl;
  }
 
    return 0;
}