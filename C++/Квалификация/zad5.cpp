#include <iostream>
using namespace std;
int main(){
long long x,X,y,Y,M,naimnogo;
cin>>X>>Y>>M;
naimnogo=0;
y=0;
x=0;
while(x*X+y*Y<=M){

        while(x*X+y*Y<=M){


 if(x*X+y*Y<= M and naimnogo<x*X+y*Y){
naimnogo=x*X+y*Y;
        }
        y=y+1;

        }
x=x+1;

y=0;
}
cout<<naimnogo;
return 0;
}
