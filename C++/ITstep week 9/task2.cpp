#include <iostream>
#include <queue>
#include <string>
#include <io.h>
#include <fcntl.h>
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>   
using namespace std;
int main (){
FILE * pFile;
pFile = fopen("in1.txt", "r");
if (pFile == NULL) perror ("Error opening file");
char pole[12][12], poleZaIzhod[12][12];
bool vecheminahli=false, dv[4] = {0, 0, 0, 0};
char simvol='B';
int x, y, pati = 0, myX, myY, celX = 0, celY = 0, prx = 0, pry = 0;
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
            myX=x;
            myY=y;
        }
        if(pole[x][y]=='A'){
            celX = x;
            celY = y;
            prx = x;
            pry = y;
        }
    }
    fgetc(pFile);
}
/*for(x=0;x<15;x+=1){
    cout<<endl;
}*/
for(pati=0;pati<45;pati++){
	for(y=1;y<=10;y++){
	    for(x=1;x<=10;x++){
	        if(pole[x][y] == simvol - 1){
	        	if(pole[x][y+1] == '.') pole[x][y+1] = simvol;
	        	if(pole[x][y-1] == '.') pole[x][y-1] = simvol;
	        	if(pole[x+1][y] == '.') pole[x+1][y] = simvol;
	        	if(pole[x-1][y] == '.') pole[x-1][y] = simvol;
			}
	    }
	}
    simvol++;
}
while(!(myX == celX and myY == celY)){
    if(pole[myX][myY]>=pole[myX+1][myY] and pole[myX+1][myY]!='#'){
        myX++;
        poleZaIzhod[myX][myY] = '6';
    }
    else {
		if(pole[myX][myY]>=pole[myX-1][myY] and pole[myX-1][myY]!='#'){
            myX--;
        	poleZaIzhod[myX][myY] = '4';
        }
	    else {
			if(pole[myX][myY]>=pole[myX][myY+1] and pole[myX][myY+1]!='#'){
	            myY++;
	    		poleZaIzhod[myX][myY] = '2';
	        }
		    else{
				if(pole[myX][myY]>=pole[myX][myY-1] and pole[myX][myY-1]!='#'){
		            myY--;
					poleZaIzhod[myX][myY] = '8';
		        }
		    }
		}
	}
}
for(y=1;y<=10;y++){
    for(x=1;x<=10;x++){
    	if(x == celX and y == celY) poleZaIzhod[x][y] = '+';
        if(poleZaIzhod[x][y] == '2'){
			_setmode(_fileno(stdout), _O_U16TEXT);
			wcout << L"\u2193";
			_setmode(_fileno(stdout), _O_TEXT);
		}
        else if(poleZaIzhod[x][y] == '8'){
			_setmode(_fileno(stdout), _O_U16TEXT);
			wcout << L"\u2191";
			_setmode(_fileno(stdout), _O_TEXT);
		}
        else if(poleZaIzhod[x][y] == '4'){
			_setmode(_fileno(stdout), _O_U16TEXT);
			wcout << L"\u2190";
			_setmode(_fileno(stdout), _O_TEXT);
		}
        else if(poleZaIzhod[x][y] == '6'){
			_setmode(_fileno(stdout), _O_U16TEXT);
			wcout << L"\u2192";
			_setmode(_fileno(stdout), _O_TEXT);
		}
		else cout<<poleZaIzhod[x][y];
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
