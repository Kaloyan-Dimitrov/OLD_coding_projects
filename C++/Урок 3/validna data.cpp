#include <iostream>
using namespace std;
int main (){
long long dd;
long long mm;
long long gggg;
long long novaData;

cout<<"Vavedete datata: ";
cin>>dd;
cout<<"Mesec: ";
cin>>mm;
cout<<"Godina(sheguvam se vavedete 2008 a ne proizvolna godina): ";
cin>>gggg;

if(dd>31){
    cout<<"No ";
}

if(mm=2,dd>29){
    cout<<"29 ";
}
if(mm=1 and dd>31){
    cout<<"31 ";
}
if(mm=3 and dd>31){
    cout<<"31 ";
}
if(mm=5 and dd>31){
    cout<<"31 ";
}
if(mm=7 and dd>31){
    cout<<"31 ";
}
if(mm=8 and dd>31){
    cout<<"31 ";
}
if(mm=10 and dd>31){
    cout<<"31 ";
}
if(mm=12 and dd>31){
    cout<<"31 ";
}
if(mm=4 and dd>30){
    cout<<"30 ";
}
if(mm=6 and dd>30){
    cout<<"30 ";
}
if(mm=9 and dd>30){
    cout<<"30 ";
}
if(mm=11 or dd>30){
    cout<<"30 ";
}

return 0;
}
