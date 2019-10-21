#include <iostream>
using namespace std;
bool glavna (char a){
    bool glavna;
    if(a>='A' and a<='Z'){
        glavna=true;
    }else{
        glavna=false;
    }
    return glavna;
}
bool malka (char a){
    bool malka;
    if(a>='a' and a<='z'){
        malka=true;
    }else{
        malka=false;
    }
    return malka;
}
bool cifra (char a){
    bool cifra;
    if(a>='0' and a<='9'){
        cifra=true;
    }else{
        cifra=false;
    }
    return cifra;
}
int main (){
long long h=0,m=0,h1=0,m1=0,koli=0,kamioni=0,hh,mm,vreme,vreme1;
char simvol='s',predishensimvol,popredishensimvol;
for(long long ivav=1;ivav<=8;ivav++){
    cin>>simvol;
    if(ivav==1)h=h+(simvol-'0')*10;
    if(ivav==2)h=h+(simvol-'0');
    if(ivav==3)m=m+(simvol-'0')*10;
    if(ivav==4)m=m+(simvol-'0');
    if(ivav==5)h1=h1+(simvol-'0')*10;
    if(ivav==6)h1=h1+(simvol-'0');
    if(ivav==7)m1=m1+(simvol-'0')*10;
    if(ivav==8)m1=m1+(simvol-'0');
}
vreme=h*60+m;
vreme1=h1*60+m1;
hh=(vreme1-vreme)/60;
mm=(vreme1-vreme)%60;
while(simvol!='#'){
    cin>>simvol;
    if(simvol!='#'){
        if(simvol>='A' and simvol<='Z'){
            koli++;
        }
        if(simvol>='a' and simvol<='z'){
            kamioni++;
            koli--;
        }
        if(simvol>='0' and simvol<='9'){
            if(glavna(predishensimvol)){
                koli--;
                koli=koli+(simvol-'0');
            }
            if(malka(predishensimvol)){
                kamioni--;
                kamioni=kamioni+(simvol-'0');
            }
            if(cifra(predishensimvol)){
                if(glavna(popredishensimvol)){
                    koli--;
                    koli=koli+(predishensimvol-'0')*10+(simvol-'0');
                }
                if(malka(popredishensimvol)){
                    kamioni--;
                    kamioni=kamioni+(predishensimvol-'0')*10+(simvol-'0');
                }
            }
        }
        popredishensimvol=predishensimvol;
        predishensimvol=simvol;
    }Õ
}
cout<<hh<<" "<<mm<<endl<<koli<<" "<<kamioni<<endl;
return 0;
}
