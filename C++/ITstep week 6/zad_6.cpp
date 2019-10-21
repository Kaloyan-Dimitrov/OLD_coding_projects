#include <iostream>
#include <string>
using namespace std;
string fun(string in){
	bool gl=true;
	for(int i=0;i<in.length();i++){
		if(in[i]>96 and in[i]!='4' and in[i]!='6' and in[i]!=',' and in[i]!='.' and in[i]!=' ' and in[i]!='!' and in[i]!='?') gl=false;
	}
	for(int i=0;i<in.length();i++){
		if(in[i]=='4' and i==0){
			in="Ch"+in.substr(1, in.length()-1);
		}
		if(in[i]=='4' and i!=0 and (((in[i-1]>='A' and in[i-1]<='Z') or (in[i-1]>='a' and in[i-1]<='z')) or ((in[i+1]>='A' and in[i+1]<='Z') or (in[i+1]>='a' and in[i+1]
		<='z')))){
			in=in.substr(0, i)+"ch"+in.substr(i+1, in.length()-i+1);
		}
		if(in[i]=='6' and i==0){
			in="Sh"+in.substr(1, in.length()-1);
		}
		if(in[i]=='6' and i!=0 and (((in[i-1]>='A' and in[i-1]<='Z') or (in[i-1]>='a' and in[i-1]<='z')) or ((in[i+1]>='A' and in[i+1]<='Z') or (in[i+1]>='a' and in[i+1]
		<='z')))){
			in=in.substr(0, i)+"sh"+in.substr(i+1, in.length()-i+1);
		}  
	}
	if(gl){
		for(int i=1;i<in.length();i++){
			if(in[i]!='4' and in[i]!='6' and in[i]!=',' and in[i]!='.' and in[i]!=' ' and in[i]!='!' and in[i]!='?' and in[i]<97) in[i]+=32;
		}
	}
	return in;
}
int main (){
string input;
getline(cin, input);
cout<<fun(input);
return 0;
}

