#include <iostream>
#include <queue>
#include <string>
#include <io.h>
#include <fcntl.h>
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>       
using namespace std;
char suits[] = {'C', 'H', 'D', 'S'};
char rank[] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', '0', 'J', 'Q', 'K'};
string deck[52];

int findRank (char ch){
	for(int i=0;i<13;i++){
		if(rank[i] == ch) return i;
	}
	return -1;
}

void play (queue <string> D1, queue <string> D2){
	string cCard1 = D1.front();
	string cCard2 = D2.front();
	D1.pop();
	D2.pop();
	int winner;
	bool war = false;
	string wars1[3], wars2[3];
	if(cCard1[1] == cCard2[1]){
		war=true;
		cout<<"___WAR___\n ";
		if(cCard1[1]=='0'){
			switch(cCard1[0]){
				case 'S':{
					_setmode(_fileno(stdout), _O_U16TEXT);
					wcout << L"\u2660";
					_setmode(_fileno(stdout), _O_TEXT);
					break;
				}
				case 'H':{
					_setmode(_fileno(stdout), _O_U16TEXT);
					wcout << L"\u2665";
					_setmode(_fileno(stdout), _O_TEXT);
					break;
				}
				case 'D':{
					_setmode(_fileno(stdout), _O_U16TEXT);
					wcout << L"\u2666";
					_setmode(_fileno(stdout), _O_TEXT);
					break;
				}
				case 'C':{
					_setmode(_fileno(stdout), _O_U16TEXT);
					wcout << L"\u2663";
					_setmode(_fileno(stdout), _O_TEXT);
					break;
				}
			}
			cout<<"10";
		}	
		else{
			cout<<" ";
			switch(cCard1[0]){
				case 'S':{
					_setmode(_fileno(stdout), _O_U16TEXT);
					wcout << L"\u2660";
					_setmode(_fileno(stdout), _O_TEXT);
					break;
				}
				case 'H':{
					_setmode(_fileno(stdout), _O_U16TEXT);
					wcout << L"\u2665";
					_setmode(_fileno(stdout), _O_TEXT);
					break;
				}
				case 'D':{
					_setmode(_fileno(stdout), _O_U16TEXT);
					wcout << L"\u2666";
					_setmode(_fileno(stdout), _O_TEXT);
					break;
				}
				case 'C':{
					_setmode(_fileno(stdout), _O_U16TEXT);
					wcout << L"\u2663";
					_setmode(_fileno(stdout), _O_TEXT);
					break;
				}
			}
			cout<<cCard1[1];
		}	
		_setmode(_fileno(stdout), _O_U16TEXT);
		wcout << L"\u2194";
		_setmode(_fileno(stdout), _O_TEXT);
		if(cCard2[1]=='0'){
			switch(cCard2[0]){
				case 'S':{
					_setmode(_fileno(stdout), _O_U16TEXT);
					wcout << L"\u2660";
					_setmode(_fileno(stdout), _O_TEXT);
					break;
				}
				case 'H':{
					_setmode(_fileno(stdout), _O_U16TEXT);
					wcout << L"\u2665";
					_setmode(_fileno(stdout), _O_TEXT);
					break;
				}
				case 'D':{
					_setmode(_fileno(stdout), _O_U16TEXT);
					wcout << L"\u2666";
					_setmode(_fileno(stdout), _O_TEXT);
					break;
				}
				case 'C':{
					_setmode(_fileno(stdout), _O_U16TEXT);
					wcout << L"\u2663";
					_setmode(_fileno(stdout), _O_TEXT);
					break;
				}
			}
			cout<<"10";
		}	
		else{
			switch(cCard2[0]){
				case 'S':{
					_setmode(_fileno(stdout), _O_U16TEXT);
					wcout << L"\u2660";
					_setmode(_fileno(stdout), _O_TEXT);
					break;
				}
				case 'H':{
					_setmode(_fileno(stdout), _O_U16TEXT);
					wcout << L"\u2665";
					_setmode(_fileno(stdout), _O_TEXT);
					break;
				}
				case 'D':{
					_setmode(_fileno(stdout), _O_U16TEXT);
					wcout << L"\u2666";
					_setmode(_fileno(stdout), _O_TEXT);
					break;
				}
				case 'C':{
					_setmode(_fileno(stdout), _O_U16TEXT);
					wcout << L"\u2663";
					_setmode(_fileno(stdout), _O_TEXT);
					break;
				}
			}
			cout<<cCard2[1];
		}
		cout<<endl;
		for(int i=0;i<3;i++){
			wars1[i]=D1.front();
			if(wars1[i][1]=='0'){
			switch(wars1[i][0]){
				case 'S':{
					_setmode(_fileno(stdout), _O_U16TEXT);
					wcout << L"\u2660";
					_setmode(_fileno(stdout), _O_TEXT);
					break;
				}
				case 'H':{
					_setmode(_fileno(stdout), _O_U16TEXT);
					wcout << L"\u2665";
					_setmode(_fileno(stdout), _O_TEXT);
					break;
				}
				case 'D':{
					_setmode(_fileno(stdout), _O_U16TEXT);
					wcout << L"\u2666";
					_setmode(_fileno(stdout), _O_TEXT);
					break;
				}
				case 'C':{
					_setmode(_fileno(stdout), _O_U16TEXT);
					wcout << L"\u2663";
					_setmode(_fileno(stdout), _O_TEXT);
					break;
				}
			}
			cout<<"10    ";
		}	
		else{
			switch(wars1[i][0]){
				case 'S':{
					_setmode(_fileno(stdout), _O_U16TEXT);
					wcout << L"\u2660";
					_setmode(_fileno(stdout), _O_TEXT);
					break;
				}
				case 'H':{
					_setmode(_fileno(stdout), _O_U16TEXT);
					wcout << L"\u2665";
					_setmode(_fileno(stdout), _O_TEXT);
					break;
				}
				case 'D':{
					_setmode(_fileno(stdout), _O_U16TEXT);
					wcout << L"\u2666";
					_setmode(_fileno(stdout), _O_TEXT);
					break;
				}
				case 'C':{
					_setmode(_fileno(stdout), _O_U16TEXT);
					wcout << L"\u2663";
					_setmode(_fileno(stdout), _O_TEXT);
					break;
				}
			}
			cout<<wars1[i][1];
			
		cout<<"     ";
		}
			D1.pop();
			wars2[i]=D2.front();
		if(wars2[i][1]=='0'){
			switch(wars2[i][0]){
				case 'S':{
					_setmode(_fileno(stdout), _O_U16TEXT);
					wcout << L"\u2660";
					_setmode(_fileno(stdout), _O_TEXT);
					break;
				}
				case 'H':{
					_setmode(_fileno(stdout), _O_U16TEXT);
					wcout << L"\u2665";
					_setmode(_fileno(stdout), _O_TEXT);
					break;
				}
				case 'D':{
					_setmode(_fileno(stdout), _O_U16TEXT);
					wcout << L"\u2666";
					_setmode(_fileno(stdout), _O_TEXT);
					break;
				}
				case 'C':{
					_setmode(_fileno(stdout), _O_U16TEXT);
					wcout << L"\u2663";
					_setmode(_fileno(stdout), _O_TEXT);
					break;
				}
			}
			cout<<"10";
		}	
		else{
			switch(wars2[i][0]){
				case 'S':{
					_setmode(_fileno(stdout), _O_U16TEXT);
					wcout << L"\u2660";
					_setmode(_fileno(stdout), _O_TEXT);
					break;
				}
				case 'H':{
					_setmode(_fileno(stdout), _O_U16TEXT);
					wcout << L"\u2665";
					_setmode(_fileno(stdout), _O_TEXT);
					break;
				}
				case 'D':{
					_setmode(_fileno(stdout), _O_U16TEXT);
					wcout << L"\u2666";
					_setmode(_fileno(stdout), _O_TEXT);
					break;
				}
				case 'C':{
					_setmode(_fileno(stdout), _O_U16TEXT);
					wcout << L"\u2663";
					_setmode(_fileno(stdout), _O_TEXT);
					break;
				}
			}
			cout<<wars2[i][1];
		}
		cout<<endl;
			D2.pop();
		}
		if(findRank(wars1[2][1]) < findRank(wars2[2][1])) winner = 2;
		else winner = 1;
		
	}/*
	___WAR___
	  C1 D2  
	H4     S3
	SK     D3
	HK     HQ
	*/
	else{
		if(findRank(cCard1[1]) < findRank(cCard2[1])) winner = 2;
		else winner = 1;	
		if(cCard1[1]=='0') cout<<cCard1[0]<<"10";
		else cout << cCard1;
		_setmode(_fileno(stdout), _O_U16TEXT);
		wcout << L"\u2190" << L"\u2192";
		_setmode(_fileno(stdout), _O_TEXT);
		if(cCard2[1]=='0') cout<<cCard2[0]<<"10 ";
		else cout << cCard2 << " ";
		cout<<endl;
	}	
	cout<<"Winner is D"<<winner<<endl;
	queue <string> nD1, nD2;
	switch(winner){
		case 1:{
			nD1 = D1; 
			nD2 = D2;
			D1.push(cCard1);
			if(war){
				D1.push(wars1[0]);
				D1.push(wars1[1]);
				D1.push(wars1[2]);
			}
			D1.push(cCard2);
			if(war){
				D1.push(wars2[0]);
				D1.push(wars2[1]);
				D1.push(wars2[2]); 
			}
			nD1 = D1; 
			nD2 = D2;
			while (!D1.empty()){
				if(D1.front()[1]=='0'){
			switch(D1.front()[0]){
				case 'S':{
					_setmode(_fileno(stdout), _O_U16TEXT);
					wcout << L"\u2660";
					_setmode(_fileno(stdout), _O_TEXT);
					break;
				}
				case 'H':{
					_setmode(_fileno(stdout), _O_U16TEXT);
					wcout << L"\u2665";
					_setmode(_fileno(stdout), _O_TEXT);
					break;
				}
				case 'D':{
					_setmode(_fileno(stdout), _O_U16TEXT);
					wcout << L"\u2666";
					_setmode(_fileno(stdout), _O_TEXT);
					break;
				}
				case 'C':{
					_setmode(_fileno(stdout), _O_U16TEXT);
					wcout << L"\u2663";
					_setmode(_fileno(stdout), _O_TEXT);
					break;
				}
			}
			cout<<"10";
		}	
		else{
			switch(D1.front()[0]){
				case 'S':{
					_setmode(_fileno(stdout), _O_U16TEXT);
					wcout << L"\u2660";
					_setmode(_fileno(stdout), _O_TEXT);
					break;
				}
				case 'H':{
					_setmode(_fileno(stdout), _O_U16TEXT);
					wcout << L"\u2665";
					_setmode(_fileno(stdout), _O_TEXT);
					break;
				}
				case 'D':{
					_setmode(_fileno(stdout), _O_U16TEXT);
					wcout << L"\u2666";
					_setmode(_fileno(stdout), _O_TEXT);
					break;
				}
				case 'C':{
					_setmode(_fileno(stdout), _O_U16TEXT);
					wcout << L"\u2663";
					_setmode(_fileno(stdout), _O_TEXT);
					break;
				}
			}
			cout<<D1.front()[1];
		}
				cout << " ";
				D1.pop();
			}
			break;
		}
		case 2:{
			D1.push(cCard2);
			if(war){
				D2.push(wars2[0]);
				D2.push(wars2[1]);
				D2.push(wars2[2]);
			}
			D1.push(cCard1);
			if(war){
				D2.push(wars1[0]);
				D2.push(wars1[1]);
				D2.push(wars1[2]); 
			}
			nD1 = D1; 
			nD2 = D2;
			while (!D2.empty()){
				if(D2.front()[1]=='0'){
			switch(D2.front()[0]){
				case 'S':{
					_setmode(_fileno(stdout), _O_U16TEXT);
					wcout << L"\u2660";
					_setmode(_fileno(stdout), _O_TEXT);
					break;
				}
				case 'H':{
					_setmode(_fileno(stdout), _O_U16TEXT);
					wcout << L"\u2665";
					_setmode(_fileno(stdout), _O_TEXT);
					break;
				}
				case 'D':{
					_setmode(_fileno(stdout), _O_U16TEXT);
					wcout << L"\u2666";
					_setmode(_fileno(stdout), _O_TEXT);
					break;
				}
				case 'C':{
					_setmode(_fileno(stdout), _O_U16TEXT);
					wcout << L"\u2663";
					_setmode(_fileno(stdout), _O_TEXT);
					break;
				}
			}
			cout<<"10";
		}	
		else{
			switch(D2.front()[0]){
				case 'S':{
					_setmode(_fileno(stdout), _O_U16TEXT);
					wcout << L"\u2660";
					_setmode(_fileno(stdout), _O_TEXT);
					break;
				}
				case 'H':{
					_setmode(_fileno(stdout), _O_U16TEXT);
					wcout << L"\u2665";
					_setmode(_fileno(stdout), _O_TEXT);
					break;
				}
				case 'D':{
					_setmode(_fileno(stdout), _O_U16TEXT);
					wcout << L"\u2666";
					_setmode(_fileno(stdout), _O_TEXT);
					break;
				}
				case 'C':{
					_setmode(_fileno(stdout), _O_U16TEXT);
					wcout << L"\u2663";
					_setmode(_fileno(stdout), _O_TEXT);
					break;
				}
			}
			cout<<D2.front()[1];
		}
				cout << " ";
				D2.pop();
			}
			break;
		}	
	}
	cout<<"\n****************************";
	cout<<endl;/*
	_setmode(_fileno(stdout), _O_U16TEXT);
	wcout << L"\u2660";
	_setmode(_fileno(stdout), _O_TEXT);*/
	if(!(!nD1.empty() and !nD2.empty())){
		cout<<"Winner of the whole game is D"<<winner;
	}
	if(!nD1.empty() and !nD2.empty()) play(nD1, nD2);
}

void deckCreating(){
	int i=0;
	for(int s=0;s<4;s++){
		for(int r=0;r<13;r++){
			string str="  ";
			str[0]=suits[s];
			str[1]=rank[r];
			deck[i]=str;
			i++;
		}
	}
}

int main (){
srand (time(NULL));
queue <string> d1, d2;
/*d1.push("HA");
d1.push("S7");
d1.push("D3");
d1.push("DK");
d2.push("C4");
d2.push("SQ");
d2.push("HJ");
d2.push("D8");*/
deckCreating();
int buff = 52;
for(int i=0;i<26;i++){
	int ind = rand() % buff;
	d1.push(deck[ind]);
	swap(deck[ind], deck[buff-1]);
	buff--;
}
for(int i=0;i<26;i++){
	int ind = rand() % buff;
	d2.push(deck[ind]);
	swap(deck[ind], deck[buff-1]);
	if(buff>0) buff--;
}/*
cout<<"D1 = ";
while (!d1.empty()){
	cout << d1.front() << " ";
	d1.pop();
}
cout<<endl<<"D2 = ";
while (!d2.empty()){
	cout << d2.front() << " ";
	d2.pop();
}*/
play(d1, d2);
return 0;
}
// c h d s
