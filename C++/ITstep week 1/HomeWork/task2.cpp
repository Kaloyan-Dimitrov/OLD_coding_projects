#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
using namespace std;
int main(){
srand (time(NULL));
int num=rand()%100+1, playerGuess;
cout<<"Guess a number between 1 and 100"<<endl<<"Your guess is:";
for(int i=0;playerGuess!=num;i++){
	cin>>playerGuess;
	if(playerGuess<num){
		cout<<"The secret number is bigger. Guess again:";
	}
	if(playerGuess>num){
		cout<<"The secret number is smaller. Guess again:";
	}
	if(playerGuess==num){
		cout<<"You have guessed the number successfully with only "<<i+1<<" tries!!";
	}
}
return 0;
}

