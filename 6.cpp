#include<iostream>
#include<string.h>

using namespace std;

int main(){
int a;
cin>>a;
int n=0;
try{
    while(a){
     n++;
     a/=10;
}

if(n!=6)
throw "invalid pin code";
  
}
catch(const char *s)
{
    cout<<s<<endl;
}

   

  
    return 0 ;
}

