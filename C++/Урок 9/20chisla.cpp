#include <iostream>
using namespace std;
int main(){
long long chislo,chislo1,br=0;
cin>>chislo;
for(long long m=1;m<=20;m++){
    cin>>chislo1;
    if(chislo1==chislo){
        br++;
    }
}
cout<<br;
return 0;
}
