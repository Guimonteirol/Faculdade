#include <iostream>
 
using namespace std;
 
int main() {
 
   int inter, gremio,resp;
    int emp = 0,viti = 0, vitg = 0, cont=0;

    cin>>inter>>gremio;
    cont = 1;
    if(inter>gremio){
      viti = viti + 1;
    }
    else if(inter == gremio){
      emp = emp + 1;
    }
    else if(inter < gremio){
      vitg = vitg + 1;
    }
    cout<<"Novo grenal (1-sim 2-nao)"<<endl;
    cin>>resp;
    
    
    while(resp == 1){
      cin>>inter>>gremio;
      cont = cont + 1;
       if(inter>gremio){
      viti = viti + 1;
    }
    else if(inter == gremio){
      emp = emp + 1;
    }
    else if(inter < gremio){
      vitg = vitg + 1;
    }
      cout<<"Novo grenal (1-sim 2-nao)"<<endl;
      cin>>resp;
    }
    cout<<cont<<" grenais"<<endl;
    cout<<"Inter:"<<viti<<endl;
    cout<<"Gremio:"<<vitg<<endl;
    cout<<"Empates:"<<emp<<endl;
     if(viti > vitg){
        cout<<"Inter venceu mais"<<endl;
      }
      else if(vitg > viti){
        cout<<"Gremio venceu mais"<<endl;
      }
      else if(viti == vitg){
        cout<<"Nao houve vencedor"<<endl;
      }

 
    return 0;
}