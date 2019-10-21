#include <iostream>
using namespace std;
int main(){
long long a,b,c,m,n,p,neshta=0;
cin>>a>>b>>c>>m>>n>>p;
if((a-m<n or a-m<p or a-n<m or a-n<p or a-p<n or a-p<m or b-m<n or b-m<p or b-n<m or b-n<p or b-p<n or b-p<m or c-m<n or c-m<p or c-n<m or c-n<p or c-p<n or c-p<m )){
        if(a>=m or a>=n or a>=p or b>=m or b>=n or b>=p or c>=m or c>=n or c>=p){
            neshta=2;
        }
}
if(a>m+n+p or b>m+n+p or c>m+n+p){
    neshta=3;
}
if(a>=m or a>=n or a>=p or b>=m or b>=n or b>=p or c>=m or c>=n or c>=p){
        neshta=1;
    if(a-m>=n or a-m>=p and b-m>=n and b-m>=p and c-m>=n or c-m>=p and a-n>=p or b-n>=p or c-n>=p){
        neshta=2;
    if(a-m>=n or a-m>=p and b-m>=n and b-m>=p and c-m>=n or c-m>=p and a-n>=p or b-n>=p or c-n>=p){
        neshta=3;
    }
    }

}
if(a>=m or a>=n or a>=p and b>=m or b>=n or b>=p and c>=m or c>=n or c>=p){
        neshta=1;
    if(a-m>=n or a-m>=p and b-m>=n or b-m>=p and c-m>=n or c-m>=p and a-n>=p or b-n>=p or c-n>=p){
        neshta=2;
    if(a>=n or a>=p or a>=m and b>=n or b>=p or b>=m and c>=n or c>=p or c>=m){
        neshta=3;
    }
    }
}if(a==m or a==n or a==p or b==m or b==n or b==p or c==m or c==n or c==p){
        neshta=3;
}
if(a==m or a==n or a==p or b==m or b==n or b==p or c==m or c==n or c==p){
        neshta=3;
}
if(a-m<n or a-m<p or a-n<m or a-n<p or a-p<n or a-p<m or b-m<n or b-m<p or b-n<m or b-n<p or b-p<n or b-p<m or c-m<n or c-m<p or c-n<m or c-n<p or c-p<n or c-p<m ){
        if(a>=m or a>=n or a>=p or b>=m or b>=n or b>=p or c>=m or c>=n or c>=p){
            neshta=2;
        }
}
if((a==m or a==n or a==p) and (b==m or b==n or b==p) and (c==m or c==n or c==p)){
        neshta=3;
}
if((a==m or a==n or a==p) and (b==m or b==n or b==p) and (c==m or c==n or c==p)){
        neshta=3;
}
if((a-m<n or a-m<p or a-n<m or a-n<p or a-p<n or a-p<m) and  (b-m<n or b-m<p or b-n<m or b-n<p or b-p<n or b-p<m) and  (c-m<n or c-m<p or c-n<m or c-n<p or c-p<n or c-p<m )){
        if((a>=m or a>=n or a>=p) and  (b>=m or b>=n or b>=p) and (c>=m or c>=n or c>=p)){
            neshta=2;
        }
}

cout<<neshta;
return 0;
}
