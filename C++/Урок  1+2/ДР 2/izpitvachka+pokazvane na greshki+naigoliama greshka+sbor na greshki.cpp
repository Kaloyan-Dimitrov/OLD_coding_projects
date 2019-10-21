#include<iostream>
using namespace std;
int main(){
long long otgovor;
long long greshniOtgovori;
long long naiGoliamo;
long long sborNaGreshkite;
sborNaGreshkite=0;
naiGoliamo=0;
cout<<"1+1=";
cin>>otgovor;
greshniOtgovori=0;
while(otgovor!=2){
    sborNaGreshkite=sborNaGreshkite+otgovor;
    cout<<"Mnogo si tap, opitai pak-";
    cin>>otgovor;
    greshniOtgovori=greshniOtgovori+1;

    if(naiGoliamo<otgovor){
        naiGoliamo=otgovor;
    }
}

cout<<"Brauz!!!Vie sgreshihte samo ";
cout<<greshniOtgovori;
cout<<" pati!!";
if(greshniOtgovori>0){
    cout<<"Nai golemiat greshen otgovor, koito vavedohte e ";
    cout<<naiGoliamo;
    cout<<"!! Sborat na greshkite vi e ";
    cout<<sborNaGreshkite;
    cout<<" !!";
}

return 0;
}
