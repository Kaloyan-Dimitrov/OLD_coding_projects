#include <iostream>
using namespace std;
int sq(int inp){
	float i=1, sq=0, pr=1;
	while(sq<=inp){
		sq=i*i;
		i++;
		if(sq<=inp) pr*=sq;
	}
	return pr;
}
int main (){
	float matrix[4][4], k;
	for(int y=0;y<4;y++){
		for(int x=0;x<4;x++){
			cin>>matrix[x][y];
		}
	}
	cin>>k;
	matrix[1][0]=sq(matrix[1][0]);
	matrix[1][0]=sq(matrix[1][0]);
	matrix[2][0]=sq(matrix[2][0]);
	matrix[3][0]=sq(matrix[3][0]);
	matrix[2][1]=sq(matrix[2][1]);
	matrix[3][1]=sq(matrix[3][1]);
	matrix[3][2]=sq(matrix[3][2]);
	int brk=0;
	cout<<endl;
	for(int y=0;y<4;y++){
		for(int x=0;x<4;x++){
			if(matrix[x][y]==k){
				brk++;
			}
			cout<<matrix[x][y]<<" ";
		}
		cout<<endl;
	}
	cout<<"There were found "<<brk<<" times K in this matrix";
}
/*
1 2 3 4 
5 6 7 8
1 2 3 4 
5 6 7 8
*/



