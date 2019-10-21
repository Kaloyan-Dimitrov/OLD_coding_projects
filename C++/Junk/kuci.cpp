#include <iostream>
using namespace std;
int main(){
long long otgovor=1;
char nakude;
cout<<otgovor;
while(nakude!='p'){
    cin>>nakude;
    if(nakude=='g'){
        otgovor++;
        cout<<otgovor;
    }
    if(nakude=='m'){
        otgovor--;
        cout<<otgovor;
    }
}
cout<<"braus";
return 0;
}
