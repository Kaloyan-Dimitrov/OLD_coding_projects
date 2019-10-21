#include <iostream>
using namespace std;
int main (){
	int n;
	bool isPr=true;
	cout<<"n=";
	cin>>n;
	if(n%2==0 && n!=2){
		isPr=false;
	}
	for(int ch=3;ch<n && isPr;ch+=2){
		if(n%ch==0) isPr=false;
	}
	if(isPr){
		cout<<"Prosto e!!";
	}
	else{
		cout<<"Sustavno e!!";
	}
	return 0;
}
