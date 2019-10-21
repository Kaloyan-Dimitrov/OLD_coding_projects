#include <iostream>
#include <cstring>
using namespace std;
int main(){
char dumi[10],obida[10],proveriavashto[10],br=0;
strcpy(obida,"tapak");
cin>>dumi;
for(long long a=0;a<10;a++){
    for(long long d=0;d<5;d++){
        if(dumi[a+d]==obida[d]){br++;}
    }
    if(br==5){
        cout<<"Ne ti si tap";
    }
    br=0;
}
return 0;
}
