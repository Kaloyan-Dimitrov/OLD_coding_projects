#include <iostream>
#include <cstring>
long long naimalko(long long a,long long b,long long c){
    long long mini;
    if(a>b){
        if(c>b)mini=b;
    }
    if(a>c){
        if(b>c)mini=c;
    }
    if(c>a){
        if(b>a)mini=a;
    }
    return mini;
}
using namespace std;
int main(){
long long parvi[3],vtori[3],treti[3],sborove1[3],sborove2[3],sborove3[3];
cin>>parvi[0]>>parvi[1]>>parvi[2]>>vtori[0]>>vtori[1]>>vtori[2]>>treti[0]>>treti[1]>>treti[2];
for(long long proveriavashto=0;proveriavashto<3;proveriavashto++){
    if(proveriavashto!=2){
        sborove1[proveriavashto]=parvi[proveriavashto]+parvi[proveriavashto+1];
    }
    else{
        sborove1[proveriavashto]=parvi[proveriavashto]+parvi[proveriavashto-2];
    }
}
for(long long proveriavashto=0;proveriavashto<3;proveriavashto++){
    if(proveriavashto!=2){
        sborove2[proveriavashto]=vtori[proveriavashto]+vtori[proveriavashto+1];
    }
    else{
        sborove2[proveriavashto]=vtori[proveriavashto]+vtori[proveriavashto-2];
    }
}
for(long long proveriavashto=0;proveriavashto<3;proveriavashto++){
    if(proveriavashto!=2){
        sborove3[proveriavashto]=treti[proveriavashto]+treti[proveriavashto+1];
    }
    else{
        sborove3[proveriavashto]=treti[proveriavashto-2]+treti[proveriavashto];
    }
}
parvi[0]=naimalko(parvi[0],parvi[1],parvi[2]);
vtori[0]=naimalko(vtori[0],vtori[1],vtori[2]);
treti[0]=naimalko(treti[0],treti[1],treti[2]);
sborove1[0]=naimalko(sborove1[0],sborove1[1],sborove1[2]);
sborove2[0]=naimalko(sborove2[0],sborove2[1],sborove2[2]);
sborove3[0]=naimalko(sborove3[0],sborove3[1],sborove3[2]);
bool daproveriavamli=true;
cout<<parvi[0]<<sborove1[0];
for(long long proveriavashto=1;daproveriavamli;proveriavashto++){
    if(proveriavashto!=parvi[0] and proveriavashto!=sborove1[0] and parvi[0]!=1){
        cout<<proveriavashto;
        daproveriavamli=false;
    }
    if(parvi[0]==1 and proveriavashto!=sborove1[0] and proveriavashto!=1){
        cout<<proveriavashto;
        daproveriavamli=false;
    }
    cout<<1;
}
parvi[0]=naimalko(parvi[0],parvi[1],parvi[2]);
vtori[0]=naimalko(vtori[0],vtori[1],vtori[2]);
treti[0]=naimalko(treti[0],treti[1],treti[2]);
return 0;
}



/*
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
   int a = 5, b = 3;

   // before
   std::cout << a << ' ' << b << '\n';

   std::swap(a,b);

   // after
   std::cout << a << ' ' << b << '\n';
}
*/
