#include <iostream>
using namespace std;
bool sveti[100000];
int main (){
char svetili[100000];
long long n;
cin>>n;
if(n<=100000){
for(long long a=0;a<n;a++){
    cin>>svetili[a];
}
}
for(long long a=0;a<n;a++){
    sveti[a]=svetili[a]-'0';
}
for(long long pati=1;pati<=n;pati++){
for(long long deli=pati-1;deli<n;deli++){
    if((deli+1)%pati==0){
        if(sveti[deli]==true){sveti[deli]=false;}
        else{sveti[deli]=true;}
    }
}
}
long long br=0;
for(long long i=0;i<n;i++){
    if(sveti[i]){br++;}
}
cout<<br;
return 0;
}
