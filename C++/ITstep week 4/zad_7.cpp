#include <iostream>
using namespace std;
int sbor(int a){
	if(a>0) return a%10+sbor(a/10);
	else return 0;
}
int main(){
int a;
cin>>a;
cout<<sbor(a);
return 0;
}
