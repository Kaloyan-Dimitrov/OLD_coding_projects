#include <iostream>
using namespace std;
int main (){
long long vurhove,brsusedi[100],susedi[100][100],nakoiHodEDostignatVruh[100];
cin>>vurhove;
for(long long i=0;i<vurhove;i++){
    cout<<i<<"-";
    cin>>brsusedi[i];
    nakoiHodEDostignatVruh[i]=100000;
    for(long long j=0;j<brsusedi[i];j++){
        cin>>susedi[i][j];
    }
}
long long koie;
nakoiHodEDostignatVruh[0]=0;
for(long long i=0;i<vurhove;i++){
    for(long long j=0;j<vurhove;j++){
        if(nakoiHodEDostignatVruh[j]==i){
            for(long long is=0;is<brsusedi[j];is++){
                koie=susedi[j][is];
                if(nakoiHodEDostignatVruh[koie]==100000){
                    nakoiHodEDostignatVruh[koie]=i+1;
                }
            }
        }
    }
}
for(long long i=0;i<vurhove;i++){
    cout<<i<<"-"<<nakoiHodEDostignatVruh[i];
    cout<<endl;
}
return 0;
}
