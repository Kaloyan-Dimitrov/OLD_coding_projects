#include <iostream>
using namespace std;
int main (){
	char arr[100][100];
	int n;
	cin>>n;
	for(int x=0;x<n;x++){
		for(int y=0;y<n;y++){
			cin>>arr[x][y];
		}
	}
	cout<<endl;
	for(int i=n-1;i>0;i-=2){
		int m=(n-i)/2;
		for(int j=0;j<i;j++){
			cout<<arr[m][m+j]<<" ";
		}
		for(int j=0;j<i;j++){
			cout<<arr[m+j][n-1-m]<<" ";
		}
		for(int j=0;j<i;j++){
			cout<<arr[n-1-m][n-1-m-j]<<" ";
		}
		for(int j=0;j<i;j++){
			cout<<arr[n-1-m-j][m]<<" ";
		}
	}
	return 0;
}
/*
8
a b c d e f g h
i j k l m n o p
q r s t u v w x 
y z A B C D E F 
G H I J K L M N
O P Q R S T U V
W X Y Z 0 1 2 3 
4 5 6 7 8 9 + - 

n-1=0
n-3=1
n-5=2
n-7=3
*/
