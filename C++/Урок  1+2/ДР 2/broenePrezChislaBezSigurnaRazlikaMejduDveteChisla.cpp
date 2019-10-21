#include <iostream>
using namespace std;
int main (){
long long otKolko;
long long doKolko;
long long prezKolko;

cout<<"Ot kolko i do kolko iskate da broite? Ot ";
cin>>otKolko;
cout<<"Do ";
cin>>doKolko;
cout<<"Prez kolko izkate da broite? Prez ";
cin>>prezKolko;

cout<<"Chislata ot ";
cout<<otKolko;
cout<<" do ";
cout<<doKolko;
cout<<" prez ";
cout<<prezKolko;
cout<<" sa ";
cout<<otKolko;
cout<<" , ";


while(otKolko<doKolko-prezKolko){
    otKolko=otKolko+prezKolko;
    cout<<otKolko;
    cout<<" , ";
    if(doKolko=otKolko+prezKolko){
        cout<<doKolko;
}
}

    while(otKolko>doKolko+prezKolko){
    otKolko=otKolko-prezKolko;
    cout<<otKolko;
    cout<<" , ";

if(doKolko=otKolko-prezKolko){
        cout<<doKolko;
}
}
return 0;
}
