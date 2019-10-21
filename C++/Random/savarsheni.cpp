#include <iostream>
using namespace std;
int main(){
long long a=1,suma;
while(a<10000000000000000){
        suma=0;
        for(long long w=2;w<a;w++){
            if(a%w==0){
                suma=suma+w;
            }
        }
        if(suma==a){
            cout<<a;
        }
        a++;
}
return 0;
}

