#include <iostream>
#include<cstring>
using namespace std;
int main (){
char vhod[10],novmasiv[10];
cin>>vhod;
long long a=0;
for(long long k=9;k>=0;k--){
    novmasiv[a]=vhod[k];
    a++;
}
cout<<novmasiv;
return 0;
}
