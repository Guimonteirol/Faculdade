#include <iostream>
 #include <iomanip>
using namespace std;
 
int main() {
 
   double A , B, total = 0;
  cin>>A;
  cin>>B;

  if(A == 1){
    total = 4 *B;
  }
  else if(A== 2){
    total = 4.5*B;
  }
  else if(A== 3){
    total = 5*B;
  }
  else if(A== 4){
    total = 2*B;
  }
  else if(A== 5){
    total = 1.5 *B;
  }
  
 cout<<fixed<<setprecision(2)<< "Total: R$ "<<total<<endl;

    return 0;
}