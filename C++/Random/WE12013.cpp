#include<iostream>
using namespace std;
int main (){
long long visok[100],heli,sledvasht,br,pogolemi=0;
bool niamali=true;
cin>>heli>>br;
for(long long ivav=0;ivav<br;ivav++){
        cin>>visok[ivav];
}
for(long long ipr=0;ipr<br-3;ipr++){
    pogolemi=0;
    for(sledvasht=1;sledvasht<=heli;sledvasht++){
        if(visok[ipr]-visok[ipr+sledvasht]>=1){
            pogolemi++;
        }
    }
    if(pogolemi==heli){
        cout<<ipr+1<<endl;
        niamali=0;
    }
}
if(niamali){
    cout<<"NO"<<endl;
}
return 0;
}
