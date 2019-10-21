#include <iostream>
using namespace std;
int main (){
char pole[11][11];
bool vecheminahli=false;
for(long long y=0;y<10;y++){
    for(long long x=0;x<10;x++){
        cin>>pole[y][x];
    }
}
for(long long y=0;y<10;y++){
    for(long long x=0;x<10;x++){
        if(pole[y][x]=='0' and !vecheminahli){
            if(x==0 and y==0){
                if(pole[y][x+1]=='.')pole[y][x+1]='1';
                if(pole[y+1][x]=='.')pole[y][x+1]='1';
                vecheminahli=true;
            }
            if(x==9 and y==9){
                if(pole[y][x-1]=='.')pole[y][x+1]='1';
                if(pole[y-1][x]=='.')pole[y][x+1]='1';
                vecheminahli=true;
            }
            if(x==0 and y==9){
                if(pole[y][x+1]=='.')pole[y][x+1]='1';
                if(pole[y-1][x]=='.')pole[y][x+1]='1';
                vecheminahli=true;
            }
            if(x==9 and y==0){
                if(pole[y][x-1]=='.')pole[y][x+1]='1';
                if(pole[y+1][x]=='.')pole[y][x+1]='1';
                vecheminahli=true;
            }
            if(x==0 and y!=0 and y!=9){
                if(pole[y][x-1]=='.')pole[y][x+1]='1';
                if(pole[y-1][x]=='.')pole[y][x+1]='1';
                if(pole[y+1][x]=='.')pole[y][x+1]='1';
                vecheminahli=true;
            }
            if(x==9 and y!=0 and y!=9){
                if(pole[y][x-1]=='.')pole[y][x+1]='1';
                if(pole[y-1][x]=='.')pole[y][x+1]='1';
                if(pole[y+1][x]=='.')pole[y][x+1]='1';
                vecheminahli=true;
            }
            if(y==0 and x!=0 and x!=9){
                if(pole[y][x-1]=='.')pole[y][x+1]='1';
                if(pole[y][x+1]=='.')pole[y][x+1]='1';
                if(pole[y+1][x]=='.')pole[y][x+1]='1';
                vecheminahli=true;
            }
            if(y==9 and x!=0 and x!=9){
                if(pole[y][x-1]=='.')pole[y][x+1]='1';
                if(pole[y][x+1]=='.')pole[y][x+1]='1';
                if(pole[y-1][x]=='.')pole[y][x+1]='1';
                vecheminahli=true;
            }
            if(!vecheminahli){
                if(pole[y][x-1]=='.')pole[y][x+1]='1';
                if(pole[y][x+1]=='.')pole[y][x+1]='1';
                if(pole[y-1][x]=='.')pole[y][x+1]='1';
                if(pole[y+1][x]=='.')pole[y][x+1]='1';
                vecheminahli=true;
            }
        }
        vecheminahli=false;
    }
}
return 0;
}
