#include <iostream>
using namespace std;
int main (){
long long N,H,L,c,a=0,nushnik,br=1;
char S,inter;
inter=' ';
cin>>N>>H>>L>>S;
nushnik=L-1;
for(long long i=1;i<=(N*(H-1))+1;i++){
    if(i==1 or i-(br*(H-2)+(br-1))==1){
        a=0;

    }else{a=L;
    br++;}
    if(i==1){
        br--;
    }
    if(i==1 or i==N*(H-1)+1){
        inter=S;
    }
    else{
        inter=' ';
    }
    if(i==1){
        nushnik++;
    }
    if(i==2){
        nushnik--;
    }
    if(i==N*(H-1)+1){
        nushnik=nushnik-L;
    }
    if(i==1){
        a=L+1;
    }
    else{
        a=0;
    }
    if(i!=1 and i!=2){
        nushnik=nushnik+(L+1)-1;
    }
    c=1;
    for(c=1;c<=1;c++){
        cout<<S;
    }
    for(long long b=0;b<nushnik;b++){
        cout<<inter;
    }
    for(;a<=L;a++){
        cout<<S;
    }cout<<"\n";

}
return 0;
}
