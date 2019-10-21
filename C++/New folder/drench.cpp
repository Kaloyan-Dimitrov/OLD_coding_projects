#include <iostream>
using namespace std;
int main (){
char pole[10][10];
for(long long i=0;i<10;i++){
    for(long long j=0;j<10;j++){
        if(pole[i][j]<0){
            pole[i][j]='0'-(pole[i][j]%10);
        }
        else{
            pole[i][j]='0'+(pole[i][j]%10);
        }
    }
}
for(long long i=0;i<10;i++){
    for(long long j=0;j<10;j++){
        cout<<pole[i][j];
    }
    cout<<endl;
}
for(long long i=0;i<10;i++){
    for(long long j=0;j<10;j++){
    }
}
return 0;
}
