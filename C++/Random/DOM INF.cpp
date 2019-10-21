#include <iostream>
using namespace std;
int main (){
long long suma=0,m;
cin>>m;
if(m%4==0){
    for(int p=4;p<=m;p=p+4){
        suma=suma+(p-1)*(p-3)+p*(p-2);
    }
}
else{
    if(m%2==0){
        for(long long w=2;w<=m;w=w+4){
            suma=suma+(w-1)*(w+1)+w*(w+2);
        }
    }
}if(m%2==1){
    suma=3;
    if(m%4==1){
        for(long long k=5;k<=m;k=k+4){
            suma=suma+(k-3)*(k-1)+k*(k+2);
        }
    }else{
        if(m%4==3)
        for(long long f=7;f<=m;f=f+4){
            suma=suma+(f-5)*(f-3)+f*(f-2);
        }
    }
}
cout<<suma;
return 0;
}
