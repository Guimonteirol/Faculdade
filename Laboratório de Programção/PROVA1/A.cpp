#include <iostream>
 
using namespace std;
 
int main() {

    int data, dia, ano, mes;

    cin>>data;

    ano = data / 365;
    mes  = (data%365)/30;
    dia = ((data%365)%30)/1;

    cout<<ano<<" ano(s)"<<"\n"<<mes<<" mes(es)"<<"\n"<<dia<<" dia(s)"<<endl;


}
