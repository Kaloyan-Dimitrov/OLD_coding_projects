#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int grid[1000][1000];
bool win(int n,int x, int y){
	bool win = true;
	for(int i = 2;i < n + 2 and win;i ++){
		for(int j = 2;j < n + 2 and win;j ++){
			if(grid[i][j] == 0 and i != x and j != y) win = false;
		}
	}
	return win;
}
int freeSpace(int n, int x, int y){
	bool free[] = {0, 0, 0, 0, 0, 0, 0, 0};
	cout<<1;
	if(grid[x - 1][y - 2] == 0 and freeSpace(n, x - 1, y - 2) != -1 and !win(n, x - 1, y - 2)) free[0] = true;
	if(grid[x + 1][y - 2] == 0 and freeSpace(n, x + 1, y - 2) != -1 and !win(n, x + 1, y - 2)) free[1] = true;
	if(grid[x - 2][y - 1] == 0 and freeSpace(n, x - 2, y - 1) != -1 and !win(n, x - 2, y - 1)) free[2] = true;
	if(grid[x + 2][y - 1] == 0 and freeSpace(n, x + 2, y - 1) != -1 and !win(n, x + 2, y - 1)) free[3] = true;
	if(grid[x - 2][y + 1] == 0 and freeSpace(n, x - 2, y + 1) != -1 and !win(n, x - 2, y + 1)) free[4] = true;
	if(grid[x + 2][y + 1] == 0 and freeSpace(n, x + 2, y + 1) != -1 and !win(n, x + 2, y + 1)) free[5] = true;
	if(grid[x - 1][y + 2] == 0 and freeSpace(n, x - 1, y + 2) != -1 and !win(n, x - 1, y + 2)) free[6] = true;
	if(grid[x + 1][y + 2] == 0 and freeSpace(n, x + 1, y + 2) != -1 and !win(n, x + 1, y + 2)) free[7] = true;
	bool ima = false;
	if(free[0] or free[1] or free[2] or free[3] or free[4] or free[5] or free[6] or free[7]) ima = true;
	if(ima){
		int outp = rand () % 8;
		while(!free[outp]) outp = rand () % 8;
		return outp;
	}
	else return -1;
}
void out(int n, int cx, int cy){
	for(int i = 2;i < n;i ++){
		for(int j = 2;j < n;j ++){
			if(i == cx and j == cy) cout<<"x ";
			else cout<<grid[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}
bool play(int n, int sx, int sy){
	int x = sx, y = sy;
	grid[x][y] = 1;
	out(n, x, y);
	if(freeSpace(n, x, y) == -1) cout<<"No\n";
	else{
		switch(freeSpace(n, x, y)){
			case 0 :{
				x --;
				y -=2;
				break;
			}
			case 1 :{
				x ++;
				y -=2;
				break;
			}
			case 2 :{
				x -=2;
				y --;
				break;
			}
			case 3 :{
				x +=2;
				y --;
				break;
			}
			case 4 :{
				x -=2;
				y ++;
				break;
			}
			case 5 :{
				x +=2;
				y ++;
				break;
			}
			case 6 :{
				x --;
				y +=2;
				break;
			}
			case 7 :{
				x ++;
				y +=2;
				break;
			}
		}
		play(n, x, y);
	}
}
int main (){
int n, sx, sy;
srand (time(NULL));
cin>>n>>sx>>sy;
for(int i = 0;i < n + 4;i ++){
	for(int j = 0;j < 2;j ++){
		grid[i][j] = 1;
		grid[i][n + 3 - j] = 1;
	}
}	
for(int i = 0;i < 2;i ++){
	for(int j = 0;j < n + 4;j ++){
		grid[i][j] = 1;
		grid[n + 3 - i][j] = 1;
	}
}
play(n + 2, sx + 2, sy + 2);
return 0;
}
/*


n = 5
0 1 2 3 4
1
2
3
4

. X . X .
2 X X X 3
X X x X X
4 X X . X 
. 6 X X X

*/
