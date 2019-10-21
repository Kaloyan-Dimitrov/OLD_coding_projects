#include <iostream>
using namespace std;
int main(){
long long den,mesec,broidnivavvavedeniamsec;
cin>>den;
cout<<".";
cin>>mesec;
if(mesec==1 or mesec==3 or mesec==5 or mesec==7 or mesec==8 or mesec==10 or mesec==12){
    if(den>31){
        cout<<"No 31";
    }
    if(den=31){
        cout<<"Yes "<<"1"<<"."<<mesec<<".2008";
    }
    if (den!=31 and den<31){
        cout<<"Yes "<<den+1<<"."<<mesec<<".2008";
    }
}
else{
    if(den>30){
        cout<<"No 30";
    }
    if(den=30){
        cout<<"Yes "<<"1"<<"."<<mesec+1<<".2008";
    }
    if (den!=30 and den<30){
        cout<<"Yes "<<den+1<<"."<<mesec<<".2008";
    }
}
if(mesec=2){
    if(den>29){
        cout<<"No 29";
    }
    if(den=29) {
       cout<<"Yes "<<"1"<<"."<<mesec+1<<".2008";
    }
    if(den!=29 and den<29){
       cout<<"Yes "<<den+1<<"."<<mesec<<".2008";
    }
}
return 0;
}
