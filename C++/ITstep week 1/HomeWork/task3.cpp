#include <iostream>
using namespace std;
int main(){
int a[7], sum=0, digits=0;
for(int i=0;i<7;i++){
	cin>>a[i];
}
for(int i=0;i<7;i++){
	if(a[i]%2==0){
		sum+=a[i];
	}
	while(a[i]>0){
		a[i]/=10;
		digits++;
	}
}
cout<<"Digit count:"<<digits<<" and the sum is:"<<sum;
return 0;
}

