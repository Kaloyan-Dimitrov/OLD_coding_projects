#include <iostream>
using namespace std;
int fa(int a){
	if(a>0) return a*fa(a-1);
	else return 1;
}
int main (){
int a;
cin>>a;
cout<<fa(a);	
return 0;
}
