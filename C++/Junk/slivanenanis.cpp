#include <iostream>
using namespace std;
int main (){
char vhod[100],maziv2[100];
bool minali=false,danesprali=true;
char zatapka=' ';
cin>>vhod>>maziv2;
for(long long a=0,m=0;danesprali;a++){
    if(vhod[a]=='\0'){
        minali=true;
    }
    if(minali){
        vhod[a]=maziv2[m];
        if(maziv2[m+1]=='\0'){
            danesprali=false;
            vhod[a+1]='\0';
        }
        m++;
    }
}
cout<<vhod;
return 0;
}
