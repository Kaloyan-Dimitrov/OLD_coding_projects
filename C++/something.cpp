
#include <iostream>
using namespace std;
long long iskani[1000];
int main (){
    long long n;
    cin>>n;
long long t[n],th[n],br=0,ravni=0;
for(long long k=0;k<n;k++){
    cin>>t[k]>>th[k];
}
long long o=n-1;
for(long long i=0;i<n;i++){
        br=0;
        for(long long drugi=i;drugi<n;drugi++){
            if(t[i]>=t[drugi]){
                br++;
            }
        }
        if(br==n){
            iskani[o]=i;
            if(t[o]==t[o+1] and o!=n-1){
                if(th[o]>th[o+1]){
                    swap(iskani[o+1],iskani[o]);
                }
            }
            o--;
        }
}
for(long long p=0;p<n;p++){
    cout<<t[iskani[p]]<<th[iskani[p]];
}
return 0;
}
