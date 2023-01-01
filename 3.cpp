#include<iostream>
#include<string.h>

using namespace std;

int main(){
  int a,b;
  char o;
  cin>>a>>o>>b;
  try{
    if(!(o=='+' || o=='-' || o=='*' || o=='/' || o=='%'))
      throw "it doesn't contain an operator";
    if(o=='/' && b==0)
      throw "can't divide by 0";

  }
  catch(const char *s)
  {
       cout<<s<<endl;
  }

 if(o=='+')
  cout<<a+b;
 if(o=='-')
  cout<<a-b;
 if(o=='*')
  cout<<a*b;
 if(o=='/')
  cout<<a/b;
 if(o=='%')
  cout<<a%b;
  
    return 0 ;
}

