#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char s[100];
	cin>>s;
	int d=1,sp=1;
	
	try{

		for(int i=0;i<strlen(s);i++)
		{
			if(s[i]>='0' && s[i]<='9')
				d=0;
			if(!((s[i]>='0' && s[i]<='9') || (s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')))
				sp=0;
		}
		if(strlen(s)<6)
			throw 1;
		if(d)
			throw 2;
		if(sp)
			throw 3;
	}
	catch(int a)
	{
		if(a==1)
			cout<<"username has less than 6 character"<<endl;
	    if(a==2)
	    	cout<<"user doesn't contain any digit"<<endl;
	    if(a==3)
	    	cout<<"username doesn't contain any special character"<<endl;
	}


return 0;
}