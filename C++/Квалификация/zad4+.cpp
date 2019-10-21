#include <iostream>
using namespace std;
int main(){
long long a,b,c,m,n,p,neshta=0;
cin>>a>>b>>c>>m>>n>>p;

if(a<m and a<n and a<p and b<m and b<n and b<p and c<m and c<n and c<p){
   neshta=0;
}
if(a>=m or a>=n or a>=p){
    neshta=1;
    if((a>=m+n or a>=m+p or a>=n+p) or  (b>=m+n or b>=m+p or b>=n+p) or (c>=m+n or c>=m+p or c>=p+n)){
    neshta=2;
           if(((a>=m+n or a>=m+p or a>=n+p ) and (b>=m or b>=n or)) or  (b>=m+n or b>=m+p or b>=n+p) or (c>=m+n or c>=m+p or c>=p+n)){
    neshta=2;

    }
    }

}
cout<<neshta;
return 0;
}
