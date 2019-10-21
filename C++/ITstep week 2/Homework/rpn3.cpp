#include <iostream>
#include <cmath>
#include <string.h>
#include <string>
#include <stack>
using namespace std;
string rpn;
int lastI=-1;
int arg[100];
int char_to_num(char a){
	return a-'0';
}
int two_arg (char act){
	int args[2];
	args[0]=arg[lastI-2];
	args[1]=arg[lastI-1];
	switch(act){
		case '+':
			arg[lastI-1]=0;
			arg[lastI-2]=args[0]+args[1];
			lastI--;
			return arg[lastI-1];
			break;
		case '-':
			arg[lastI-1]=0;
			arg[lastI-2]=abs(args[0]-args[1]);
			lastI--;
			return arg[lastI-1];
			break;
		case '/':
			arg[lastI-1]=0;
			arg[lastI-2]=args[0]/args[1];
			lastI--;
			return arg[lastI-1];
			break;
		case '*':
			arg[lastI-1]=0;
			arg[lastI-2]=args[0]*args[1];
			lastI--;
			return arg[lastI-1];
			break;
		case 'x':
			arg[lastI-1]=0;
			arg[lastI-2]=2^args[0]+args[1];
			lastI--;
			return arg[lastI-1];
			break;
	}
}
int one_arg(){
	arg[lastI-1]=2*arg[lastI-1]+1;
	return arg[lastI-1];
}
int three_arg(){
	int args[3];
	args[0]=arg[lastI-3];
	args[1]=arg[lastI-2];
	args[2]=arg[lastI-1];
	arg[lastI-2]=0;
	arg[lastI-1]=0;
	arg[lastI-3]=args[0]*2+args[1]*3+args[2]*4;
	lastI-=2;
	return arg[lastI-1];
}
int main(){
getline(cin, rpn);
char act;
bool end=false;
for(int i=0;i<rpn.length();i++){
	if(rpn[i]>='0' and rpn[i]<='9'){
		arg[lastI]=char_to_num(rpn[i]);
		lastI++;
	}
	else if(rpn[i]!=' ' and (rpn[i]=='+' or rpn[i]=='-' or rpn[i]=='*' or rpn[i]=='/' or rpn[i]=='x' or rpn[i]=='y' or rpn[i]=='z')){
		act=rpn[i];
		switch(act){
			case 'y':{
				if(rpn.length()>=3){
					if(i==rpn.length()-1 and lastI==0){
						cout<<one_arg()<<" ";
					}
					else{
						one_arg();
					}
				}
				else{
					cout<<"Invalid data1! Please try again.";
					i=0;
					rpn="";
					getline(cin, rpn);
				}
				break;
			}
			case 'z':{
				if(rpn.length()>=7){
					if(i==rpn.length()-1 and lastI==2){
						cout<<three_arg()<<" ";
					}
					else{
						three_arg();
					}
				}
				else{
					cout<<"Invalid data2! Please try again.";
					i=0;
					rpn="";
					getline(cin, rpn);
				}
				break;
			}
			default:{
				if(rpn.length()>=5){
					if(i==rpn.length()-1 and lastI==1){
						cout<<two_arg(act)<<" ";
					}
					else{
						two_arg(act);
					}
				}
				else{
					cout<<"Invalid data3! Please try again.";
					i=0;
					rpn="";
					getline(cin, rpn);
				}
				break;
			}
		}
	}
	else if(rpn[i]!=' '){
		cout<<"Invalid data4! Please try again.";
		i=0;
		rpn="";
		getline(cin, rpn);
	}
}
return 0;
}
//   1 3 y *
//   0123456
//	 13
