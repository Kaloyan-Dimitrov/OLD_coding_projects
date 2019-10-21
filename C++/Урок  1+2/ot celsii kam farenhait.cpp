#include <iostream>
using namespace std;
int main(){
long long gradosiVcelsii;
long long gradosiVfarenhait;
cout<<"Kolko gradusa v celsii iskate da prevarnete v farenhait: ";
cin>>gradosiVcelsii;
gradosiVfarenhait=gradosiVcelsii*2+32;
cout<<"Gradosite v celsii, koito vavedohte sa ravni na ";
cout<<gradosiVfarenhait;
cout<<" gradusa farenhait";
return 0;
}
