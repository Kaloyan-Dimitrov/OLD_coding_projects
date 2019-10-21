#include <iostream>
using namespace std;
int main(){
char obida[200],comp[200],tapsi[100]{'t','a','p','_','s','i','_','w','e'};
long long compint=0,br=0;
cin>>obida;
for(long long d=0;obida[d]!='\0';d++){
    if(obida[d]==tapsi[d]){
        br++;
    }
}
if(br==9){
        long long d=10;
for(long long d=10;obida[d]!='\0';d++){
    comp[compint]=obida[d];
    compint++;
}
}
cout<<"Ne Ti si tap,"<<comp;
return 0;
}

