#include <iostream>
using namespace std;
int main (){
long long chislo;
long long stotici;
long long desetici;
long long edinici;
long long sbor;
cin>>chislo;
edinici=chislo%10;
desetici=chislo/10%10;
stotici=chislo/100;
sbor=edinici+desetici+stotici;
cout<<sbor;
return 0;

}


