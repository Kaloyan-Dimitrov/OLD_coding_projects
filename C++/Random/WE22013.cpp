#include <iostream>
using namespace std;
int main (){
long long obikolka,a[3],b[3],br=0;
for(long long b=0;b<3;b++){
    cin>>a[b];
}
for(long long a=0;a<3;a++){
    cin>>b[a];
}
for(long long pr=0;pr<3;pr++){
    br=0;
    for(long long proveriavashto=0;proveriavashto<3;proveriavashto++){
        if(a[pr]>a[proveriavashto]){
            br++;
        }
    }
    if(br==3){
        a[2]=a[pr];
    }
}
for(long long pr=0;pr<3;pr++){
    br=0;
    for(long long proveriavashto=0;proveriavashto<3;proveriavashto++){
        if(b[pr]>b[proveriavashto]){
            br++;
        }
    }
    if(br==3){
        swap(b[2],b[pr]);
    }
}
if(a[2]>b[2]){
    obikolka=a[0]+a[1]+b[0]+b[1]+(a[2]-b[2]);
}
else{
    obikolka=a[0]+a[1]+b[0]+b[1]+(b[2]-a[2]);
}
cout<<obikolka;
return  0;
}
