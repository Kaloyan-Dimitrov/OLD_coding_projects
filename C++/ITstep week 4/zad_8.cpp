#include <iostream>
using namespace std;
bool prime(int n){
	if(n%2==0 and n!=2) return false;
	else{
		for(int i=3;i<n;i+=2){
			if(n%i==0) return false;
		}
		return true;
	}
}
int main (){
double matrix[100][100];
int sum, n;
cin>>n;
for(int x=0;x<n;x++){
	for(int y=0;y<n;y++){
		cin>>matrix[x][y];
		sum=x+y;
		if(prime(sum) and sum!=1) matrix[x][y]+=42;
		else if(sum%2==0) matrix[x][y]/=2;
		else matrix[x][y]++;
	}
}
for(int x=0;x<n;x++){
	for(int y=0;y<n;y++){
		cout<<matrix[x][y]<<" ";
	}
	cout<<endl;
}
return 0;
}
