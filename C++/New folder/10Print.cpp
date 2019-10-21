#include <iostream>
#include <stdlib.h>
using namespace std;
long long br=0;
void print(){
    if(rand()%2>=1){
        cout<<"[";
    }
    else{
        cout<<']';
    }
    br++;
    if(br<5000){
        print();
    }
}
int main (){
print();
return 0;
}
