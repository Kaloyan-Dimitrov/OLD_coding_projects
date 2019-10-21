#include <iostream>
using namespace std;
int main (){
	int arr[100], n;
	bool tri=true;
	cout<<"n=";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"arr["<<i<<"]=";
		cin>>arr[i];
	}
	for(int i=1;i<n-1 && tri;i+=2){
		if(arr[i-1]>=arr[i] || arr[i+1]>=arr[i]){
			tri=false;
		}
	}
	if(tri) cout<<"Redicata e trion";
	else cout<<"Ne e trion";
	return 0;
}
