#include <iostream>
using namespace std;
int main (){
long long chislo;
long long chislo1;
long long sbor;
cin>>chislo;
chislo1=chislo;
sbor=0;
while(chislo>0){
    chislo1=chislo%10;
    chislo=chislo/10;

    sbor=sbor+chislo1;

}


cout<<sbor;
return 0;

}


