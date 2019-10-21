#include <iostream>
using namespace std;
int main (){
long long chislo=2017;
bool danepr=false, imalirazl=false;
for(long long i=3;danepr;i+=10){
    long long rez=chislo*i;
    imalirazl=false;
    while(rez!=0){
        long long cifra=rez%10;
        rez=rez/10;
        if(cifra!=1){
            imalirazl=true;
        }
    }
    if(!imalirazl){
        cout<<chislo*i;
    }
}
return 0;
}
