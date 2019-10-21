#include <iostream>
using namespace std;
class Board {
	int size;
	int boats;
	int** boatsC;
	int usedB = 0;
	public:
		Board (int s, int b){
			boats = b;
			size = s;
			boatsC = new int*[boats];
			for (int i = 0; i < boats; i ++){
				boatsC[i] = new int[2];
			}
		}
		Board (){
			boats = 5;
			size = 5;
			boatsC = new int*[boats];
			for (int i = 0; i < boats; i ++){
				boatsC[i] = new int[2];
			}
		}
		~Board (){
			for(int i = 0; i < boats; i ++) {
			    delete [] boatsC[i];
			}
			delete [] boatsC;
		}
		void addBoat(int x, int y){
			boatsC[usedB][0] = x;
			boatsC[usedB][1] = y;
			usedB ++;
		}
		void setBoat(int i, int x, int y){
			boatsC[i][0] = x;
			boatsC[i][1] = y;
		}
		int* getBoat(int i){
			int a[] = {
				boatsC[i][0], 
				boatsC[i][1]
			};
			return a;
		}
		void deleteBoat(int j){ 
			for(int i = j + 1; i < usedB; i ++){
				boatsC[i - 1][0] = boatsC[i][0];
				boatsC[i - 1][1] = boatsC[i][1];
			}
			usedB --;
		}
		bool killBoatAt(int x, int y){
			for(int i = 0; i < usedB; i ++){
				if(boatsC[i][0] == x and boatsC[i][1] == y) {
					deleteBoat(i);
					return true;
				}
			}
			return false;
		}
		void setSize(int i){
			size = i;
		}
		void setBoats(int j){
			for(int i = 0; i < boats; ++i) {
			    delete [] boatsC[i];
			}
			delete [] boatsC;
			boats = j;
			boatsC = new int*[boats];
			for (int i = 0; i < boats; i ++){
				boatsC[i] = new int[2];
			}
		}
		bool win(){
			return usedB == 0; 
		}
		int getBoats(){
			return usedB;
		}
		friend ostream& operator<<(ostream& out, const Board b){
			for(int x = 0; x < b.size; x ++){
				for(int y = 0; y < b.size; y ++){
					bool imaLi = false;
					for(int i = 0; i < b.usedB; i ++){
						if(b.boatsC[i][0] == x and b.boatsC[i][1] == y){
							cout << "X ";
							imaLi = true;
							break;
						}
					}
					if(!imaLi) cout<<"~ ";
				}
				cout<<endl;
			}
			return out;
		}
};
class Game {
	Board b1, b2;
	public:
		Game (int s, int b){
			b1.setBoats(b);
			b1.setSize(s);
			b2.setBoats(b);
			b2.setSize(s);
		}
		Game (){
			
		}
		int start_game (){
			cout << "Starting the game..\n";
			cout << "Please choose the board size and the boats count:\nBoard size: ";
			int size;
			cin >> size;
			b1.setSize(size);
			b2.setSize(size);
			cout << "Boats count: ";
			int boatsCount;
			cin >> boatsCount;
			b1.setBoats(boatsCount);
			b2.setBoats(boatsCount);
			cout << "Player1 must choose the positionings of his boats (without Player2 looking):\n";
			int x, y;
			for(int i = 0; i < boatsCount; i ++){
				cin >> x >> y;
				b1.addBoat(x, y);
			}
			cout << "Now Player2 must choose the positionings of his boats (without Player1 looking):\n";
			for(int i = 0; i < boatsCount; i ++){
				cin >> x >> y;
				b2.addBoat(x, y);
			}
			int turn = 1;
			while(!b1.win() and !b2.win()){
				cout << "\nIt's Player" << turn << "'s turn. You should choose, where to strike\n";
				cin >> x >> y;
				if (turn == 1) {
					if(b2.killBoatAt(x, y)) cout << "You have hit one of Player2's boats!\nHe has now only " << b2.getBoats() << " boats left.";
					else cout << "You missed!";
					turn = 2;
				}
				else {
					if(b1.killBoatAt(x, y)) cout << "You have hit one of Player1's boats!\nHe has now only " << b1.getBoats() << " boats left.";
					else cout << "You missed!";
					turn = 1;
				}
			}
			if(turn == 1) return 2;
			else return 1;
		}
};
int main(){
Game g;
cout << " => Player" << g.start_game() << " won the game";
return 0;
}
/*
5
3
1 2 
0 0
2 1
 
3 4 
4 3 
2 0
*/
