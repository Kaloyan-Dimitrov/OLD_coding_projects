#include<iostream>
using namespace std;
bool deli(long long a){
    long long e,d,s,h,dh,sh;
    bool delilise;
    e=a%10;
    d=a/10%10;
    s=a/100%10;
    h=a/1000%10;
    dh=a/10000%10;
    sh=a/100000;
    if(s!=0){
    long long ch1,ch2;
    ch1=sh*100+dh*10+h;
    ch2=s*100+d*10+e;
    if(a%(ch1+ch2)==0){
        delilise=true;
    }
    else{
        delilise=false;
    }
    return delilise;
    }
}
int main (){
long long a,b,br=0,sbor=0;
cin>>a>>b;
for(;a<=b;a++){
    if(deli(a)){
        br++;
        sbor=sbor+a;
    }
}
cout<<br<<" "<<sbor<<"\n";
return 0;
}
