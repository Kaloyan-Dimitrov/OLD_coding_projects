#include <iostream>
using namespace std;
int main (){
long long temp,need;
char reshim;
cin>>temp>>need>>reshim;
if(reshim=='a'){
    cout<<need;
    return 0;
}
if(reshim=='v'){
    cout<<temp;
    return 0;
}
if(temp>need){
        if(reshim=='f'){
            cout<<need;
            return 0;
        }
        else{
            cout<<temp;
            return 0;
        }
}
else{
    if(reshim=='h'){
            cout<<need;
            return 0;
        }
        else{
            cout<<temp;
            return 0;
        }
}
return 0;
}
