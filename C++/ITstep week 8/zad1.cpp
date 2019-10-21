#include <iostream>
#include <stdio.h>      
#include <stdlib.h>  
#include <time.h>
using namespace std;
int rollDice(){
	return rand() % 6 + 1;
}
bool check(){
	int e = 0, d = 0, t = 0, ch = 0, p = 0, sh = 0;
	for(int i=0;i<10000;i++){
		switch(rollDice()){
			case 1:{
				e++;
				break;
			}
			case 2:{
				d++;
				break;
			}
			case 3:{
				t++;
				break;
			}
			case 4:{
				ch++;
				break;
			}
			case 5:{
				p++;
				break;
			}
			case 6:{
				sh++;
				break;
			}
		}
	}
	if(e>=1550 and e<=1750 and d>=1550 and d<=1750 and ch>=1550 and ch<=1750 and p>=1550 and p<=1750 and t>=1550 and t<=1750 and sh>=1550 and sh<=1750) return true;
	else return false;
}
int main (){
srand(time(NULL));
for(int i=0;i<15;i++){
	cout<<i<<":";
	if(check) cout<<"TRUE\n";
	else cout<<"FALSE\n";
}
return 0;
}

