#include <iostream>
using namespace std;
int main(){
int data[12], max=0;
for(int i=0;i<12;i++){
    cin>>data[i];
}
cout<<"J F M A M J J A S O N D"<<endl;
cout<<"_______________________";
for(int i=0;i<12;i++){
    if(data[i]>max) max=data[i];
}
for(int j=0;j<max;j++){
    cout<<endl;
    for(int i=0;i<12;i++){
        if(data[i]>j) cout<<"* ";
        else cout<<"  ";
    }
}
return 0;
}
