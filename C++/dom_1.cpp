#include <iostream>
using namespace std;
int main (){
bool null=false; 
for(int i=111;i<1000;i++){
	null=false;
	int cifri[3]={i%10, i/10%10, i/100};
	bool del[3]={false, false, false};
	for(int j=0;j<3 and !null;j++){
		if(cifri[j]==0) null=true;
		else{
			if(i%cifri[j]==0) del[j]=true;
		}
	}
	if(del[0]==true and del[1]==true and del[2]==true){
		cout<<i<<" ";
	}
}
return 0;
}

