#include <iostream>
long long chisla[10000000];
using namespace std;
int main (){
    long long br=0,dokolko;
dokolko=10000000;
for(long long o=2;o<dokolko;o++){
    if(chisla[o]==0){
        for(long long i=o*2;i<dokolko;i=i+o){
            chisla[i]++;
            //cout<<i<<" ";
        }
    }
}
for(long long o=2;o<dokolko;o++){
    cout<<o<<"-"<<chisla[o]<<"\n";
}
return 0;
}


