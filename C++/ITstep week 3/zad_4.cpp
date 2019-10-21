#include <iostream>
#include <string>
using namespace std;
string creatingN(string before, int i){
    string str=before+char('0'+i)+before;
    return str;
}
int main(){
string strs[20];
strs[0]="1";
for(int i=1;i<19;i++){
    strs[i]=creatingN(strs[i-1], i+1);
}
int n;
cin>>n;
cout<<strs[n-1];
return 0;
}
