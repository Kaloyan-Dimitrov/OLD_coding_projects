#include <iostream>
#include <cstring>
using namespace std;
char vhod[1000000];
int main (){
long long dulstar,dulnov=0,brpov=0;
cin>>vhod;
dulstar=strlen(vhod)-1;
for(long long i=0;i<dulstar+1;i++){
    if(vhod[i]!=vhod[i-1] and vhod[i-1]==vhod[i-2] and i>1){
        if(vhod[i]!='.'){
            dulnov+=3;
        cout<<vhod[i];
        }
        else dulnov+=2;
    }
    else if(vhod[i]!=vhod[i-1] and vhod[i]!=vhod[i+1] and vhod[i]!='.') {dulnov++;}
}
cout<<dulstar<<" "<<dulnov;
return 0;
}
