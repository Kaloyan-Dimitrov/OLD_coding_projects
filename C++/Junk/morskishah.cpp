#include <iostream>
using namespace std;
int main (){
char poleta[11][11];
long long broihodove=0,razmerX,razmerY;
char simvol,simvolNaA,simvolNaB;
//cout<<"Izberete simvol za igrach 1(x ili o):";
cout<<"Choose symbol for player 1 (x or o): ";
cin>>simvolNaA;
cout<<"Choose size of the playing field (up to 99x99): ";
cin>>razmerX>>razmerY;
long long naidolnasvobodnakletka[razmerX+2];
for(long long pr=0;pr<razmerX+2;pr++){
    naidolnasvobodnakletka[pr]=razmerY;
}
if(simvolNaA=='x'){
    simvolNaB='o';
}
else{
    simvolNaB='x';
}
razmerX+=2;
razmerY+=2;
for(long long nomer=1;nomer<razmerX;nomer++){
    poleta[0][nomer]='0'+nomer;
}
for(long long y=0;y<razmerY;y++){
    for(long long x=0;x<razmerX;x++){
        poleta[x][y]='=';
    }
}
for(long long y=1;y<razmerY-1;y++){
    for(long long x=1;x<razmerX-1;x++){
        poleta[x][y]='.';
    }
}
for(long long nomer=1;nomer<razmerX;nomer++){
    poleta[nomer][razmerY]='0'+nomer;
}
/*for(long long nomer=1;nomer<razmerX-1;nomer++){
    poleta[nomer][razmerX]='0'+nomer;
}*/
for(long long y=0;y<razmerY;y++){
    for(long long x=0;x<razmerX;x++){
        cout<<poleta[x][y];
    }
    cout<<endl;
}
long long igranX,brhd,brhl;
bool niamamPobeditel=true;
while(niamamPobeditel){
    broihodove++;
    cin>>igranX;
    if(broihodove%2==1){
        simvol=simvolNaA;
    }
    else{
        simvol=simvolNaB;
    }
    if(poleta[igranX][naidolnasvobodnakletka[igranX]]=='.'){
    poleta[igranX][naidolnasvobodnakletka[igranX]]=simvol;}
    else{cout<<"Invalid move on column "<<igranX<<"\n";}
    /*if(naidolnasvobodnakletka[igranX]!=0){
        poleta[igranX+1][0]='.';
    }
    for(long long y=0;y<9;y++){
        for(long long x =0;x<8;x++){
            cout<<poleta[y][x];
        }
        cout<<endl;
    }*/
    for(long long y=0;y<razmerY;y++){
        for(long long x=0;x<razmerX;x++){
            cout<<poleta[x][y];
        }
    cout<<endl;
    }
    for(long long r=1;r<=razmerY-2;r++){
    for(long long k=1;k<=razmerX-2;k++){
        brhd=0;
        brhl=0;
        for(long long hd=0;hd<4;hd++){
            if(poleta[k+hd][r]==simvol){
                brhd++;
            }
        }
        if(brhd==4){
            cout<<"The player with symbol "<<simvol<<" wins";
            return 0;
        }
    }
    }
    for(long long r=1;r<=razmerY-2;r++){
    for(long long k=1;k<=razmerX-2;k++){
        brhd=0;
        brhl=0;
        for(long long hd=0;hd<4;hd++){
            if(poleta[k][r+hd]==simvol){
                brhd++;
            }
        }
        if(brhd==4){
            cout<<"The player with symbol "<<simvol<<" wins";
            return 0;
        }
    }
    }
    for(long long r=1;r<=razmerY-2;r++){
    for(long long k=1;k<=razmerX-2;k++){
        brhd=0;
        brhl=0;
        for(long long hd=0;hd<4;hd++){
            if(poleta[k+hd][r+hd]==simvol){
                brhd++;
            }
        }
        if(brhd==4){
            cout<<"The player with symbol "<<simvol<<" wins";
            return 0;
        }
    }
    }
    for(long long r=1;r<=razmerY-2;r++){
    for(long long k=1;k<=razmerX-2;k++){
        brhd=0;
        brhl=0;
        for(long long hd=0;hd<4;hd++){
            if(poleta[k-hd][r+hd]==simvol){
                brhd++;
            }
        }
        if(brhd==4){
            cout<<"The player with symbol "<<simvol<<" wins";
            return 0;
        }
    }
    }
    naidolnasvobodnakletka[igranX]--;
}
return 0;
}
