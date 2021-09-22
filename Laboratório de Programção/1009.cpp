#include <iostream>
 #include <iomanip>
using namespace std;
 
int main() {
 string nome;
  double sal, ven, comissao;
  
  cin>>nome;
  cin>>sal;
  cin>>ven;

  comissao = (0.15*ven)+sal;

  cout << fixed<< setprecision(2)<<"TOTAL = R$ " <<comissao<<endl;
 
    return 0;
}