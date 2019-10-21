#include <iostream>
using namespace std;
int main(){
long long chislo,poredno,proveriavano,segashno,provereniPati;
cin>>chislo;
provereniPati=0;
segashno=0;
for(proveriavano=1;chislo!=proveriavano and proveriavano<chislo;proveriavano=proveriavano+segashno){
        segashno=proveriavano;

        provereniPati=provereniPati+1;
        cout<<proveriavano<<endl;
}

if(chislo==proveriavano+1){
cout<<endl<<provereniPati+5;
}else{
cout<<"Ne";
}
return 0;
}
