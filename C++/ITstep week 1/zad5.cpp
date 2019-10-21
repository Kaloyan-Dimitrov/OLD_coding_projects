#include <iostream>
using namespace std;
int main (){
	int arr[100], primes[100], pC, n;
	bool prime=true;
	cout<<"n=";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"arr["<<i<<"]=";
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		prime=true;
		if(arr[i]%2==0 && arr[i]!=2){
			prime=false;
		}
		for(int ch=3;ch<arr[i] && prime;ch+=2){
			if(arr[i]%ch==0) prime=false;
		}
		if(prime){
			primes[pC]=arr[i];
			pC++;
		}
	}
	cout<<endl;
	for(int i=0;i<pC;i++){
		cout<<"primes["<<i<<"]="<<primes[i]<<endl;
	}
	return 0;
}
