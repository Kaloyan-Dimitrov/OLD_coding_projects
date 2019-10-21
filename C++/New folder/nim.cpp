#include <iostream>
#include <cstdlib>
using namespace std;
int main (){
long long kufteta,HODigrach1,HODigrach2;
long long red;
cout<<"Kolko kufteta ima v nachaloto?";
cin>>kufteta;
cout<<"Igrach 1, kolko vsimash?";
cin>>HODigrach1;
kufteta-=HODigrach1;
for(red=2;kufteta!=0;red++){
    cout<<"ostavat "<<kufteta<<", ";
    if(red%2==1){
        cout<<"igrach 1, kolko vsimash?";
        cin>>HODigrach1;
        kufteta-=HODigrach1;
    }
    else{
        cout<<"bot, kolko vsimash?";
        cin>>HODigrach2;
        kufteta-=HODigrach2;
    }
}
if(red%2==0){
    cout<<"ostavat 0, igrach pecheli";
}
else{
    cout<<"ostavat 0, bot pecheli";
}
return 0;
}
