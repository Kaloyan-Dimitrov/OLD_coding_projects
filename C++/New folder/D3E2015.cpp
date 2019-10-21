#include <iostream>
#include <algorithm>
using namespace std;
bool otricatelnoLiE(long long a){
    if(a<0){
        return true;
    }
    else{
        return false;
    }
}
long long pati,n,sbor[1000],kutii[10000000];
int main (){
cin>>n>>pati;
for(long long i=0;i<n;i++){
    cin>>kutii[i];
    sbor[0]+=kutii[i];
}
for(long long pat=0;pat<pati;pat++){
    for(long long i=0;i<n;i++){
        kutii[i]=sbor[pat]-kutii[i];
        sbor[pat+1]+=kutii[i];
    }
}
long long min=1000000000000000,max=0;
for(long long i=0;i<n;i++){
    if(otricatelnoLiE(kutii[i])){
        kutii[i]=kutii[i]-(kutii[i]+kutii[i]);
    }
    if(kutii[i]<min)min=kutii[i];
    if(kutii[i]>max)max=kutii[i];
}
cout<<max-min;
return 0;
}
/*
3 2
-7 1 -3
*/
