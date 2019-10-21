#include <iostream>
using namespace std;
long long dapolzvamlichislo[1000000];
int main (){
long long n,vhod[100000],max=0,segbr=0;
long long ediniciVkrai;
cin>>n;
for(long long d=0;d<n;d++){
    cin>>vhod[d];
}
while(true){
for(ediniciVkrai=n-1;dapolzvamlichislo[ediniciVkrai]==1;ediniciVkrai--){
    dapolzvamlichislo[ediniciVkrai]=0;
}
long long uchastvashti=0,pred=0;
bool narastvatLi=true;
dapolzvamlichislo[ediniciVkrai]=1;
for(long long pechatano=0;pechatano<n;pechatano++){
    if(dapolzvamlichislo[pechatano]==1){
        if(uchastvashti==0){
            uchastvashti=1;
        }
    }
}
cout<<" ";
}
//cout<<max;
return 0;
}

