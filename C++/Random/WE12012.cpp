#include <iostream>
using namespace std;
int main (){
long long znaiko,a,b,c;
bool bb=true,cb=true;
cin>>a>>b>>c;
for(long long proveriavano=999;bb;proveriavano--){
    if(proveriavano%b==0){
        b=proveriavano;
        bb=false;
    }
}
for(long long proveriavano=1000;cb;proveriavano++){
    if(proveriavano%c==0){
        c=proveriavano;
        cb=false;
    }
}
znaiko=c+b+a;
cout<<znaiko;
return 0;
}
