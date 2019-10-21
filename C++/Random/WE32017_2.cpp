#include <iostream>
using namespace std;
int main (){
long long n,k,j=1,chasove=0;
cin>>n>>k;
while(n>0){
    n-=j;
    if(j<k and j<=n){j+=j;}
    /*if(j<n and j%2!=0 and j+j>n){
        j++;
        cout<<j;
    }*/
    chasove++;
}
cout<<chasove;
return 0;
}
