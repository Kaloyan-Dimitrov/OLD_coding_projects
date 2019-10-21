#include <iostream>
using namespace std;
bool izgonen[100000];
int main (){
long long decanab=0,decanav=0,brdeca=0,brbasket=0,pres,npres=0,brbr=0;
long long pr=1;
cin>>brdeca>>brbasket>>pres;
npres=pres;
for(long long u=0;decanab<brbasket;){
    if(!izgonen[u] and npres==pres){
    izgonen[u]=true;
    decanab++;
    pr=1;
    }
    if(!izgonen[u]){pr++;}
    if(u>=brdeca-1){
        u=u-brdeca;
        brbr++;
    }
    }
}
cout<<brbr<<endl;
if(izgonen[0]){cout<<"BASKETBALL";}
else cout<<"VOLLEYBALL";
//if(pres*brbasket<brdeca){cout<<1<<"VOLLEYBALL";}
//else{cout<<(pres*brbasket)/(brdeca-brbasket)+1;}
return 0;
}
