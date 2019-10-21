#include <iostream>
using namespace std;
int main(){
long long razmer,razmer1,razmer2;
long long _red,wred,wkolona;
cin>>razmer;
wred=0;
razmer1=1;
wkolona=0;
_red=razmer-1;
wred=0;
razmer2=razmer;
while(wkolona<razmer){
    wred=0;
    _red=razmer2-1;

    while(_red>0){
        cout<<" ";
        _red=_red-1;
    }
    while(wred<razmer1){
        cout<<"W";
        wred=wred+1;
    }

  cout<<"\n";
  razmer1=razmer1+1;
  wkolona=wkolona+1;
  razmer2=razmer2-1;
}


}
