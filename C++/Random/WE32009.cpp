#include<iostream>
using namespace std;
int main (){
long long ah,am,ah1,am1,bh,bm,bh1,bm1,ch,cm,cm1,ch1,avreme,bvreme,cvreme;
cin>>ah>>am>>ah1>>am1>>bh>>bm>>bh1>>bm1>>ch>>cm>>ch1>>cm1;
ah=ah*60;
ah1=ah1*60;
bh=bh*60;
bh1=bh1*60;
ch=ch*60;
ch1=ch1*60;
avreme=(ah1+am1)-(ah+am);
bvreme=(bh1+bm1)-(bh+bm);
cvreme=(ch1+cm1)-(ch+cm);
if(avreme==bvreme){
    if(cvreme>avreme){
        cout<<"CX";
    }
    if(cvreme<avreme){
        cout<<"XC";
    }
    if(cvreme==avreme){
        cout<<"X";
    }
    return 0;
}
if(avreme==cvreme){
    if(bvreme>avreme){
        cout<<"BX";
    }else{
        cout<<"XB";
    }
    return 0;
}
if(bvreme==cvreme){
    if(avreme>bvreme){
        cout<<"AX";
    }
    else{
        cout<<"XA";
    }
    return 0;
}
if(avreme>bvreme){
    if(bvreme>cvreme){
        cout<<"ABC";
        return 0;
    }
    else{
        if(avreme>cvreme){
            cout<<"ACB";
            return 0;
        }
        else{
            cout<<"CAB";
            return 0;
        }
    }
}
if(bvreme>avreme){
    if(avreme>cvreme){
        cout<<"BAC";
        return 0;
    }
    else{
        if(bvreme>cvreme){
            cout<<"BCA";
            return 0;
        }
        else{
            cout<<"CBA";
            return 0;
        }
    }
}
return 0;
}
