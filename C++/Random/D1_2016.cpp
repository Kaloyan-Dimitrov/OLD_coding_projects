#include <iostream>
using namespace std;
int main (){
long long chislo,a1,maluk=0,goliam,sreden,a2,y,br=0,naimalakdelitel=0;
cin>>a1>>a2;
goliam=a1;
while(maluk+1<goliam){
    sreden=(maluk+goliam)/2;
    if(sreden*(sreden+1)<=a1){
        maluk=sreden;
    }
    if(sreden*(sreden+1)>=a1){
        goliam=sreden;
    }
    cout<<maluk<<" "<<goliam<<" "<<sreden<<endl;
}


naimalakdelitel=sreden;
for(y=naimalakdelitel;y*(y+1)<=a2;y++){
    if(y*(y+1)>=a1 and y*(y+1)<=a2){
        br++;
    }
}
cout<<br;
return 0;
}
