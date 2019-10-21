#include <iostream>
using namespace std;
int main (){
int n;
bool imaLi=false;
cin>>n;
for(char i='a';i<='z';i++){
    if(n-i>'a'-1 and n-i<'z'+1 and i<=n-i){
        cout<<i<<" "<<char(n-i)<<endl;
        imaLi=true;
    }
}
return 0;
}
