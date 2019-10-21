#include <iostream>
using namespace std;
int main(){
long long vhod[5],vhod1[5],ind1=0;
long long index2=5;
for(long long index=0;index<5;index++){
    cin>>vhod[index];
}
for(long long ind=0;ind<5;ind++){
    vhod1[ind]=vhod[ind1];
    ind1++;
}
for(long long index1=0;index1<=5;index1++){
     vhod[index1]=vhod1[index2];
     index2--;
}
for(long long index3=1;index3<=5;index3++){
    cout<<vhod[index3]<<endl;
}
return 0;
}
