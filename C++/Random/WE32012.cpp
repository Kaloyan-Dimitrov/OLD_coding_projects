#include <iostream>
using namespace std;
int main (){
long long br,chisla[1000],miniz=1,ngminiz=0;
cin>>br;
for(long long ivav=0;ivav<br;ivav++){
    cin>>chisla[ivav];
}
for(long long ipr=0;ipr<br;ipr++){
    if(ipr!=0){
        if(chisla[ipr]>chisla[ipr-1]){
            miniz++;
        }
        else{
            if(ipr!=1){
                if(chisla[ipr-1]>chisla[ipr-2]){
                    if(miniz>ngminiz){
                        ngminiz=miniz;
                    }
                    miniz=1;
                }
            }
        }
    }
}
if(ngminiz==0){
    ngminiz=miniz;
}
cout<<ngminiz;
return  0;
}
