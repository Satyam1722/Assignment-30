#include<iostream>
using namespace std;

int main()
{
  int a,b;
  cin>>a>>b;
  try
  { 
    if(a==0)
      throw a;
    if(b==0);
     throw "can't divide by zero sorry";
     a=a/b;
  }
  catch(int a)
  {
    cout<<"integer type error "<<a<<endl;
  }
  catch(const char *s)
  {
    cout<<"string type error "<<s<<endl;
  }
  catch(...)
  {
    cout<<"default error "<<endl;
  }

  cout<<"result is "<<a;
  return 0;
}