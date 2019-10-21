#include <iostream>
using namespace std;
int main(){
long long razmer,razmer1;
long long wred,wkolona;
cin>>razmer;
wred=0;
wkolona=0;
razmer1=razmer;
while(wkolona<razmer){
    wred=0;
    while(wred<razmer1){
        cout<<"W";
        wred=wred+1;


    }
  cout<<"\n";
  razmer1=razmer1-1;
  wkolona=wkolona+1;
}
return 0;
}
