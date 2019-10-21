#include <iostream>
using namespace std;
int main(){
long long razmer,parviRed;
long long wred,wkolona;
cin>>razmer;
wred=0;
wkolona=0;
parviRed=0;
    while (parviRed<razmer){
        cout<<"W";
        parviRed=parviRed+1;
    }
cout<<endl;
while(wkolona<razmer){
    wred=0;
    while(wred<razmer){
        if(wred==(razmer-1) or wred==0){
        cout<<"W";
        }else{
        cout<<".";
        }
        wred=wred+1;
    }
  cout<<"\n";

  wkolona=wkolona+1;
}
parviRed=0;
    while (parviRed<razmer){
        cout<<"W";
        parviRed=parviRed+1;
    }

return 0;
}
