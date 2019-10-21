#include <iostream>
#include <string>
using namespace std;
string in;
void fun(){
	if(in[0]>96) in[0]-=32;
	for(int i=0;i<in.length();i++){
		if(in[i]==',' or in[i]=='.' or in[i]=='!' or in[i]=='?'){
			if(in[i+1]>96) in[i+1]-=32;
			else if(in[i+2]>96) in[i+2]-=32;
			if(in[i+1]!=' ') in=in.substr(0, i+1) + " " + in.substr(i+1, in.length()-i+1);
		}
	}
}
int main (){
getline(cin,in);
fun();
cout<<in;
return 0;
}

