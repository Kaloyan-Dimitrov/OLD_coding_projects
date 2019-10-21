#include <iostream>
using namespace std;
int main(){
long long a,b,c,m,n,p,neshta=0;
cin>>a>>b>>c>>m>>n>>p;
if(a>=m+n+p or b>=m+n+p or c>=m+n+p){neshta=3;}
else{
        if(a>=m){if(neshta<1){neshta=1;}
                          if(a>=n+m){
                               if(neshta<2)  {neshta=2;}
                                if(c>=p){if(neshta<3){neshta=3;}}
                                if(b>=p){if(neshta<3){neshta=3;}}}

                          else{
                                if(b>=p or c>=p){if(neshta<2){neshta=2;}}
                                if(b>=n){if(neshta<2){neshta=2;}
                                        if(c>=p){if(neshta<3) {neshta=3;}}}
                                  else{
                                if(c>=n){if(neshta<2)neshta=2;}
                                        if(b>=p){if(neshta<3){neshta=3;}}}}

                                         }else{
        if(a>=p){if(neshta<1){neshta=1;}
                         if(a>=m+p){
                                if(neshta<2){neshta=2;}
                                if(c>=n){if(neshta<3){neshta=3;}}
                                if(b>=n){if(neshta<3) neshta=3;}}}

                          else{
                                if(b>=n or c>=n){if(neshta<2){neshta=2;}}
                                if(b>=m){if(neshta<2){neshta=2;}}
                                        if(c>=n){if(neshta<3){neshta=3;}}
else{
                                if(c>=m){if(neshta<2){neshta=2;}
                                        if(b>=n){if(neshta<3){neshta=3;}}}

                                         }
                                         }}

        if(a>=n){if(neshta<1){neshta=1;}
                         if(a>=m+n){
                                if(neshta<2){neshta=2;}
                                if(c>=p){if(neshta<3){neshta=3;}}
                                if(b>=p){if(neshta<3){neshta=3;}}}

                          else{
                                if(b>=p or c>=p){if(neshta<2){neshta=2;}}
                                if(b>=m){if(neshta<2){neshta=2;}
                                        if(c>=p){if(neshta<3){neshta=3;}}}
else{
                                if(c>=m){if(neshta<2){neshta=2;}
                                        if(b>=p){if(neshta<3){neshta=3;}}}}

                                         }}
else{
        if(a>=p){if(neshta<1){neshta=1;}

                         if(a>=n+p){
                                if(neshta<2){neshta=2;}
                                if(c>=m){if(neshta<3){neshta=3;}}
                                if(b>=m){if(neshta<3){neshta=3;}}

                          else{
                                if(b>=m or c>=m){if(neshta<2){neshta=2;}}
                                if(b>=n){if(neshta<2){neshta=2;}
else{
                                        if(c>=m){
                                        if(neshta<3){neshta=3;}
                                        }}
                                if(c>=n){if(neshta<2){neshta=2;}
                                        if(b>=m){if(neshta<3){neshta=3;}

                                        }}}}

                                         }
        }
}
       if(b>=m){if(neshta<1){neshta=1;}
                          if(b>=n+m){
                               if(neshta<2)  {neshta=2;}
                                if(c>=p){if(neshta<3){neshta=3;}}
                                if(a>=p){if(neshta<3){neshta=3;}}}

                          else{
                                if(a>=p or c>=p){if(neshta<2){neshta=2;}}
                                if(a>=n){if(neshta<2){neshta=2;}
                                        if(c>=p){if(neshta<3) {neshta=3;}}}
else{
                                if(c>=n){if(neshta<2)neshta=2;}
                                        if(a>=p){if(neshta<3){neshta=3;}}}}

                                         }else{
        if(b>=p){if(neshta<1){neshta=1;}
                         if(b>=m+p){
                                if(neshta<2){neshta=2;}
                                if(c>=n){if(neshta<3){neshta=3;}}
                                if(a>=n){if(neshta<3) neshta=3;}}}

                          else{
                                if(a>=n or c>=n){if(neshta<2){neshta=2;}}
                                if(a>=m){if(neshta<2){neshta=2;}}
                                        if(c>=n){if(neshta<3){neshta=3;}}
else{
                                if(c>=m){if(neshta<2){neshta=2;}
                                        if(a>=n){if(neshta<3){neshta=3;}}}}

                                         }}


        if(b>=n){if(neshta<1){neshta=1;}
                         if(b>=m+n){
                                if(neshta<2){neshta=2;}
                                if(c>=p){if(neshta<3){neshta=3;}}
                                if(a>=p){if(neshta<3){neshta=3;}}}

                          else{
                                if(a>=p or c>=p){if(neshta<2){neshta=2;}}
                                if(a>=m){if(neshta<2){neshta=2;}
                                        if(c>=p){if(neshta<3){neshta=3;}}
else{
                                if(c>=m){if(neshta<2){neshta=2;}
                                        if(a>=p){if(neshta<3){neshta=3;}}}}

                                         }}
        }
else{
        if(a>=p){if(neshta<1){neshta=1;}

                         if(a>=n+p){
                                if(neshta<2){neshta=2;}
                                if(c>=m){if(neshta<3){neshta=3;}}
                                if(b>=m){if(neshta<3){neshta=3;}}}

                          else{
                                if(b>=m or c>=m){if(neshta<2){neshta=2;}}
                                if(b>=n){if(neshta<2){neshta=2;}

                                        if(c>=m){
                                        if(neshta<3){neshta=3;}
                                        }}else{
                                if(c>=n){if(neshta<2){neshta=2;}
                                        if(b>=m){if(neshta<3){neshta=3;}

                                        }}}}

                                         }
}

        if(c>=m){if(neshta<1){neshta=1;}
                          if(c>=n+m){
                               if(neshta<2)  {neshta=2;}
                                if(a>=p){if(neshta<3){neshta=3;}}
                                if(b>=p){if(neshta<3){neshta=3;}}}

                          else{
                                if(b>=p or a>=p){if(neshta<2){neshta=2;}}
                                if(b>=n){if(neshta<2){neshta=2;}
                                        if(a>=p){if(neshta<3) {neshta=3;}}}
else{
                                if(a>=n){if(neshta<2)neshta=2;}
                                        if(b>=p){if(neshta<3){neshta=3;}}}}

                                         }else{
        if(a>=p){if(neshta<1){neshta=1;}
                         if(a>=m+p){
                                if(neshta<2){neshta=2;}
                                if(c>=n){if(neshta<3){neshta=3;}}
                                if(b>=n){if(neshta<3) neshta=3;}}}

                          else{
                                if(b>=n or c>=n){if(neshta<2){neshta=2;}}
                                if(b>=m){if(neshta<2){neshta=2;}}
                                        if(c>=n){if(neshta<3){neshta=3;}}
else{
                                if(c>=m){if(neshta<2){neshta=2;}
                                        if(b>=n){if(neshta<3){neshta=3;}}}}


                                         }}

        if(c>=n){if(neshta<1){neshta=1;}
                         if(c>=m+n){
                                if(neshta<2){neshta=2;}
                                if(a>=p){if(neshta<3){neshta=3;}}
                                if(b>=p){if(neshta<3){neshta=3;}}}

                          else{
                                if(b>=p or a>=p){if(neshta<2){neshta=2;}}
                                if(b>=m){if(neshta<2){neshta=2;}
                                        if(a>=p){if(neshta<3){neshta=3;}}}
else{
                                if(a>=m){if(neshta<2){neshta=2;}
                                        if(b>=p){if(neshta<3){neshta=3;}}}}

                                         }}
else{
        if(c>=p){if(neshta<1){neshta=1;}

                         if(c>=n+p){
                                if(neshta<2){neshta=2;}
                                if(a>=m){if(neshta<3){neshta=3;}}
                                if(b>=m){if(neshta<3){neshta=3;}}

                          else{
                                if(b>=m or a>=m){if(neshta<2){neshta=2;}}
                                if(b>=n){if(neshta<2){neshta=2;}
else{
                                        if(a>=m){
                                        if(neshta<3){neshta=3;}
                                        }}
                                if(a>=n){if(neshta<2){neshta=2;}
                                        if(b>=m){if(neshta<3){neshta=3;}

                                        }}}}

                                         }
}
}

}
if(a<m and a<n and a<p and b<m and b<n and b<p and c<m and c<n and c<p){neshta=0;}


cout<<neshta;
return 0;
}
