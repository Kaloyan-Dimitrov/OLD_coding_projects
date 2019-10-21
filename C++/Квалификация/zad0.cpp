#include <iostream>
using namespace std;
int main () {
long long a,b;
cin>>a>>b;
cout<<a+b<<" "<<a-b<<" "<<a*b<<"\n";
if(a%b==0){
    cout<<"Deli se";
}else{
    cout<<"Ne se deli";
}
return 0;
}
