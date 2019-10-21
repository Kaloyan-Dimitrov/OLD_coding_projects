#include <iostream>
using namespace std;
int main (){
bool namerih=true;
long long pari,paket,kutia,bonbon,broi,cena[3],br[3]{24,6,1};
cin>>pari>>bonbon>>kutia>>paket;
/*cena[0]=paket;
cena[1]=kutia;
cena[2]=bonbon;
if(kutia*4<paket and bonbon*6>kutia){
    swap(cena[0],cena[1]);
    swap(br[0],br[1]);
    if(bonbon*24<paket){
        swap(cena[1],cena[2]);
        swap(br[1],br[2]);
    }
    namerih=false;
}
if(bonbon*24<paket and bonbon*6<kutia and namerih){
    swap(cena[0],cena[2]);
    swap(br[2],br[0]);
    if(kutia*4>paket){
        swap(cena[1],cena[2]);
        swap(br[2],br[1]);
    }
    namerih=false;
}
if(namerih){
    if(bonbon*6<kutia){
        swap(cena[1],cena[2]);
        swap(br[2],br[1]);
    }
    namerih=false;
}
broi=(pari/cena[0])*br[0];
broi=broi+((pari%cena[0])/cena[1])*br[1];
broi=broi+(((pari%cena[0])%cena[1])/cena[2])*br[2];*/
broi=(pari/paket)*24;
broi=broi+((pari%paket)/kutia)*6;
broi=broi+(((pari%paket)/kutia)/bonbon)*1;

cout<<broi;
return 0;
}
