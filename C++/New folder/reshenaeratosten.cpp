#include <iostream>
bool chisla[10000000];
using namespace std;
int main (){
    long long br=0,dokolko;
dokolko=10000000;
for(long long o=2;o<dokolko;o++){
    if(!chisla[o]){
        for(long long i=o*2;i<dokolko;i=i+o){
            if(chisla[i]==false){chisla[i]=true;br++;}
            //cout<<i<<" ";
        }
    }
}
cout<<(dokolko-br)-2;
return 0;
}

