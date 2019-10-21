#include <iostream>
using namespace std;
int main (){
long long n,vhod[100000],max=0,segbr=0;
cin>>n;
for(long long d=0;d<n;d++){
    cin>>vhod[d];
}
for(long long d=0;d<n;d++){
    if(vhod[d]+1==vhod[d+1] or vhod[d]-1==vhod[d-1]){
        segbr++;
        //cout<<vhod[d]<<endl;
    }
    if(segbr>max){max=segbr;}
    if(vhod[d]+1!=vhod[d+1] and vhod[d+1]+1==vhod[d+2]){
        segbr=0;
    }
}
cout<<max;
return 0;
}
