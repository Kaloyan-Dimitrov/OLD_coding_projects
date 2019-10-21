#include<iostream>
using namespace std;
int main () {
long long tegloKuftak;
long long broiKuftaci;
long long nashetoTegloPredi;
long long nashetoNovoTeglo;
cout<<"Kolko teshite (predi iadeneto) ";
cin>>nashetoTegloPredi;
cout<<"Kolko kufteta ste isiadete ";
cin>>broiKuftaci;
cout<<"Kolko teshi edno kufte ";
cin>>tegloKuftak;
nashetoNovoTeglo=nashetoTegloPredi+(broiKuftaci*tegloKuftak);
cout<<"Vasheto teglo sled iadneneto shte e: ";
cout<<nashetoNovoTeglo;
return 0;
}
