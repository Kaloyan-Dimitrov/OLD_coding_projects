#include <iostream>
#include <string>
#include <io.h>
#include <fcntl.h>
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>  
#include <windows.h>
using namespace std;
int field[6][6];
bool found[6][6];
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
void generateF(){
	for(int c = 1;c < 10;c ++){
		for(int i = 0;i < 4;i ++){
			int x = rand() % 6, y = rand() % 6;
			while(field[y][x] != 0){
				x = rand() % 6;
				y = rand() % 6;
			}
			field[y][x] = c;
		}
	}
} 

bool win(){
	for(int y = 0;y < 6;y ++){
		for(int x = 0;x < 6;x ++){
			if(found[y][x] == false) return false; 
		}
	}
	return true;
}

void out(){
	SetConsoleTextAttribute(hConsole, 15);
	cout<<"    1 2 3 4 5 6\n\n";
	for(int y = 0;y < 6;y ++){
		cout<<y+1<<"   ";
		for(int x = 0;x < 6;x ++){
			if(found[y][x]){
				SetConsoleTextAttribute(hConsole, field[y][x] + 5);
				cout<<char(-2)<<" ";
			}
			else{
				SetConsoleTextAttribute(hConsole, 15);
				cout<<char(-2)<<" ";
			}
		}
		cout<<endl;
	}
	cout<<endl;
}

int play(){
	int x[2], y[2];
	out();
	cin>>x[0]>>y[0];
	cin>>x[1]>>y[1];
	x[0]--;
	x[1]--;
	y[0]--;
	y[1]--;
	found[x[1]][y[1]] = true;
	found[x[0]][y[0]] = true;
	if(field[x[0]][y[0]] != field[x[1]][y[1]]){
		out();
		found[x[1]][y[1]] = false;
		found[x[0]][y[0]] = false;
	}
	if(!win()) play();
	else return 0;
}
int main (){
SetConsoleTextAttribute(hConsole, 15);
srand (time(NULL));
generateF();
play();
cout<<"\nYou win!!";
return 0;
}
// 6 - 14
