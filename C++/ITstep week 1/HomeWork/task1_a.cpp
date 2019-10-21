#include <iostream>
using namespace std;
int main (){
int n;
cout<<"n=";
cin>>n;
int digits[100], lD=-1;
while(n>0){
    lD++;
    digits[lD]=n%10;
    n=n/10;
}
//cout<<2%10;
cout<<digits[lD]+digits[0];
return 0;
}
