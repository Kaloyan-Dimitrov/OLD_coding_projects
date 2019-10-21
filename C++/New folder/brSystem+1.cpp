#include <iostream>
using namespace std;
int main (){
long long sys,chislo1,dul=0;
char chisloVsys[100000];
bool neshto=false,dapr=true;
cin>>sys>>chisloVsys;
for(dul=0;chisloVsys[dul]!='\0';dul++){}
dul=dul-1;
for(long long a=dul;dapr;a--){
    if(a==-1){
        dapr=false;
        neshto=true;
    }
    chisloVsys[a]++;
    if(chisloVsys[a]-'0'>=sys){chisloVsys[a]='0';}
    else{dapr=false;}
}
if(!neshto)cout<<chisloVsys;
else cout<<1<<chisloVsys;
return 0;
}
