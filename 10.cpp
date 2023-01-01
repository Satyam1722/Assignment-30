#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char s[100];
	cin>>s;
	int d=1,sp=1,es=1;
	
	try{

		for(int i=0;i<strlen(s);i++)
		{
			if(s[i]>='0' && s[i]<='9')
				d=0;
			if(!((s[i]>='0' && s[i]<='9') || (s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')))
				sp=0;
			if(s[i]==' ')
				es=0;
		}
		if(strlen(s)>8)
			throw 1;
		if(d)
			throw 2;
		if(sp)
			throw 3;
		if(es)
			throw 4;
	}
	catch(int a)
	{
		if(a==1)
			cout<<"nickname has more than 8 character"<<endl;
	    if(a==2)
	    	cout<<"nickname doesn't contain any digit"<<endl;
	    if(a==3)
	    	cout<<"nickname doesn't contain any special character"<<endl;
	    if(a==4)
	    	cout<<"nickname doesn't contain space"<<endl;
	}


return 0;
}