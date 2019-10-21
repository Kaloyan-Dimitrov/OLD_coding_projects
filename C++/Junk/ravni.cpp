#include <iostream>
using namespace std;
int main (){
char vhod[10001],simvol;
long long max=1,br=1,index,l=0;
cin>>vhod;
while(vhod[l]!='\0'){
    l++;
}

for(long long proverka=1;proverka<=l;proverka++){
    //cout<<"proverka-"<<proverka<<endl;
    if(br>max){
            max=br;
            simvol=vhod[proverka-2];
            index=proverka-br;
        }
    if(vhod[proverka]-1==vhod[proverka-1] or (vhod[proverka]-'A')+1-1==(vhod[proverka-1]-'a')+1 or (vhod[proverka]-'a')+1-1==(vhod[proverka-1]-'A')+1){
        br++;
    }
    //if(vhod[proverka]!=vhod[proverka-1] and vhod[proverka-2]==vhod[proverka-1])
    else{
        //cout<<br<<" "<<vhod[proverka-1]<<" "<<max<<endl;
            br=1;

    }

}
cout<<max/*<<" "<<simvol<<" "<<index*/
;
return 0;
}
//zeeelceennnciii
