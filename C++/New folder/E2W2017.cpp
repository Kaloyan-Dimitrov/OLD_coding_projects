#include<iostream>
using namespace std;
bool izgonenoLiE0;
int main(){
    long long brDeca, iskani, koe, izbrani=0, broilka=1, prev=1;
    cin>>brDeca>>iskani>>koe;
    for(long long chesk=0;izbrani<iskani;chesk++){
        if(broilka==koe){
            if(chesk==0){
                izgonenoLiE0=true;
            }
            brDeca--;
            izbrani++;
            broilka=1;
        }
        broilka++;
        if(chesk>=brDeca-1){
            chesk=chesk-brDeca;
            prev++;
        }
    }
    cout<<prev<<endl;
    if(izgonenoLiE0){
        cout<<"BASKETBALL\n";
    }else{
        cout<<"VOLLEYBALL\n";
    }
return 0;
}
//13528 1571 8712
