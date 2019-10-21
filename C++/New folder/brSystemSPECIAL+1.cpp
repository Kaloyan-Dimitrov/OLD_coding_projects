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
    if(sys<=10){
    chisloVsys[a]++;
    if(chisloVsys[a]-'0'>=sys){chisloVsys[a]='0';}
    else{dapr=false;}
    }
    else{
        if(chisloVsys[a]>='A' and chisloVsys[a]<='Z'){
            chisloVsys[a]++;
            if((chisloVsys[a]-'A')+1>=sys-10){chisloVsys[a]='0';}
            else{dapr=false;}
        }
        else{
            chisloVsys[a]++;
            if(chisloVsys[a]-'0'>=10){chisloVsys[a]='0';}
            else{dapr=false;}
        }
    }
}
if(!neshto)cout<<chisloVsys;
else cout<<1<<chisloVsys;
return 0;
}
