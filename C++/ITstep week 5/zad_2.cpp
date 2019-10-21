#include <iostream>
#include <stdlib.h> 
#include <time.h>
#include <cstring>
using namespace std;
void swap(int& a, int& b){
	int c=a;
	a=b;
	b=c;
} 
int matrix[3][3];
int main (){
srand(time(NULL));
int mnoj[9]={1, 2, 3, 4, 5, 6, 7, 8, 0};
for(int i=0;i<9;i++){
	int n=rand()%9;
	int m=rand()%9;
	int c=mnoj[m];
	mnoj[m]=mnoj[n];
	mnoj[n]=c;
}
int i=0, xn, yn;
for(int y=0;y<3;y++){
	for(int x=0;x<3;x++){
		matrix[x][y]=mnoj[i];
		i++;
		cout<<matrix[x][y]<<" ";
		if(matrix[x][y]==0){
			xn=x;
			yn=y;
		}
	}
	cout<<endl;
} 
char d;
bool win=false, invalid;
while(!win){
	cout<<"Enter direction"<<endl;
	cin>>d;
	invalid=false;
	switch(d){
		case 'l':{
			if(xn==2){
				invalid=true;
				break;
			}
			else{
				if(xn==0){
					matrix[0][yn]=matrix[1][yn];
					matrix[1][yn]=matrix[2][yn];
					matrix[2][yn]=0;
					xn=2;
					break;
				}
				matrix[1][yn]=matrix[2][yn];
				matrix[2][yn]=0;
				xn=2;
				break;
			}
		}
		case 'r':{
			if(xn==0){
				invalid=true;
				break;
			}
			else{
				if(xn==2){
					matrix[2][yn]=matrix[1][yn];
					matrix[1][yn]=matrix[0][yn];
					matrix[0][yn]=0;
					xn=0;
					break;
				}
				matrix[1][yn]=matrix[0][yn];
				matrix[0][yn]=0;
				xn=0;
				break;
			}
		}
		case 't':{
			if(yn==2){
				invalid=true;
				break;
			}
			else{
				if(yn==0){
					matrix[xn][0]=matrix[xn][1];
					matrix[xn][1]=matrix[xn][2];
					matrix[xn][2]=0;
					yn=2;
					break;
				}
				matrix[xn][1]=matrix[xn][2];
				matrix[xn][2]=0;
				yn=2;
				break;
			}
		}
		case 'd':{
			if(yn==0){
				invalid=true;
				break;
			}
			else{
				if(yn==2){
					matrix[xn][2]=matrix[xn][1];
					matrix[xn][1]=matrix[xn][0];
					matrix[xn][0]=0;
					yn=0;
					break;
				}
				matrix[xn][1]=matrix[xn][0];
				matrix[xn][0]=0;
				yn=0;
				break;
			}
		}
	}
	if(invalid) cout<<"Invalid data.";
	for(int y=0;y<3 and !invalid;y++){
		for(int x=0;x<3 and !invalid;x++){
			cout<<matrix[x][y]<<" ";
		}
		cout<<endl;
	}
}
return 0;
}
/*
9 5 6
7 4 3
2 0 1
*/
