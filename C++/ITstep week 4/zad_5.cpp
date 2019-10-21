#include <iostream>
using namespace std;
int fib(int a){
	if(a==1) return 1;
	else if(a==2) return 1;
	else return fib(a-1)+fib(a-2);	
}
int main(){
int a;
cin>>a;
cout<<fib(a);
return 0;
}
// 1 1 2 3 5 8 13 21 34 
