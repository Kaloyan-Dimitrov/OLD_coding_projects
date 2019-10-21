#include <iostream>
using namespace std;
long long brVidove,prazni=0,vidove[2000],brKutii,kutii[400000],obshto=0,brZaVid[2000],maxZaKutia[400000][2];
int main (){
cin>>brVidove;
for(long long i=0;i<brVidove;i++){
    cin>>vidove[i];
}
cin>>brKutii;
for(long long i=0;i<brKutii;i++){
    cin>>kutii[i];
}
for(long long i=0;i<brVidove;i++){
    for(long long o=0;o<brKutii;o++){
        if(kutii[o]%vidove[i]==0 and kutii[o]/vidove[i]>1){
            if(kutii[o]/vidove[i]>maxZaKutia[o][0]){
                maxZaKutia[o][1]=i;
                maxZaKutia[o][0]=(kutii[o]/vidove[i])*(kutii[o]/vidove[i])*(kutii[o]/vidove[i]);
            }
        }
    }
}
for(long long o=0;o<brKutii;o++){
    if(maxZaKutia[o][0]==0 and o<brKutii){
        prazni++;
    }
}
for(long long o=0;o<brVidove;o++){
    obshto+=maxZaKutia[o][0];
    brZaVid[maxZaKutia[o][1]]=brZaVid[maxZaKutia[o][1]]+maxZaKutia[o][0];
}
cout<<obshto<<" "<<prazni<<endl;
for(long long o=0;o<brVidove;o++){
    cout<<brZaVid[o]<<" ";
}
return 0;
}
/*
6
9 6 4 10 2 3
4
6 7 4 9
4
23
7
14
35
6
88
5
13
25
30
10
*/
