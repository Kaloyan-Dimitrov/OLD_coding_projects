#include <iostream>
using namespace std;
int main (){
long long segchislo=0,chislo=1,staro=0,n;
cin>>n;
for(long long br=1;br<=n;br++){
    staro=chislo;
    chislo=segchislo;
    segchislo=chislo+staro;

}
cout<<segchislo;
return 0;
}
