

#include <iostream>
using namespace std;
int main () {
long long delimo;
long long delitel;
long long chastno;
long long ostatuk;
cout<<"Molia vavedete delimoto si: ";
cin>>delimo;
cout<<"Molia vavedete dlitelia si: ";
cin>>delitel;
chastno=delimo/delitel;
cout<<"Chastnoto na chislata e ";
cout<<chastno;
ostatuk=delimo-chastno*delitel;
cout<<" a ostatukut e ";
cout<<ostatuk;
return 0;
}

