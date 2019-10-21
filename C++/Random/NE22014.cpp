#include <iostream>
using namespace std;
int main (){
long long tortiD[3],tortiG[3],dolna,sredna,gorna;
cin>>tortiG[0]>>tortiD[0]>>tortiG[1]>>tortiD[1]>>tortiG[2]>>tortiD[2];
for(long long indexDolni=0;indexDolni<3;indexDolni++){
    for(long long indexSredni=0;indexSredni<3;indexSredni++){
        for(long long indexGorni=0;indexGorni<3;indexGorni++){
            if(tortiG[indexDolni]<tortiG[indexSredni] or tortiD[indexDolni]<tortiD[indexSredni]){
                if(tortiG[indexSredni]<tortiG[indexGorni] or tortiD[indexSredni]<tortiD[indexGorni]){
                    dolna=indexDolni+1;
                    sredna=indexSredni+1;
                    gorna=indexGorni+1;
                }
            }
        }
    }
}
cout<<dolna<<sredna<<gorna;
return 0;
}
