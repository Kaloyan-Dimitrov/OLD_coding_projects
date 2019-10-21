#include <iostream>
using namespace std;
int main(){
long long delitel=3,proveriavano,provereniPati;
cin>>proveriavano;
provereniPati=0;
for(delitel=3;delitel*delitel<=proveriavano and proveriavano%2!=0;delitel=delitel+2){
    if(proveriavano%delitel==0){
        //cout<<"Ne e prosto "<<delitel<<" mu e delitel"<<endl;
        provereniPati=provereniPati+1;
        cout<<"Ne e prosto?";
        return 0;
    }
}
if(proveriavano%2==0){
    provereniPati++;
    cout<<"Ne prosto?";
}
if(provereniPati==0){
    cout<<"Prosto e";
}
return 0;
}
