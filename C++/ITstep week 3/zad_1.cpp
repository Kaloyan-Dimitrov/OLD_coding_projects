#include <iostream>
using namespace std;
int main (){
int n;
cout<<"n=";
cin>>n;
int digits_f, digits_l, lD=-1;
while(n>0){
    lD++;
    if(lD==0){
        digits_f=n%10;
    }
    if(n<10){
        digits_l=n%10;
    }
    n=n/10;
}
//cout<<2%10;
cout<<(digits_f+digits_l)*2;
return 0;
}
