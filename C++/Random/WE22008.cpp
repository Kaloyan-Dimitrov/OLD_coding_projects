#include <iostream>
using namespace std;
int main (){
long long dd,mm,gggg,novdd,novmm,novgggg;
cin>>dd>>mm>>gggg;
if(mm==1 or mm==3 or mm==5 or mm==7 or mm==8 or mm==10 or mm==12){
    if(dd<=31){
        if(mm!=12 and dd==31){
            novdd=1;
            novmm=mm+1;
            novgggg=gggg;
            cout<<"Yes \n";
            cout<<novdd<<"."<<novmm<<"."<<novgggg<<endl;
            return 0;
        }
        if(mm==12 and dd==31){
            novdd=1;
            novmm=1;
            novgggg=gggg+1;
            cout<<"Yes \n";
            cout<<novdd<<"."<<novmm<<"."<<novgggg<<endl;
            return 0;
        }
        if(dd<31){
            novdd=dd+1;
            novmm=mm;
            novgggg=gggg;
            cout<<"Yes \n";
            cout<<novdd<<"."<<novmm<<"."<<novgggg<<endl;
            return 0;
        }
    }
    else{
            novdd=31;
            cout<<"No\n";
            cout<<novdd<<endl;
            return 0;
    }
}
if(mm==4 or mm== 6 or mm==9 or mm==11){
    if(dd<=30){
        if(mm!=12 and dd==30){
            novdd=1;
            novmm=mm+1;
            novgggg=gggg;
            cout<<"Yes \n";
            cout<<novdd<<"."<<novmm<<"."<<novgggg<<endl;
            return 0;
        }
        if(dd<30){
            novdd=dd+1;
            novmm=mm;
            novgggg=gggg;
            cout<<"Yes \n";
            cout<<novdd<<"."<<novmm<<"."<<novgggg<<endl;
            return 0;
        }
    }
    else{
            novdd=30;
            cout<<"No\n";
            cout<<novdd<<endl;
            return 0;
    }
}
if(mm==2){
    if(dd==29){
            novdd=1;
            novmm=3;
            novgggg=gggg;
            cout<<"Yes \n";
            cout<<novdd<<"."<<novmm<<"."<<novgggg<<endl;
            return 0;
        }
        if(dd<29){
            novdd=dd+1;
            novmm=mm;
            novgggg=gggg;
            cout<<"Yes \n";
            cout<<novdd<<"."<<novmm<<"."<<novgggg<<endl;
            return 0;
        }
    }
    else{
            novdd=29;
            cout<<"No\n";
            cout<<novdd<<endl;
            return 0;
    }
}
return 0;
}
