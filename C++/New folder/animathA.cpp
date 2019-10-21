// Task: animath
//Author: Plamenka Hristova
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;
int main()
{
 char num[10][3] = {"no", "pa", "re", "ci", "vo", "mu", "xa", "ze","bi","so"}, ch[3]="",zn;
 char l[50],lout[50];
 long long a[100],rez=0;
 int i,n,s,j,f,ik,k,sj,rr[20];
 cin>>n>>zn;
 getchar();
 for (i=0;i<n;i++)
 {
    a[i]=0;
    cin.getline(l,50,'\n');
    s=strlen(l);
    sj=-1;
    for(j=0;j<s;j++) if(l[j]!=' '){sj++;
                                    lout[sj]=l[j];}
   f=0;
   do{
    ch[0]=lout[f];
    ch[1]=lout[++f];
    ch[2]=0;
    // prewrystame dumata w cifra
    for (ik=0;ik<10;ik++)
        if(strcmp(ch,num[ik])==0){
                  a[i]=a[i]*10+ik;

        }

   } while (f<sj);
  switch (zn)
    {
      case '+': rez+=a[i]; break;
      case '-': if (i>0)rez-=a[i]; else rez=a[i];break;
    }
  }
  //cout<<"rez="<<rez<<endl;
  int br=0;
  if (rez==0) cout <<num[0];
  else
  {
    while (rez>0)
  {
      f=rez%10;
      rr[br++]=f;
      rez/=10;
  }

  for(k=br-1;k>=0;k--)
   cout<<num[rr[k]];
  }
  cout<<endl;
}
