#include <iostream>
using namespace std;
int main (){
long long parvoChislo;
long long poslednoChislo;
long long vsichkiChisla;
vsichkiChisla=1000;
parvoChislo=1000;
poslednoChislo=1;
cout<<"Chislata ot 1000 do 1 sa ";
cout<<vsichkiChisla;
cout<<" , ";
while(vsichkiChisla!=1){
    vsichkiChisla=vsichkiChisla-1;
    cout<<vsichkiChisla;
    cout<<" , ";
}
return 0;
}
