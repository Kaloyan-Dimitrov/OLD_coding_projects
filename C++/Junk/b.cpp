#include <iostream>
using namespace std;
bool sveti[100000],deliteli[100000],svetil;
int main (){
long long n,broi=0;
char svetili[100000];
cin>>n;
if(n<=100000){
for(long long a=0;a<n;a++){
    cin>>svetili[a];
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
}
else{
for(long long a=1;a<=n;a++){
    for(long long x=a-1;x<n;x++){
        if((x+1)%a==0){deliteli[a]++;}
    }
}
for(long long h=0;h<n;h++){
    svetil=false;
    for(long long l=1;l<=deliteli[h];l++){
        if(svetil==true){svetil=false;}
        else{svetil=true;}
    }
    if(svetil){broi++;}
}
cout<<broi;
}
return 0;
}
