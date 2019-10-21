#include <cstring>
#include <iostream>
using namespace std;
int main (){
char n[30],izhod[30];
long long k,ind=0,brc=0;
bool imali0;
cin>>k>>n;
if(10-strlen(n)==k){
    for(long long l=0;l<=9;l++){
        for(long long o=0;o<strlen(n);o++){
            if(n[o]-'0'!=l){
                brc++;
            }
        }
        if(brc==strlen(n)){
            if(l==0){imali0=true;}
            if(ind==1){if(imali0){izhod[1]='0';ind++;}}
            if(l!=0){izhod[ind]=l+'0';ind++;}
        }
        brc=0;
    }
    izhod[ind+1]='\0';
}
cout<<izhod;
return 0;
}
