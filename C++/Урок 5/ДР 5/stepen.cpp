#include <iostream>
using namespace std;
int main(){
long long stupka,stependosega,rezultat;
rezultat=1;
for(stupka=1;stupka<=11;stupka=stupka+1){
rezultat=1;
for(stependosega=0;stependosega<stupka;stependosega=1+stependosega){
    rezultat=rezultat*stupka;

}cout<<rezultat<<"\n";

}

return 0;
}
