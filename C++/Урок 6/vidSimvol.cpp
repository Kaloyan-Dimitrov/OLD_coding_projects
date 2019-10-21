#include <iostream>
using namespace std;
int main(){
char simvol;
cin>>simvol;
if(simvol>='a' and simvol<='z' or simvol>='A' and simvol<='Z' or simvol>='1' and simvol<='9'){
    if(simvol>='a' and simvol<='z'){
        cout<<"malka bukva e";
    }
    if(simvol>='A' and simvol<='Z'){
        cout<<"glavna bukva e";
    }
    if(simvol>='1' and simvol<='9'){
        cout<<"cifra e";
    }
}
else {
    cout<<"tap si";
}
return 0;
}
