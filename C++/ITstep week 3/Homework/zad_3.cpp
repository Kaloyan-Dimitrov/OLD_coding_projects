#include <iostream>
using namespace std;
int matrix[100][100];
int n;
int checked[100], u=0;
int ans[100], a;
void vhod(){
	for(int x=0;x<n;x++){
		for(int y=0;y<n;y++){
			cin>>matrix[x][y];
		}
	}
}
int check(){
	bool c=true;
	for(int i=0;i<n;i++){
		c=true;
		for(int j=0;j<n;j++){
			ans[j]=matrix[i][j];
		}
		for(int j=0;j<n;j++){
			if(ans[j]!=matrix[j][i]) c=false; 
		}
		if(c){
			checked[u]=i;
			u++;
		}
	}
	return 0;
}
int main(){
cin>>n;
vhod();
check();
for(int i=0;i<u;i++){
	cout<<checked[i]<<" ";
}
return 0;
}

