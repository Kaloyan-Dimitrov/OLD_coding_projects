#include <iostream>
using namespace std;
int main(){
long long vhod[100],sorti[100],index1,m=0,broi,brgolemi,golemi=0,parvo;
long long proveriavashto=0;
cin>>broi;
parvo=0;
brgolemi=broi-1;
for(long long index2=0;index2<100;index2++){
    sorti[index2]=0;
}
for(long long index=0;index<broi;index++){
    cin>>vhod[index];

}
for(long long proveriavano=0;proveriavano<broi;proveriavano++){
    brgolemi=broi-1;
    m++;
for(long long proveriavashto=0;proveriavashto<broi;proveriavashto++){
    if(vhod[parvo]<vhod[proveriavashto]){
        parvo=proveriavano;
    }
}
sorti[poveriavano]=vhod[proveriavano];
}
cout<<endl;
for(long long index3=0;index3<broi;index3++){
    cout<<sorti[index3]<<endl;
}
return 0;
}
