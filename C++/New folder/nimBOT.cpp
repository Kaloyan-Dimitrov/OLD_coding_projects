#include <iostream>
#include <cstdlib>
using namespace std;
int main (){
long long kufteta,HODigrach1,HODigrach2=rand()%3+1;
long long red;
cout<<"Kolko kufteta ima v nachaloto?";
cin>>kufteta;
cout<<"igrach 1, kolko vsimash?\n";
cin>>HODigrach2;
kufteta-=HODigrach2;
for(red=2;kufteta>0;red++){
    cout<<"ostavat "<<kufteta<<", ";
    if(red%2==0){
        cout<<"umen bot, kolko vsimash?";
        if(kufteta%4!=0){
            HODigrach1=kufteta%4;
        }
        else{
            HODigrach1=rand()%3+1;
        }
        cout<<" "<<HODigrach1<<endl;
        kufteta-=HODigrach1;
    }
    else{
        cout<<"igrach 1, kolko vsimash?";
        cin>>HODigrach2;
        kufteta-=HODigrach2;
    }
}
if(red%2==1){
    cout<<"ostavat 0, Umenbot pecheli";
}
else{
    cout<<"ostavat 0, igrach1 pecheli";
}
return 0;
}
/*
MOGALIDASPECHELIASUSSIGURNOSTAKOOSTAVAT
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30
F T T T F T T T F T T  T
*/
