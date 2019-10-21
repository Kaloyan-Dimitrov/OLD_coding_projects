#include <iostream>
using namespace std;
int main (){
long long br,teglo=0,teglonabukva,star=0;
char simvol;
cin>>br;
while(simvol!='.'){
    cin>>simvol;
        if(simvol=='H'){
            teglonabukva=1;
        }
        if(simvol=='C'){
            teglonabukva=12;
        }
        if(simvol=='N'){
            teglonabukva=14;
        }
        if(simvol=='O'){
            teglonabukva=16;
        }
    if(simvol!='.'){
    if(simvol>'0' and simvol<'9'){
        teglo=teglo+star*(simvol-'0');
        teglo=teglo-star;
    }else{
        if(simvol=='H'){
            teglo=teglo+1;
        }
        if(simvol=='C'){
            teglo=teglo+12;
        }
        if(simvol=='N'){
            teglo=teglo+14;
        }
        if(simvol=='O'){
            teglo=teglo+16;
        }
    }
    cout<<star<<simvol<<teglo<<endl;
    star=teglonabukva;
}
}
cout<<teglo;
return 0;
}
