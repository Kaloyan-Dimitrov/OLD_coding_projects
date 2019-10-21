#include <iostream>
using namespace std;
int main (){
char vhod[100],maziv2[100];
char zatapka=' ';
cin>>vhod;
for(long long a=0;zatapka!='\0';a++){
    maziv2[a]=vhod[a];
    if(vhod[a]=='\0'){
        zatapka='\0';
    }
}
cout<<maziv2;
return 0;
}
