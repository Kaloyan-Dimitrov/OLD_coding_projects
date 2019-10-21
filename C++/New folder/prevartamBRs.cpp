#include <iostream>
#include <cstring>
using namespace std;
int main (){
long long sys=3,chislo1,dul=0,a;
char chisloVsys[100000];
for(long long i=0;i<100000;i++){chisloVsys[i]='0';}
bool neshto=false,dapr=true;
cin>>sys>>dul;
chisloVsys[dul]='\0';
while(chisloVsys[0]!=sys-1){
    for(a=dul-1;chisloVsys[a]=='0'+sys-1;a--){
        chisloVsys[a]='0';
    }
    chisloVsys[a]++;
    cout<<chisloVsys<<endl;
}
return 0;
}
