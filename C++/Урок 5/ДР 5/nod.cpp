#include <iostream>
using namespace std;
int main(){
long long a,b,probvandelitel,ng;
cin>>a;
cin>>b;
ng=1;
for(probvandelitel=0;probvandelitel<=a and probvandelitel<=b;probvandelitel=probvandelitel+1){
if(a%probvandelitel==0 and b%probvandelitel==0){
    ng=probvandelitel;
}
}
cout<<ng;
return 0;
}
