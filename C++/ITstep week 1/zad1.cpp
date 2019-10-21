#include <iostream>
using namespace std;
int main (){
int arr[100];
int n;
cout<<"n=";
cin>>n;
for(int i=0;i<n;i++){
	cout<<"arr["<<i<<"]=";
	cin>>arr[i];
}
cout<<endl;
for(int a=0;a<n;a++){
	int seg=arr[a];
	int min=seg, minI=a;
	for(int b=a+1;b<n;b++){
		if(arr[b]<=min){
			min=arr[b];
			minI=b;
		}
	}
	int m=arr[a];
	arr[a]=min;
	arr[minI]=m;
}
for(int i=0;i<n;i++){
	cout<<"arr["<<i<<"]=";
	cout<<arr[i]<<endl;
}

return 0;
}

