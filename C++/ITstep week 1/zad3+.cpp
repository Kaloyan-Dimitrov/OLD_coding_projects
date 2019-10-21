#include <iostream>
using namespace std;
int main(){
	int a[100],b[100];
	int n,m;
	cout<<"a length:";
	cin>>n;
	cout<<"b length:";
	cin>>m;
	
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
	
	for(int i=0; i<m; i++){
		cout<<"b["<<i<<"]=";
		cin>>b[i];
	}
	
	bool aInc=true, bInc=true;
	int k=0;
	while(aInc && k!=n-1){
		if(a[k]>a[k+1]) aInc=false;
		k++;
	}
	k=0;
	while(bInc && k!=m-1){
		if(b[k]>b[k+1]) bInc=false;
		k++;
	}
	if(aInc && bInc){
		int c[200];
		int aCount=0, bCount=0, cCount=0;
		while(aCount!=n || bCount!=n){
			if(a[aCount]<b[bCount]) {
				c[cCount]=a[aCount];
				aCount++;
				cCount++;
			}
			else{
				c[cCount]=b[bCount];
				bCount++;
				cCount++;
			}
		}
		for(int i=0; i<cCount; i++) cout<<c[i]<<" ";
		
		
		
	}
	else cout<<"Not sorted!";
	
	
	return 0;
}

