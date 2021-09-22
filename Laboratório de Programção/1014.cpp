#include <iostream>
 #include <iomanip>
using namespace std;
 
int main() {
 
   double dt, comb, cons;

  cin>>dt;
  cin>>comb;

  cons = dt/comb;

  cout<<fixed<<setprecision(3)<<cons<<" km/l"<<endl;
 
    return 0;
}