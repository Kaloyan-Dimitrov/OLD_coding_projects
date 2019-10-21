#include <iostream>
using namespace std;
bool imalirebrootdo[100][100];
long long vurhove,rebra,dokude,otkude,brsusedi[100],susedi[100][100],doseg[100];
int main (){
cin>>vurhove>>rebra;
for(long long i=0;i<rebra;i++){
    cin>>otkude>>dokude;
    susedi[otkude][doseg[otkude]]=dokude;
    susedi[dokude][doseg[dokude]]=otkude;
    brsusedi[otkude]++;
    brsusedi[dokude]++;
    imalirebrootdo[otkude][dokude]=true;
    imalirebrootdo[dokude][otkude]=true;
    doseg[otkude]++;
    doseg[dokude]++;
}
for(long long i=0;i<vurhove;i++){
    cout<<i<<"-"<<brsusedi[i]<<":";
    for(long long k=0;k<brsusedi[i];k++){
        cout<<susedi[i][k]<<" ";
    }
    cout<<endl;
}
for(long long i=0;i<vurhove;i++){
    for(long long k=0;k<vurhove;k++){
        if(i!=k){
        if(imalirebrootdo[i][k]){
            cout<<"t";
        }
        if(!imalirebrootdo[i][k]){
            cout<<"f";
        }
        }
        else{
            cout<<"?";
        }
    }
    cout<<endl;
}
return 0;
}
/*
8 7
2 7
3 0
0 6
7 4
2 4
0 7
6 4
*/
