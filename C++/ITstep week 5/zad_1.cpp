#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <algorithm> 
#include <cstring>
using namespace std;
int main (){
srand (time(NULL));
int brC, brM;
char mnoj[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
char comb[6];
cout<<"Choose the digits count [2-6]"<<endl;
cin>>brC;
cout<<"Choose the symbol count [6-16]"<<endl;
cin>>brM;
int brm=brM-1;
for(int i=0;i<brC;i++){
	int j=rand()%brm;
	comb[i]=mnoj[j];
	swap(mnoj[j], mnoj[brm]);
	brm--;
}
bool win=false;
char entry[brC];
int tries=0;
while(!win){
	int bulls=0, cows=0;
	bool isThereSomething=false;
	cout<<endl<<"Make a guess ";
	cin>>entry;
	if(strcmp(entry, comb)){
		for(int c=0;c<brC;c++){
			for(int e=0;e<brC;e++){
				if(comb[c]==entry[e] and c==e){
					bulls++;
					isThereSomething=true;
				}
				if(comb[c]==entry[e] and c!=e){
					cows++;
					isThereSomething=true;
				}
			}
		}
		cout<<bulls<<" bulls "<<cows<<" cows";
		tries++;
	}
	else {
		cout<<"You win with "<<tries<<" tries!";
		win=true;
	}
}
return 0;
}
