
#include <iostream>
using namespace std;
int main(){
char pesho11,pesho12,pesho13,pesho21,pesho22,pesho23,priatelka1,pritelka2,priatelka3;
long long delimo1,delimo2,delimo3,den1,den2,den3,izbranden;

delimo1=0;
delimo2=0;
delimo3=0;
cin>>pesho11>>pesho12>>pesho13>>pesho21>>pesho22>>pesho23>>priatelka1>>pritelka2>>priatelka3;
if((pesho11-'a')+1<=9 ){
    delimo1=((pesho11-'a')+1)*100+delimo1;
}else{
    delimo1=delimo1+0;
}
if((pesho12-'a')+1<=9 ){
    delimo1=((pesho12-'a')+1)*10+delimo1;
}else{
    delimo1=delimo1+0;
}
if((pesho13-'a')+1<=9 ){
    delimo1=((pesho13-'a')+1)+delimo1;
}else{
    delimo1=delimo1+0;
}





if((pesho21-'a')+1<=9){
    delimo2=((pesho21-'a')+1)*100+delimo2;
}else{
    delimo2=delimo2+0;
}
if((pesho22-'a')+1<=9){
    delimo2=((pesho22-'a')+1)*10+delimo2;
}else{
    delimo2=delimo2+0;
}
if((pesho23-'a')+1<=9){
    delimo2=((pesho23-'a')+1)+delimo2;
}else{
    delimo2=delimo2+0;
}



if((priatelka1-'a')+1<=9 ){
    delimo3=((priatelka1-'a')+1)*100+delimo3;
}else{
    delimo3=delimo3+0;
}
if((pritelka2-'a')+1<=9){
    delimo3=((pritelka2-'a')+1)*10+delimo3;
}else{
    delimo3=delimo3+0;
}
if((priatelka3-'a')+1<=9){
    delimo3=((priatelka3-'a')+1)+delimo3;
}else{
    delimo3=delimo3+0;
}
den1=delimo1%7;
den2=delimo2%7;
den3=delimo3%7;
if(den3==0){
        den3=7;
    }
     if(den2==0){
        den2=7;
    }
     if(den1==0){
        den1=7;
     }
if(den1==den3 or den2==den3){

    izbranden=den3;
}else{
    izbranden=0;
}


cout<<izbranden<<"\n";
return 0;
}

