/*#include <iostream>

using namespace std;
int main (){
long long seg,chislo1,max=0,seg1,chislo2,n,e,d,help=0;
cin>>n;
for(long long g=n-1;g>0;g--){
    for(long long h=n-1;h>0;h--){
        help=0;
        seg=g*h;
        //cout<<1;
        seg1=seg;
        cout<<seg1<<endl;
        for(long long i=0;i<7;i++){
            help=help*10+seg1%10;
            seg1=seg1/10;
            //cout<<1;
        }
        //cout<<help;
        if(help==seg){
            //cout<<help;
            if(seg>max){
                max=seg;
                e=g;
                d=h;
            }
        }
    }
}
if(e<=d){
    cout<<e<<" "<<d<<endl;
}
else{
    cout<<d<<" "<<e<<endl;
}
cout<<max<<endl;
return 0;
}
///343
///0*10+3=3
///3*10+4=34
///34*10+3=343
*/
/*#include <iostream>

using namespace std;
int main (){
long long seg,chislo1,max=0,chislo2,n,e,d;
cin>>n;
for(long long g=n-1;g>0;g--){
    for(long long h=n-1;h>0;h--){
        seg=g*h;
        //cout<<1;
        if(seg<=9){
            if(seg>max){
                max=seg;
                e=g;
                d=h;
            }
        }
        if(seg<100 and seg>9){//2
            if(seg%10==seg/10){
                if(seg>max){
                    max=seg;
                    e=g;
                    d=h;
                }
            }
        }
        if(seg<1000 and seg>99){//3
            if(seg/100==seg%10){
                if(seg>max){
                    max=seg;
                    e=g;
                    d=h;
                }
            }
        }
        if(seg<10000 and seg>999){//4
            if(seg/1000==seg%10 and seg/10%10==seg/100%10){
                if(seg>max){
                    max=seg;
                    e=g;
                    d=h;
                }
            }
        }
        if(seg<100000 and seg>9999){//5
            if(seg/10000==seg%10 and seg/10%10==seg/1000%10){
                 if(seg>max){
                    max=seg;
                    e=g;
                    d=h;
                }
            }
        }
        if(seg<1000000 and seg>9999){//6
            if(seg/100000==seg/10 and seg/10%10==seg/10000%10 and seg/100%10==seg/1000%10){
                 if(seg>max){
                    max=seg;
                    e=g;
                    d=h;
                }
            }
        }
    }
}

if(e<=d){
    cout<<e<<" "<<d<<endl;
}
else{
    cout<<d<<" "<<e<<endl;
}
cout<<seg<<endl;
return 0;
}

*/
#include<iostream>
using namespace std;
int main(){
    long long N, vtoroChislo, purvoChislo, maximum=0, max1, max2, obratno=0, chislo, a;
    cin>>N;
    for(vtoroChislo=N-1;vtoroChislo>0;vtoroChislo--){
        for(purvoChislo=N-1;purvoChislo>0;purvoChislo--){
            chislo=vtoroChislo*purvoChislo;
            while(chislo>0){
                obratno=obratno*10+(chislo%10);
                chislo=chislo/10;
            }
            if(vtoroChislo*purvoChislo==obratno or vtoroChislo*purvoChislo<=9){
                obratno=vtoroChislo*purvoChislo;
                if(obratno>=maximum){
                    max1=purvoChislo;
                    max2=vtoroChislo;
                    maximum=obratno;
                }
            }
            obratno=0;
        }
    }
    if(max1<max2)cout<<max1<<" "<<max2<<endl;
    else cout<<max2<<" "<<max1<<endl;
    cout<<maximum;
    cout<<endl;
return 0;
}
