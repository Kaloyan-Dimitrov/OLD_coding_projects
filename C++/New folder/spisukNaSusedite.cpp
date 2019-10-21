#include <iostream>
using namespace std;
bool matrica[100][100];
int main (){
long long vurhove,brsusedi[100],susedi[100][100];
cin>>vurhove;
for(long long i=0;i<vurhove;i++){
    cout<<i<<"-";
    cin>>brsusedi[i];
    for(long long j=0;j<brsusedi[i];j++){
        cin>>susedi[i][j];
    }
}
for(long long i=0;i<vurhove;i++){
    for(long long j=0;j<brsusedi[i];j++){
        if(susedi[i][j]>i){
            cout<<i<<" "<<susedi[i][j]<<endl;
        }
    }
}
cout<<endl;
for(long long i=0;i<vurhove;i++){
    for(long long j=0;j<brsusedi[i];j++){
        matrica[i][susedi[i][j]]=true;
    }
}
cout<<endl;
for(long long i=0;i<vurhove;i++){
    for(long long j=0;j<vurhove;j++){
        if(i==j){
            cout<<"?";
        }else{
            if(matrica[i][j]==true){
                cout<<"t";
            }
            else{
                cout<<"f";
            }
        }
    }
    cout<<endl;
}
return 0;
}
/*
8
3 7 3 6
0
2 4 7
1 0
3 2 7 6
0
2 4 0
3 0 4 2
*/
