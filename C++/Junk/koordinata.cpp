#include <iostream>
#include <cstring>
using namespace std;
int main(){
long long x,y;
cin>>x>>y;
long long novy[x],stary[x];
for(long long d=0;d<x;d++){
    stary[d]=1;
}
for(long long proveryavashto=2;proveryavashto<=x;proveryavashto++){
    for(long long h=1;h<x;h++){
        novy[0]=1;
        novy[h]=novy[h-1]+stary[h];
    }
    for(long long s=0;s<x;s++){
        stary[s]=novy[s];
    }
}
cout<<novy[x-1];
return 0;
}
