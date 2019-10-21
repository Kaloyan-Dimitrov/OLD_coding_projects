#include <iostream>
using namespace std;
int fun(float inp){
	float i=1, sq=0, pr=1;
	while(sq<=inp){
		sq=i*i;
		i++;
		if(sq<=inp) pr*=sq;
	}
	return pr;
}
int main (){
float inp;
cin>>inp;
cout<<fun(inp);
return 0;
}

