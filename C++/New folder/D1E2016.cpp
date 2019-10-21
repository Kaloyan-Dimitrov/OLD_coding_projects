#include <iostream>
using namespace std;
long long broiT, nChislo, mesec, brVuz[12];
int main (){
cin>>broiT>>nChislo>>mesec;

for(long long i=1;i<=12;i++){
    long long p1=i+10, p2=nChislo;
    for(long long j=0;j<broiT;j++){
        if(j==10 or j>22){
            long long rez=(p1/10)*10000+(p1%10)*1000+p2*100+j, sb[3]={p1+p2,p1+j,p2+j};
            if(rez<10000){
                rez=p1*1000+p2*100+j;
            }
            if(rez%sb[0]==0 or rez%sb[1]==0 or rez%sb[2]==0){
                brVuz[i]++;
            }
            //cout<<i<<":"<<p1<<" "<<p2<<" "<<j<<" "<<rez;
            //cout<<endl;
        }
    }
    cout<<endl;
}
for(long long i=1;i<=12;i++){
    cout<<brVuz[i]<<endl;
}
return 0;
}
