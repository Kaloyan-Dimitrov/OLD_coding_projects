#include<iostream>
using namespace std;
int main (){
long long rez,n5,n2,n3;
cin>>rez;
long long minraz=1000000;
for(n2=1;n2<=rez;n2++){
    for(n3=1;n3<=rez;n3++){
        for(n5=1;n5<=rez;n5++){
            if(n2*2+n3*3+n5*5==rez){
                if(n2-n3<=minraz and n3-n2<=minraz and n2-n5<=minraz and n3-n5<=minraz and n5-n2<=minraz and n5-n3<=minraz){
                    cout<<n2<<" "<<n3<<" "<<n5<<"\n";
                    minraz=n2-n3;
                }
            }
        }
    }
}
return 0;
}
