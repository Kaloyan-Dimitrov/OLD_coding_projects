#include <iostream>
using namespace std;
int main (){
long long a,b,a1,a2,a3,b1,b2,b3,sbor=0;
cin>>a>>b;
a3=a%10;
a2=a/10%10;
a1=a/100;
b3=b%10;
b2=b/10%10;
b1=b/100;
if(a3+b3<=9){
    sbor=(a3+b3);
}else{
    sbor=((a3+b3)%10);
}
if(a2+b2<=9){
    sbor=sbor+((a2+b2)*10);
}else{
    sbor=sbor+(((a2+b2)%10)*10);
}
sbor=sbor+(a1*100)+(b1*100);
cout<<sbor<<endl<<a+b;
return 0;
}
