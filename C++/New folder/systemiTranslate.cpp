#include <iostream>
#include <cstring>
using namespace std;
int main (){
long long system,dul,pr=1,d=0;
char chislo[100000];
cin>>system>>chislo;
dul=strlen(chislo);
for(long long i=dul-1;i>=0;i--){
    for(long long j=i;j<=dul-1;j++){
        pr=pr*(chislo[i]-'0');
    }
    d=d+pr;
}
cout<<d;
return 0;
}
