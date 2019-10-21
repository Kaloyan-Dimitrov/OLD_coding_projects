#include <iostream>
#include <stdio.h>      
#include <stdlib.h>  
#include <time.h>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;
bool showed[10];
string name[2], pole[10];
int poles[10], pos[2], polS = 10;
int rollDice(){
	return rand() % 6 + 1;
}
bool first = true;
void show(int i){
	showed[i]=true;
}

void out(){
	for(int i=0;i<polS;i++){
		if(showed[i]) cout<<" "<<poles[i];
		else cout<<" X";	
	}
	cout<<endl;
	if(pos[0] != pos[1]){
		for(int i = 0;i < polS;i++){
			if(i == pos[0]) cout<<" "<<name[0][0];
			else if(i == pos[1]) cout<<" "<<name[1][0];
			else if(poles[i]<0 and showed[i]) cout<<"   ";
			else cout<<"  ";
		}
	}
	else{
		for(int i = 0;i < polS;i++){
			if(i == pos[1]) cout<<" "<<name[0][0];
			else if(poles[i]<0 and showed[i]) cout<<"   ";
			else cout<<"  ";
		}
		cout<<endl;
		for(int i = 0;i < polS;i++){
			if(i == pos[0]) cout<<" "<<name[1][0];
			else if(poles[i]<0 and showed[i]) cout<<"   ";
			else cout<<"  ";
		}
	}
	cout<<endl;
}

int play(int t){
	int turn = t;
	if(first){
		first = false;
		for(int i=1;i<polS-1;i++) pole[i] = "X";
		pole[0] = "0";
		pole[9] = "0";
		for(int i = 0 ; i < polS ; i ++){
			int ind = rand() % polS;
			if(rand() % 2 == 0){//+
				int c = rand() % ind + 1;
				poles[ind] = -c;
			}
			else {//-
				int c = rand() % polS - ind + 1;
				poles[ind] = c;
			}
		}
		poles[0] = 0;
		poles[9] = 0;
		//for(int i=0;i<10;i++) cout<<poles[i]<<" ";
		string v;
		cout<<" Ready to ROLL!!\n y/n ";
		cin>>v;
		if(v != "y"){
			cout<<" BYE!";	
		}
		else {
			cout<<" Set a nickname to player1\n ";
			cin>>name[0];
			cout<<" Set a nickname to player2\n ";
			cin>>name[1];
			int score;
			cout<<" *************************************\n";
			out();
			score = rollDice();
			pos[turn] += score;
			int found = poles[pos[turn]];
			if(poles[pos[turn]]!=0){
				pos[turn] += poles[pos[turn]];	
			}
			cout<<"\n Rolling dice... and "<<name[turn]<<" scored "<<score<<" and he found "<<found<<endl;
			show(pos[turn]);
			out();
			cout<<" *************************************\n";
			//for(int i=0;i<10;i++) cout<<pole[i]<<" ";
			if(turn == 0) play(1);
			else play(0);
		}
	}
	else {
		int score;
			cout<<" *************************************\n";
			out();
			score = rollDice();
			pos[turn] += score;
			int found = poles[pos[turn]];
			show(pos[turn]);
			if(poles[pos[turn]]!=0){
				pos[turn] += poles[pos[turn]];	
			}
			if(pos[turn]>=polS - 1) cout<<" "<<name[turn]<<" won the game with scoring "<<score;
			else{
				cout<<"\n Rolling dice... and "<<name[turn]<<" scored "<<score<<" and he found "<<found<<endl;
				out();
				cout<<" *************************************\n";
				//for(int i=0;i<polS;i++) cout<<poles[i]<<" ";
				cout<<endl;
				if(turn == 0) play(1);
				else play(0);
			}
	}
}
int main (){
srand(time(NULL));
play(0);
return 0;
}

