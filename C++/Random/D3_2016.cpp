#include <iostream>
using namespace std;
int main (){
long long a,b,polucheno,edinici,br=0;
char znak;
cin>>a>>b>>znak;
if(znak=='-'){
    if(a>b){
        swap(a,b);
    }
    polucheno=a-b;
}
if(znak=='+'){
    polucheno=a+b;
}
if(znak=='*'){
    polucheno=a*b;
}
while(polucheno>9){
    edinici=polucheno%10;
    if(edinici==6 or edinici==9 or edinici==0){
        br++;
    }
    if(edinici==8){
        br+=2;
    }
    polucheno=polucheno/10;
}
cout<<br;
return 0;
}
