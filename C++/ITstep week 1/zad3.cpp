#include <iostream>
using namespace std;
int a[101], b[101], al, bl;
int main (){
bool isbsort=true, isasort=true;
cout<<"a length:";
cin>>al;
cout<<"b length:";
cin>>bl;

for(int i=0;i<al;i++){
	cout<<"a["<<i<<"]=";
	cin>>a[i];
}
for(int i=0;i<bl;i++){
	cout<<"b["<<i<<"]=";
	cin>>b[i];
}


for(int i=1;i<al;i++){
	if(a[i]<a[i-1]){
		isasort=false;
		break;
	}
}
for(int i=1;i<bl;i++){
	if(b[i]<b[i-1]){
		isbsort=false;
		break;
	}
}
int placeI=0, h;
if(isasort && isbsort){
	for(int i=0;i<bl;i++){
		for(int j=0;j<al;j++){
			if(a[j]<b[i] && (a[j+1]>b[i] || a[j+1]==0)){
				placeI=j+1;
			}
		}
		for(int j=al+2;j-1!=placeI;j--){
			h=a[j-1];
			a[j-1]=a[j];
			a[j]=h;	
		}
		a[placeI]=b[i];
		al++;
	}
}
cout<<endl;
for(int i=0;i<al;i++){
	cout<<"a["<<i<<"]=";
	cout<<a[i]<<endl;
}
return 0;
}

