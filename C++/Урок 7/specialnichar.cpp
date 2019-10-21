#include <iostream>
using namespace std;
int main(){
long long br,sborotcifrite,ostatuk,brc,naigoliamo;
char cifra,cifraistinskaamadaamanaistina;
bool delilisena2,delilisena3;
sborotcifrite=0;
brc=0;
naigoliamo=0;
for (br=0;br!='.';br=cifra){
    cin>>cifra;

    if(cifra-'0'>naigoliamo){
        naigoliamo=cifra-'0';
    }
    if(cifra!='.'){
        cifraistinskaamadaamanaistina=cifra;
        sborotcifrite=sborotcifrite+cifraistinskaamadaamanaistina;
        brc++;
    }
}
if(cifraistinskaamadaamanaistina%2==0){
    cout<<"da na 2 e 0\n";
    if(sborotcifrite%3==0){
        cout<<"da na 3 "<<sborotcifrite%3<<"\n";
    }else{
    cout<<"ne na 3 "<<sborotcifrite%3<<"\n";

    }if(sborotcifrite%3==0 and cifraistinskaamadaamanaistina%2==0){
        ostatuk=0;
    }
        cout<<"da na 6 "<<ostatuk<<"\n"<<brc<<" "<<naigoliamo2222222225;
    }

else{
       cout<<"ne na 2 e 1\n";
if(sborotcifrite%3==0){
        cout<<"da na 3 "<<sborotcifrite%3<<"\n";
    }else{
        cout<<"ne na 3 "<<sborotcifrite%3<<"\n";
    }
    if(sborotcifrite%3==0 and cifraistinskaamadaamanaistina%2!=0){
        ostatuk=3;
    }
    cout<<"ne na 6 "<<ostatuk<<"\n"<<brc<<" "<<naigoliamo;
    }
    return 0;
}
