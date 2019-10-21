#include <iostream>
using namespace std;
int main (){
char duma1[100],duma2[100];
long long intduma1[100],intduma2[100];
cin>>duma1>>duma2;
for(long long broiach=0;broiach<100;broiach++){
    intduma1[broiach]=duma1[broiach];
    intduma2[broiach]=duma2[broiach];
}
long long a=0;
for(a=0;intduma1[a]==intduma2[a];a++){cout<<a<<endl;}
if(intduma1[a]>intduma2[a]){
    cout<<2<<endl;
}
else{
    cout<<1<<endl;
}
return 0;
}
