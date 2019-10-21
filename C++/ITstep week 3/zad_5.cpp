#include <iostream>
#include <stdlib.h>
using namespace std;
int po(int a, int b){
    int rez=0;
    for(int i=0;i<abs(b);i++){
        rez+=abs(a);
    }
    return rez;
}
int stepen(int osnova, int stepen){
    int rez=po(osnova, osnova);
    for(int i=0;i<stepen-2;i++){
        rez=po(rez, osnova);
    }
    if(osnova<0){
        if(stepen%2==0) return rez;
        else return -rez;
    }
    else return rez;
}
int main (){
int a, b;
cin>>a>>b;
cout<<stepen(a, b);
return 0;
}
// 3 3 3 3 3
//  9  3 3 3
//    27 3 3
//
//
