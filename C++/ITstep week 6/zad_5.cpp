#include <iostream>
using namespace std;
float matr[3][3], k, brk=0;
int fun(float inp){
	float j=0, f=0, sum=0;
	while(f<=inp){
		f=1;
		for(int i=1;i<j+1;i++){
			f*=i;
		}
		j++;
		if(f<=inp){
			sum+=f;
		}
		else break;
	}
	return sum;
}
void m(float matr[3][3]){
	matr[1][0]=fun(matr[1][0]);
	matr[2][0]=fun(matr[2][0]);
	matr[2][1]=fun(matr[2][1]);
	matr[0][0]=fun(matr[0][0]);
	matr[1][1]=fun(matr[1][1]);
	matr[2][2]=fun(matr[2][2]);
	for(int y=0;y<3;y++){
		for(int x=0;x<3;x++){
			if(matr[x][y]==k) brk++;
		}
	}
	for(int y=0;y<3;y++){
		for(int x=0;x<3;x++){
			cout<<matr[x][y]<<" ";
		}
		cout<<endl;
	}
	cout<<brk;
}
int main (){
for(int y=0;y<3;y++){
	for(int x=0;x<3;x++){
		cin>>matr[x][y];
	}
}
cin>>k;
m(matr);
return 0;
}
/*
1 2 3
4 5 6
7 8 9
*/
