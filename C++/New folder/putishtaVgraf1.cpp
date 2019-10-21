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
for(long long i=0;i<vurhove;i++){
    for(long long j=0;j<brsusedi[i];j++){
        if(i==0){
            nakoiHodEDostignatVruh[0]=0;
            nakoiHodEDostignatVruh[j]=1;
        }
        else{
            if(nakoiHodEDostignatVruh[i]<100 and nakoiHodEDostignatVruh[j]>100){
                nakoiHodEDostignatVruh[j]=nakoiHodEDostignatVruh[i]+1;
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
