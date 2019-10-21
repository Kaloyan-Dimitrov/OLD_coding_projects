#include <iostream>
using namespace std;
int main (){
long long n,k,j=1,chasove=0;
cin>>n>>k;
while(n>0){
    n=n-j;
    if(j<3){j++;}
    chasove++;
}
cout<<chasove;
return 0;
}
