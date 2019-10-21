#include <iostream>
using namespace std;
int main (){
char a='0';
long long sbornachetni=0,sbornanechetni=0,cifra,razlika,j;
j=';';
cout<<j;
while (a!=';'){
    cin>>a;
    cifra++;
    if(cifra%2==0 and a!=';'){
        sbornachetni=(a-'0')+sbornachetni;

    }else{
        if(a!=';'){
        sbornanechetni=(a-'0')+sbornanechetni;
    }

    }

}
if(sbornachetni>sbornanechetni){
    razlika=sbornachetni-sbornanechetni;
}else{
    razlika=sbornanechetni-sbornachetni;
}
if(razlika%11==0){
    cout<<"deli se na 11";
}
else{
        cout<<"ne se deli na 11";

}
return 0;
}
