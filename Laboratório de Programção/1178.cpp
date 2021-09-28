#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
    
    double N[100], v;
    cin>>v;

    for(int i =0; i<100; i++){
        N[i] = (N[i - 1])/2;
        N[0] = v;
        cout<<fixed<<setprecision(4)<<"N["<<i<<"] = "<<N[i] <<endl;
    }
    
    return 0;
}