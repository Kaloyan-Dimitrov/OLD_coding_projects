#include <iostream>
using namespace std;
int it=0, rez=0, rezpr=0;
int a, b;
int po(int m, int n){
	rezpr+=m;
	n-=1;
	if(n>0) po(m, n);
	else return 0;
}
// 3 3 3 3 3
int stepen(int osnova){
	rezpr=0;
	po(rez, osnova);
	rez=rezpr; 
	b--;
	if(b>0) stepen(a);
	else return 0;
}
int main(){
cin>>a>>b;
rez=a;
b--;
stepen(a);
cout<<rez;
return 0;
}

