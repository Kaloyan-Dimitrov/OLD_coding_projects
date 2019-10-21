#include <iostream>
using namespace std;
int main (){
long long brKV,br=0;
cin>>brKV;
for(long long b=1;b<=brKV/2;b++){
    for(long long a=b;a<=brKV;a++){
        for(long long visochina=b;visochina<=brKV;visochina++){
            if(a*b*visochina==brKV and a<=visochina){
                br++;
            }
        }
    }
}
cout<<br;
return 0;
}
