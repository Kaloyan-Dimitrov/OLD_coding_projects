#include <iostream>
using namespace std;
int main (){
long long chislo;
long long edinici;
long long naiGoliamo;
cin>>chislo;
edinici=0;
naiGoliamo=0;
while(chislo>0){
    edinici=chislo%10;
    chislo=chislo/10;
    if(edinici>naiGoliamo){
    naiGoliamo=edinici;

    }
}
cout<<naiGoliamo;

return 0;

}
