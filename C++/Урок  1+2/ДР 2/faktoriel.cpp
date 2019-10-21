
#include <iostream>
using namespace std;
int main(){
long long faktoriel;
long long chislo;
cout<<"Kakvo e chisloto vi: ";
cin>>chislo;
faktoriel=1;


    while (chislo>1){



faktoriel=chislo*faktoriel;
    chislo=chislo-1;
 }
    cout<<faktoriel;
return 0;


}
