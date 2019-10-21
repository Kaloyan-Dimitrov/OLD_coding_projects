#include <stdio.h>
#include <iostream>
#include <cstring>
#include <string.h>
#include <stdlib.h>

long long n,chisla[100],d=2,sbor,razlika;
using namespace std;
int main(){
char vhod[100][100],dei,cifri[10][4]={"no","pa","re","ci","vo","mu","xa","ze","bi","so"};
cin>>n>>dei;
for(long long i=0;i<n;i++){
    cin.getline(vhod[i],50,'\n');
}
for(long long i=0;i<n;i++){
    d=0;
    for(long long j=strlen(vhod[i])-2;j>=0;j-=2){
        for(long long m=0;m<10;m++){
            if(vhod[i][j]==cifri[m][0]){
                if(strlen(vhod[i])-j==2){
                    chisla[i]=chisla[i]+m;
                }
                else{
                    if((strlen(vhod[i])-j)-d==1){
                        chisla[i]=chisla[i]+m*10;
                    }
                    if((strlen(vhod[i])-j)-d==2){
                        chisla[i]=chisla[i]+m*10*10;
                    }
                    if((strlen(vhod[i])-j)-d==3){
                        chisla[i]=chisla[i]+m*10*10*10;
                    }
                    if((strlen(vhod[i])-j)-d==4){
                        chisla[i]=chisla[i]+m*10*10*10*10;
                    }
                    if((strlen(vhod[i])-j)-d==5){
                        chisla[i]=chisla[i]+m*10*10*10*10*10;
                    }
                    if((strlen(vhod[i])-j)-d==6){
                        chisla[i]=chisla[i]+m*10*10*10*10*10*10;
                    }
                    if((strlen(vhod[i])-j)-d==7){
                        chisla[i]=chisla[i]+m*10*10*10*10*10*10*10;
                    }
                    if((strlen(vhod[i])-j)-d==8){
                        chisla[i]=chisla[i]+m*10*10*10*10*10*10*10*10;
                    }
                    if((strlen(vhod[i])-j)-d==9){
                        chisla[i]=chisla[i]+m*10*10*10*10*10*10*10*10*10;
                    }
                    if((strlen(vhod[i])-j)-d==10){
                        chisla[i]=chisla[i]+m*10*10*10*10*10*10*10*10*10*10;
                    }
                    if((strlen(vhod[i])-j)-d==11){
                        chisla[i]=chisla[i]+m*10*10*10*10*10*10*10*10*10*10*10;
                    }
                    if((strlen(vhod[i])-j)-d==12){
                        chisla[i]=chisla[i]+m*10*10*10*10*10*10*10*10*10*10*10*10;
                    }
                    if((strlen(vhod[i])-j)-d==13){
                        chisla[i]=chisla[i]+m*10*10*10*10*10*10*10*10*10*10*10*10*10;
                    }
                    if((strlen(vhod[i])-j)-d==14){
                        chisla[i]=chisla[i]+m*10*10*10*10*10*10*10*10*10*10*10*10*10*10;
                    }
                    if((strlen(vhod[i])-j)-d==15){
                        chisla[i]=chisla[i]+m*10*10*10*10*10*10*10*10*10*10*10*10*10*10*10;
                    }
                    d++;
                }
            }
        }
    }
    if(chisla[i]>10){
        chisla[i]=chisla[i]/1000+chisla[i]%10;
    }
}
if(dei=='+'){
    for(long long i=0;i<n;i++){
        sbor=sbor+chisla[i];
    }
    while(sbor!=0){
        cout<<cifri[sbor%10];
        sbor=sbor/10;
    }
}
if(dei=='-'){
    razlika=chisla[0];
    for(long long i=1;i<n;i++){
        razlika=razlika-chisla[i];
    }
    while(razlika!=0){
        cout<<cifri[razlika%10];
        razlika/=10;
    }
}
cout<<endl;
return 0;
}


