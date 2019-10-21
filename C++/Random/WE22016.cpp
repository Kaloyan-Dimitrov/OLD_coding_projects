#include <iostream>
using namespace std;
int main(){
long long deca,teglo,hvarliane,niva,most,dulshina,min=300,max=0,m=0,k=0;
cin>>deca;
for(long long j=0;j<deca;j++){
    cin>>teglo>>hvarliane;
    if(teglo>max){
        /*for(long long g=0;g<deca;g++){
            if(teglo[goliamo]>=teglo[g]){
                m++;
                //cout<<1<<" "<<teglo[goliamo]<<endl;
            }
        }
        if(m==deca){
            max=teglo[goliamo];
        }
        m=0;
    }*/
    max=teglo;
    }
    if(hvarliane<=min){
        min=hvarliane;
    }
}
//cout<<min<<" "<<max<<" ";
cin>>niva;
long long minatiniva=0;
for(long long j=0;j<niva;j++){
    cin>>most>>dulshina;
     if(most>=max and dulshina<=min){
        minatiniva++;
    }
}

/*for(long long goliamo=0;goliamo<deca;goliamo++){

}
/*
cout<</*min<<" "<<max<<" ";
for(long long malko=0;malko<deca;malko++){
    if(dulshina[malko]<min){
        for(long long g=0;g<deca;g++){
            if(dulshina[malko]<=dulshina[g]){
                k++;
            }
        }
        if(k==deca){
            min=dulshina[malko];
        }
        k=0;
    }
}

for(long long j=0;j<niva;j++){
    if(most[j]>=max and dulshina[j]<=min){
        minatiniva++;
    }
}
*/
cout<<minatiniva;
return 0;
}
