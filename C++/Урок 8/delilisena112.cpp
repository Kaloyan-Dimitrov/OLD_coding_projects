#include <iostream>
using namespace std;
int main (){
long long a,cifra=0,sbornachetni=0,sbornanechetni=0;
while (a!=0-1){
    cin>>a;
    cifra++;
    if(cifra%2==0 and a!=-1){
        sbornachetni=a+sbornachetni;
    }else{
        if(a!=-1){
        sbornanechetni=a+sbornanechetni;
    }

    }

}
if(sbornachetni-sbornanechetni%11==0){
    cout<<"deli se na 11";
}
else{
        cout<<"ne se deli na 11";

}
return 0;
}
