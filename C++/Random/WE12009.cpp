#include<iostream>
using namespace std;
int main (){
bool necheten=1;
char izvedeno;
for(char vav;vav!='.';){
    cin>>vav;
    if((vav>='A' and vav<='Z') or (vav>='a' and vav<='z')){
    if(vav>='a' and vav<='z'){
        if(necheten){
            izvedeno=(vav-'a')+'A';
            necheten=0;
        }else{
            izvedeno=vav;
            necheten=1;
        }
        cout<<izvedeno;
        }
    if(vav>='A' and vav<='Z'){
        if(necheten){
            izvedeno=vav;
            necheten=0;
        }else{
            izvedeno=(vav-'A')+'a';
            necheten=1;
        }
        cout<<izvedeno;
    }
}else{
    cout<<vav;
    if(necheten){
        necheten=false;
    }else{
        necheten=true;
    }
}
}
return 0;
}
