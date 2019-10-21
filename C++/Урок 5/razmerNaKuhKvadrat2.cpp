#include <iostream>
using namespace std;
int main(){
long long razmer,parviRed;
long long wred,wkolona;
cin>>razmer;
wred=0;
wkolona=0;
parviRed=0;
for(wred=0;wkolona<razmer;wkolona=wkolona+1){

    while(wred<razmer){
        if(  wkolona%2==1 or wred%2==1){
        cout<<"W";
        }else{
        cout<<".";
        }
        wred=wred+1;
    }
  cout<<"\n";


}


return 0;
}
