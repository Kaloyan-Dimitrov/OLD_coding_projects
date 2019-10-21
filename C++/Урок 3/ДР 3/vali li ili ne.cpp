#include <iostream>
using namespace std;
int main (){
bool valiLi,slanchevoLiE;
cout<<"Vali li (Molia vavedete chislo 0-sa ne ili 1-za da)";
cin>>valiLi;
cout<<"Slanchevo li e ";
cin>>slanchevoLiE;
cout<<"Togava ";
if(valiLi==true and slanchevoLiE==true){
    cout<<"shte ima daga, ";
}
else{
    cout<<"niama da ima daga, ";
}
if(valiLi==true or slanchevoLiE==true){
    cout<<"shte vi triabva chadur i ";
}
else{
    cout<<"ne vi triabva chadur i ";
}
if (valiLi==false and slanchevoLiE==true){
    cout<<"e suho.";
}
else {
    cout<<"ne e suho.";

}
return 0;
}
