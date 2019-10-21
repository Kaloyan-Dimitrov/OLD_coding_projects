#include <iostream>
using namespace std;
int main(){
char parvisimvol;
long long br;
parvisimvol='a';

for(br=parvisimvol+1;br<'z';br=br+1){
    cout<<parvisimvol;
    parvisimvol=br;

}
return 0;
}
