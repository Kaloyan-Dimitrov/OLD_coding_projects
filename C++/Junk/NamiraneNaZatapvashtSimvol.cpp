/*#include <iostream>
using namespace std;
int main (){
char vhod[100];
long long nomer;
cin>>vhod;
for(long long zatapka=' ',a=0;zatapka!='\0';a++){
    if(vhod[a]=='\0'){
        zatapka='\0';
        nomer=a;
    }
}
cout<<nomer;
return 0;
}
*/
#include <iostream>
using namespace std;
int main (){
char vhod[1000];
for(long long a=0;a<1000;a++){
    if(vhod[a]=='\0'){
        vhod[a]='z';
}
}
cout<<vhod;
return 0;
}
