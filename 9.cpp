#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char c[100];
	cin>>c;
	int fa=1;
try{
	for(int i=0;i<strlen(c);i++){
		if(c[i]=='@')
			fa=0;

	}
	if(fa)
		throw "it doesn't contain @ ";
	if(!strstr(c,"gmail.com"))
		throw "it doesn't contain gmail.com";


}catch(const char *s){
	cout<<s<<endl;
}
	return 0;
}