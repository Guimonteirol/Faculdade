#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
  double area, raio;
  double n =3.14159;

  cin>>raio;

  area = n*(raio*raio);

  cout<< fixed << setprecision(4)<<"A="<<area <<endl;
    return 0;
}