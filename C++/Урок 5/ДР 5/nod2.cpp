#include <iostream>
using namespace std;
int main(){
long long a,b,probvandelitel,ng;
cin>>a;
cin>>b;
while(a!=b){
    if(a>b){
        long long staroA;
        staroA=a;
        a=b;
        b=staroA;
    }
    b=b-a;

}
cout<<a<<"\n";
return 0;
}
