#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
  double volume, R;
  double pi = 3.14159;
  cin>>R;

  volume = (4/3.0) * pi * R*R*R;

  cout<<fixed<<setprecision(3)<<"VOLUME = "<<volume<<endl;
 
 
    return 0;
}