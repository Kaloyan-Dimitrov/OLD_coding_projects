#include <iostream>
using namespace std;
int main (){
long long n,max=0,seg=0,maxnum;
cin>>n;
if(n==1){
    cout<<1;
    cout<<1;
    return 0;
}
for(long long chislo=6;chislo<=n;chislo+=6){
    for(long long delitel=1;delitel<=chislo;delitel++){
        if(chislo%delitel==0){
            seg++;
        }
    }
    if(seg>max){
        max=seg;
        maxnum=chislo;
    }
    seg=0;
}
cout<<maxnum<<endl<<max;
return 0;
}
