#include <iostream>
using namespace std;
int main(){
long long vhod[20],tursi,br=0;
for(long long i=0;i<20;i++){
    cin>>vhod[i];
}
cin>>tursi;
for(long long i=0;i<20;i++){
    if(vhod[i]==tursi){
        br++;
    }
}
cout<<br;
return 0;
}
