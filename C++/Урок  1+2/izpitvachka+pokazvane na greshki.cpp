#include<iostream>
using namespace std;
int main(){
long long otgovor;
long long greshniOtgovori;
cout<<"1+1=";
cin>>otgovor;
greshniOtgovori=0;
while(otgovor!=2){
    cout<<"Mnogo si tap, opitai pak-";
    cin>>otgovor;
    greshniOtgovori=greshniOtgovori+1;
}

cout<<"Brauz!!!Ti sgreshi samo ";
cout<<greshniOtgovori;
cout<<" greshni otgovori!!";
return 0;
}
