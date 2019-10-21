#include <iostream>
using namespace std;
long long vhod[1000001];
int main (){
long long n,max=0,segbr=1;
cin>>n;
vhod[1000001]=0;
long long pr=0;
for(pr=0;pr<n;pr++){
    cin>>vhod[pr];
}
for(pr=0;pr<n;pr++){
    if(vhod[pr]<vhod[pr+1]){
        segbr++;
        //cout<<vhod[d]<<endl;
    }
    if(segbr>max){max=segbr;}
    if(vhod[pr]>=vhod[pr+1] and vhod[pr+1]<vhod[pr+2]){
        segbr=1;
    }
}
cout<<max;
return 0;
}

