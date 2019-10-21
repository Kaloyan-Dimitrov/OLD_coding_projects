#include <iostream>
using namespace std;
int main(){
long long delitel,proveriavano,provereniPati;
cin>>proveriavano;
provereniPati=0;
for(delitel=2;delitel*delitel<proveriavano;delitel=delitel+1){
    if(proveriavano%delitel==0){
        //cout<<"Ne e prosto "<<delitel<<" mu e delitel"<<endl;
        provereniPati=provereniPati+1;
        cout<<"Ne e prosto?";
        return 0;
    }
}
if(provereniPati==0){
    cout<<"Prosto e";
}
return 0;
}
