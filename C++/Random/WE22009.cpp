#include <iostream>
using namespace std;
int main(){
long long rediza[110],brChisla,brednakvi[50],nomerednakvi=0,naimnogo=0,ngchislo=0,chisloednakvi[50],nomernaednakvi[50],porednostnanaigolemite=0;
cin>>brChisla;
for(long long nula=0;nula<50;nula++){
    brednakvi[nula]=0;
}
for(long long vav1=0;vav1<brChisla;vav1++){
    cin>>rediza[vav1];
}
for (long long vav=0;vav<brChisla;vav++){
    if(rediza[vav]==rediza[vav-1] or rediza[vav]==rediza[vav+1]){
        brednakvi[nomerednakvi]++;
        chisloednakvi[nomerednakvi]=rediza[vav];
        nomernaednakvi[nomerednakvi]=nomerednakvi;
    }
    if(rediza[vav-1]==rediza[vav-2] and rediza[vav]!=rediza[vav-1]){
        cout<<brednakvi[nomerednakvi]<<endl<<endl;
        nomerednakvi++;
    }
}
if(brednakvi[0]==0){
    cout<<"no";
    return 0;
}
cout<<brednakvi[nomerednakvi]<<endl<<endl;
for(long long ng=0;ng<=nomerednakvi;ng++){
    if(naimnogo<brednakvi[ng]){
        naimnogo=brednakvi[ng];
        porednostnanaigolemite=nomernaednakvi[ng];
        ngchislo=chisloednakvi[ng];
    }
    if(naimnogo==brednakvi[ng]){
        if(porednostnanaigolemite>nomernaednakvi[ng]){
        naimnogo=brednakvi[ng];
        porednostnanaigolemite=nomernaednakvi[ng];
        ngchislo=chisloednakvi[ng];
        }
    }
}
cout<<ngchislo;
return 0;
}
