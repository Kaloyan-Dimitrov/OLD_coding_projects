
#include <iostream>
using namespace std;
void intervaliotvan(long long a){
    char inter=' ';
    for(long long br=0;br<a;br++){
        cout<<inter;
    }
}
int main (){
long long n;
cin>>n;
long long brinter=n/2,brinter2=1;
intervaliotvan(brinter);
cout<<"m\n";
for(long long redove=1;redove<=n-1;redove++){
    if(redove>=n/2+1){
        brinter++;
    }
    else{
        brinter--;
    }
    if(redove!=1){
    if(redove>=n/2+1){
        brinter2-=2;
    }
    else{
        brinter2+=2;
    }
    }
    intervaliotvan(brinter);
    if(redove%2==0){
        cout<<"m";
        intervaliotvan(brinter2);
        cout<<"m";
        cout<<endl;
    }
    else{
        cout<<"w";
        intervaliotvan(brinter2);
        cout<<"w";
        cout<<endl;
    }
}
intervaliotvan(brinter+1);
cout<<"m\n";
return 0;
}
