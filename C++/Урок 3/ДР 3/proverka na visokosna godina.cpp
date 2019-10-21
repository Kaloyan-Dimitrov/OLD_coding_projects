#include <iostream>
using namespace std;
int main (){
long long godina;
bool a;
bool b;
cout<<"Molia vavedete godinata ";
cin>>godina;
if(godina%100>0){
        if(godina%4==0){
            cout<<"Godinata e visokosna!!!!!!";
}
        else {
            cout<<"Godinata ne e visokosna :( :( :( :(";
}
}
else {
        if(godina/100%4==0){
            cout<<"Godinata e visokosna!!!!";
        }
        else {
            cout<<"Godinata ne e visokosna :( :( :( :(";
        }
}
return 0;
}
