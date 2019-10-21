#include<iostream>
using namespace std;
int main (){
long long klecki,br=0;
cin>>klecki;
for(long long a=1;a<=klecki;a++){
    for(long long b=a;b<=(klecki/2)+1;b++){
        if((a-1)*b+(b-1)*a+b*2+a*2==klecki){br++;}
    }
}
cout<<br;
return 0;
}
