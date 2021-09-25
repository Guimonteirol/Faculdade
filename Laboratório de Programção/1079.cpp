#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    int N;
  double n1=0,n2=0,n3=0;
  cin>>N;
  double m[N];
  for(int i=0; i<N; i++){
   

    cin>>n1;
    cin>>n2;
    cin>>n3;
    n1 = n1*2;
    n2 = n2*3;
    n3 = n3*5;

    m[i] = (n1+n2+n3)/10;

  }

  for(int i=0; i<N; i++){
    cout<<fixed<<setprecision(1)<<m[i]<<endl;
  }

 
    return 0;
}