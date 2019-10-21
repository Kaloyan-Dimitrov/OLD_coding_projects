#include <iostream>
using namespace std;
int main(){
int n, nn=0, helper=1, digit;
cout<<"n=";
cin>>n;
while(n>0){
    digit=n%10;
    if(digit%3==0){
		 digit=digit/3;
	}
	else{
		if(digit%2==0){
			digit++;
		}
		else{
			digit+=2;
		}
	}
	nn+=digit*helper;
	helper*=10;
    n=n/10;
}
cout<<nn;
return 0;
}

