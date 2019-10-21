#include <iostream>
using namespace std;
int main (){
char pole[11][11];
bool parvoLiE=true, daSpraLi=false;
char sim='a';
long long broiSvarzaniKomponenti=0;
long long br=0;
for(long long y=0;y<10;y++){
    for(long long x=0;x<10;x++){
        cin>>pole[x][y];
        if(parvoLiE and pole[x][y]=='.'){
            pole[x][y]=sim+broiSvarzaniKomponenti;
            parvoLiE=false;
        }
    }
}
for(br=0;br<50;br++){
    for(long long y=0;y<10;y++){
        for(long long x=0;x<10;x++){
            if(pole[x][y]!='.' and pole[x][y]!='#'){
                if(pole[x][y-1]=='.')pole[x][y-1]=pole[x][y];
                if(pole[x][y+1]=='.')pole[x][y+1]=pole[x][y];
                if(pole[x-1][y]=='.')pole[x-1][y]=pole[x][y];
                if(pole[x+1][y]=='.')pole[x+1][y]=pole[x][y];
            }
        }
    }
    broiSvarzaniKomponenti++;
    daSpraLi=false;
    for(long long y=0;y<10;y++){
        for(long long x=0;x<10;x++){
            if(pole[x][y]=='.'){
                pole[x][y]=sim+broiSvarzaniKomponenti;
                daSpraLi=true;
                break;
            }
        }
        if(daSpraLi){
            break;
        }
    }
}
cout<<endl;
for(long long y=0;y<10;y++){
    for(long long x=0;x<10;x++){
        cout<<pole[x][y];
    }
    cout<<endl;
}
return 0;
}
/*
...#....#.
.#..#....#
...#......
###.#....#
...#.#..#.
.#..#.##.#
...#....#.
.#.......#
..#######.
.#..#....#

*/
