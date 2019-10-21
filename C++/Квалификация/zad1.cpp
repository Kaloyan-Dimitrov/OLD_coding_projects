#include <iostream>
using namespace std;
int main(){
long long bg1,bg2,bg3,t1,t2,t3,g1,g2,g3,iabalki;
cin>>bg1>>bg2>>bg3;
cin>>t1>>t2>>t3;
cin>>g1>>g2>>g3;
iabalki=0;
for(long long pati=0;pati<=3000000;pati=pati+1){
    if(pati%2==1){
        if(pati==bg1+bg2+bg3){
            iabalki=bg1+bg2+bg3;
        }
        if(pati==t1+t2+t3){
            iabalki=t1+t2+t3;
        }
        if(pati==g1+g2+g3){
            iabalki=g1+g2+g3;
        }
        if(pati==bg1+t1+g1){
            iabalki=bg1+t1+g1;
        }
        if(pati==bg2+t2+g2){
            iabalki=bg2+t2+g2;
        }
        if(pati==bg3+t3+g3){
            iabalki=bg3+t3+g3;
        }else {

            if(pati==(bg3+t3+g3)-1 or pati==(bg2+t2+g2)-1 or pati==(bg1+t1+g1)-1 or pati==(g1+g2+g3)-1 or pati==(t1+t2+t3)-1 or pati==(bg1+bg2+bg3)-1){
            iabalki=pati;

        }
    }
    }


}
cout<<iabalki;
return 0;
}
