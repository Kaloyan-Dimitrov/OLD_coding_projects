#include<iostream>
using namespace std;
int main (){
long long x,redove,v1[20],v2[20],t1[20],t2[20],ivan=0,petar=0;
cin>>x>>redove;
for(long long vav=0;vav<redove;vav++){
    cin>>v1[vav]>>t1[vav]>>v2[vav]>>t2[vav];
    if(v1[vav]<0){
        v1[vav]=x-(v1[vav]-v1[vav]*2);
    }
    if(v2[vav]<0){
        v2[vav]=x-(v2[vav]-v2[vav]*2);
    }
    petar=petar+v1[vav]*t1[vav];
    ivan=ivan+v2[vav]*t2[vav];
}
petar=petar%x;
ivan=ivan%x;
if(petar>ivan){cout<<petar-ivan;}
else{cout<<ivan-petar;}
return 0;
}
