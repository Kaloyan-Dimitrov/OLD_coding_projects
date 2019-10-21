#include <iostream>
using namespace std;
int main(){
long long delitel,proveriavano,br=0,provereniPati,posledno;
cin>>proveriavano>>posledno;
provereniPati=0;
for(;proveriavano<=posledno;proveriavano++){
        provereniPati=0;
        if(proveriavano==1){proveriavano++;}
for(delitel=2;delitel*delitel<=proveriavano;delitel=delitel+1){
    if(proveriavano%delitel==0 or proveriavano==4){
        //cout<<"Ne e prosto "<<delitel<<" mu e delitel"<<endl;
        provereniPati=provereniPati+1;
    }
}
if(provereniPati==0){
    //cout<<proveriavano<<endl;
    br++;
}
}
cout<<br;
return 0;
}
