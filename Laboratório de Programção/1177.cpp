#include <iostream>
 
using namespace std;
 
int main() {
 
   int N[1000], t;
   cin>>t;
   for(int i =0, j = t; i<1000;i++){
       N[i] = i % t;
    
   }
   for(int i = 0; i <1000; i++){
       cout<<"N["<<i<<"] = "<<N[i]<<endl;
   }
   
 
    return 0;
}