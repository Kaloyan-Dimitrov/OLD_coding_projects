#include<iostream>
using namespace std;
int main (){
long long a,b,deliteli=0,cifri=0;
cin>>a>>b;
for(long long pro=a+1;pro<=b;pro++){
        deliteli=0;
    for(long long delitel=2;delitel<pro;delitel++){
        if(pro%delitel==0){
            deliteli++;
        }
    }
    if(deliteli==0){
        if(pro>0 and pro<=9){
            cifri++;
        }
        if(pro>=10 and pro<=99){
            cifri=cifri+2;
        }
        if(pro>=100 and pro<=999){
            cifri=cifri+3;
        }
        if(pro>=1000 and pro<=9999){
            cifri=cifri+4;
        }
        if(pro>=10000 and pro<=99999){
            cifri=cifri+5;
        }
    }
}
cout<<cifri;
return 0;
}
