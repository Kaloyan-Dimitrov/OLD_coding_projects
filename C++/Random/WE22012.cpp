#include<iostream>
using namespace std;
int main (){
long long n, m, n1, n2, n3;
cin>>n;
n1=n/144;
m=n%144;
n2=m/12;
n3=m%12;
if (n3*105>1025) { n2++; n3=0;}
if (n2*1025+n3*105>11400) { n1++; n2=0; n3=0;}
cout<<n1<<" "<<n2<<" "<<n3<<endl;
r   eturn 0;
}
