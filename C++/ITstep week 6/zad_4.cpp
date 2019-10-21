#include <iostream>
using namespace std;
int fun(float inp){
	float j=0, f=0, sum=0;
	while(f<=inp){
		f=1;
		for(int i=1;i<j+1;i++){
			f*=i;
		}
		j++;
		if(f<=inp){
			sum+=f;
		}
		else break;
	}
	return sum;
}
int main (){
float inp;
cin>>inp;
cout<<fun(inp);
return 0;
}

