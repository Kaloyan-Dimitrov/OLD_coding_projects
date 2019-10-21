#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;
int main (){
FILE * pFile;
pFile = fopen("in.txt", "r");
if (pFile == NULL) perror ("Error opening file");
char pole[12][12], poleZaIzhod[12][12];
bool vecheminahli=false;
char simvol='B';
long long x, y, pati=0, vragX, vragY, celX=0, celY=0;
for(y=0;y<=11;y++){
    for(x=0;x<=11;x++){
        pole[x][y]='#';
    }
}
for(y=1;y<=10;y++){
    for(x=1;x<=10;x++){
        pole[x][y] = fgetc(pFile);
        poleZaIzhod[x][y]=pole[x][y];
        if(pole[x][y]=='+'){
            pole[x][y]='.';
            vragX=x;
            vragY=y;
        }
    }
    fgetc(pFile);
}
/*for(x=0;x<15;x+=1){
    cout<<endl;
}*/
for(pati=0;pati<60;pati++){
    for(y=1;y<11;y++){
        for(x=1;x<11;x++){
            if(pole[x][y]==simvol-1){
                if(pole[x][y-1]=='.')pole[x][y-1]=simvol;
                if(pole[x][y+1]=='.')pole[x][y+1]=simvol;
                if(pole[x-1][y]=='.')pole[x-1][y]=simvol;
                if(pole[x+1][y]=='.')pole[x+1][y]=simvol;
            }
            if(pole[x][y]=='A'){
                celX=x;
                celY=y;
            }
        }
    }
    simvol++;
}
while(!(vragX==celX and vragY==celY)){
    if(pole[vragX][vragY]>pole[vragX+1][vragY] and pole[vragX+1][vragY]!='#'){
        vragX++;
        //cout<<vragX<<" "<<vragY<<endl;
    }
    else{
        if(pole[vragX][vragY]>pole[vragX-1][vragY] and pole[vragX-1][vragY]!='#'){
            vragX--;
            //cout<<vragX<<" "<<vragY<<endl;
        }
        else{
            if(pole[vragX][vragY]>pole[vragX][vragY+1] and pole[vragX][vragY+1]!='#'){
                vragY++;
                //cout<<vragX<<" "<<vragY<<endl;
            }
            else{
                if(pole[vragX][vragY]>pole[vragX][vragY-1] and pole[vragX][vragY-1]!='#'){
                    vragY--;
                    //cout<<vragX<<" "<<vragY<<endl;
                }
                else{

                }
            }
        }
    }
    if(!(vragX == celX and vragY == celY))poleZaIzhod[vragX][vragY]='+';
}
cout<<endl;
for(y=1;y<=10;y++){
    for(x=1;x<=10;x++){
        cout<<poleZaIzhod[x][y];
    }
    cout<<endl;
}
cout<<endl;
return 0;
}
/*
#+#...#...
#.#.#.#.#.
#.#.#.#.#.
#.#.#.#.#.
#.#.#...#.
#.#.#.#.#.
#.#.#.#.#.
#.#.###.#.
#.#.#.#.#.
#...#...#A

.........0
.#.......#
0.........
#.........
.....#....
....#0#...
..........
..........
..........
..........
*/
/*
........#.
.##.....+#
...#....#.
.#..#....#
...#.#..#.
.#..#A##.#
...#....#.
....##...#
...#....#.
.#....#..#


*/
