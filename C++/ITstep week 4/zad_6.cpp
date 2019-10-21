#include <iostream>
using namespace std;
bool is(int a, int c){
	if(a%10!=c and a>0)  is(a/10, c);
	else if(a==0) return false;
	else return true;
}
int main (){
int ch, c;
cin>>ch>>c;
if(is(ch, c)) cout<<"True.";
else cout<<"False.";
return 0;
}
// 3525
