#include <iostream>
using namespace std;
int main(){
long long chislo,faktoriel,ispolzvanochislo;
cin>>chislo;
faktoriel=1;
for (faktoriel=1;chislo>1;chislo=chislo-1){
        faktoriel=chislo*faktoriel;

}
cout<<faktoriel;
return 0;
}
