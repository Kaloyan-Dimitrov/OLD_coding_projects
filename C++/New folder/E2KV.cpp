#include <iostream>
using namespace std;
int main (){
long long n,br2=0,br3=0;
cin>>n;
char nomer[1000];
cin>>nomer;
if(n%3==0){
    br3=n/3;
}
if(n%3==1){
    br2=2;
    br3=(n/3)-1;
}
if(n%3==2){
    br2=1;
    br3=n/3;
}
for(long long dve=0;dve<br2*2;dve=dve+2){
    /*for(long long i=0;i<2;i++){
        cout<<nomer[i+dve];
    }*/
    cout<<nomer[dve]<<nomer[dve+1];
    if(dve!=br2*2-2 or br3>0){
        cout<<"-";
    }
}
for(long long tri=0;tri<(br3*3);tri=tri+3){
    /*for(long long i=0;i<2;i++){
        cout<<nomer[i+dve];
    }*/

    cout<<nomer[tri+(br2*2)]<<nomer[tri+1+(br2*2)]<<nomer[tri+2+(br2*2)];
    if(tri!=br3*3-3){
        cout<<"-";
    }
}
return 0;
}
