#include <iostream>
using namespace std;
int main (){
cout<<1;
char pole[12][12];
bool vecheminahli=false;
char simvol='a';
for(long long y=1;y<=10;y++){
    for(long long x=1;x<=10;x++){
        cin>>pole[x][y];
    }
}
for(simvol='a';simvol<'b'+50;simvol++){
    for(long long y=1;y<=10;y++){
        for(long long x=1;x<=10;x++){
            if(pole[x][y]==simvol-1){
                if(pole[x][y-1]=='.')pole[x][y-1]=simvol;
                if(pole[x][y+1]=='.')pole[x][y+1]=simvol;
                if(pole[x-1][y]=='.')pole[x-1][y]=simvol;
                if(pole[x+1][y]=='.')pole[x+1][y]=simvol;
            }
        }
    }
}
cout<<endl;
for(long long y=1;y<=10;y++){
    for(long long x=1;x<=10;x++){
        cout<<pole[x][y];
    }
    cout<<endl;
}
return 0;
}
/*
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
.##......#
...#....#.
.#..#....#
...#.#..#.
.#..#a##.#
...#....#.
....##...#
...#....#.
.#....#..#
*/
