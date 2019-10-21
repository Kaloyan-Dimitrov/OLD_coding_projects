#include <iostream>
#include <cstring>
using namespace std;
char mas[500000];
int main (){
cin>>mas;
bool vatrepalilie=false;
long long krai=strlen(mas)-1,newkrai;
while((mas[0]!=mas[krai] or krai==strlen(mas)-1) or !vatrepalilie){
    krai--;
    if(mas[0]==mas[krai]){
        newkrai=krai;
        vatrepalilie=true;
        for(long long i=1;i<=(krai-1)/2 and vatrepalilie;i++){
            newkrai--;
            if(mas[i]!=mas[newkrai]){
                vatrepalilie=false;
            }
        }
    }
}
cout<<strlen(mas)+(strlen(mas)-1-krai);
return 0;
}
