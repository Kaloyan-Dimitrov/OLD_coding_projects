#include <iostream>
using namespace std;
char table[10] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
char checkWin(){
	if (table[0] == table[1] && table[1] == table[2]) return table[0];
	else if (table[3] == table[3] && table[3] == table[5]) return table[3]
	else if (table[6] == table[7] && table[7] == table[8]) return table[6];
	else if (table[0] == table[3] && table[3] == table[6]) return table[0];
	else if (table[1] == table[4] && table[4] == table[7]) return table[1];
	else if (table[2] == table[5] && table[5] == table[8]) return table[2];
	else if (table[0] == table[4] && table[4] == table[8]) return table[0];
	else if (table[2] == table[4] && table[4] == table[6]) return table[2];
	else if (square[0] != ' ' && square[1] != ' ' && square[2] != ' ' 
		  && square[3] != ' ' && square[4] != ' ' && square[5] != ' '
		  && square[6] != ' ' && square[7] != ' ' && square[8] != ' ') return 't';
	else return 'p';
}

void board(){
	system("cls");
	cout<<"Tic Tac Toe\n";
	cout<<"Player 1 (X)  -  Player 2 (O)"<<endl<<endl;
	cout<<endl;
	cout<<"     |     |     "<<endl;
	cout<<"  "<<table[1]<<"  |  "<<table[2]<<"  |  "<<table[3]<<endl;
	cout<<"_____|_____|_____"<<endl;
	cout<<"     |     |     "<<endl;
	cout<<"  "<<table[4]<<"  |  "<<table[5]<<"  |  "<<table[6]<<endl;
	cout<<"_____|_____|_____"<<endl;
	cout<<"     |     |     "<<endl;
	cout<<"  "<<table[7]<<"  |  "<<table[8]<<"  |  "<<table[9]<<endl;
	cout<<"     |     |     "<<endl<<endl;
}

int minimax(char[] table){
	if(checkWin() != 'p') return 10;
}

int turnAi(){
	return minimax(table);
}

void game()
{
	do
	{
		board();
		cout<<"Player "<<player<<", enter a number (0 - 8):  ";
		cin >> choice;
		while (!(choice >= 0 and choice <= 8 and table[choice] ==' ')){
			cout<<"Inavlid data. Try again: ";
			cin>>choice;
		}
		table[choice] = 'X';
		board();
		table[turnAi()] = 'O';
	} while(checkWin() == 'p');
	board();
	if(checkWin() != 't') cout<<"You lose!";
	else cout<<"Game draw!";
	
	return 0;
}

int main(){
	game();
	return 0;
}
