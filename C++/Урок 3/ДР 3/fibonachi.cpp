#include <iostream>
using namespace std ;
int main(){
long long predishnoChislo;
long long poPredishnoChislo;
long long segashnoChislo;
long long novoChislo;
poPredishnoChislo=1;
predishnoChislo=1;
segashnoChislo=predishnoChislo+poPredishnoChislo;
cout<<"Parvite 50 chisla na fibonachi sa ";
cout<<poPredishnoChislo<<" , "<<predishnoChislo<<" , "<<segashnoChislo<<" , ";
poPredishnoChislo=predishnoChislo;
predishnoChislo=segashnoChislo;
novoChislo=segashnoChislo+predishnoChislo;
cout<<novoChislo;
while(segashnoChislo<12586269025){
    segashnoChislo=novoChislo;
    poPredishnoChislo=predishnoChislo;
    predishnoChislo=segashnoChislo;
    novoChislo=segashnoChislo+predishnoChislo;
    cout<<" , ";
    cout<<novoChislo;
}
return 0;
}
